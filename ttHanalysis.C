#define ttHanalysis_cxx
#include "ttHanalysis.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void ttHanalysis::Loop()
{


  Long64_t nentries = fChain->GetEntriesFast();
  int nused = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
      fChain->GetEntry(jentry);
        if (tight_muons_ + tight_electrons_ < 2) continue;
        nused++;
  }
  cout << "From " << nentries << " events, " << nused << " used" << endl;
}

