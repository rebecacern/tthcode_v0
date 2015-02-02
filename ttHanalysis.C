#define ttHanalysis_cxx
#include "ttHanalysis.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TH1.h>

void ttHanalysis::Loop(){
// running default loop:
myLoop(0,0,0);
}

void ttHanalysis::myLoop(int nsel, int mode, bool silent)()
{
bool silent = false;

  char newRootFile[300];
  sprintf(newRootFile,"results/first.root");
  TFile f_var(newRootFile, "RECREATE");
  if(!silent){
    std::cout << "[Info:] results root file " << newRootFile << std::endl;
  }

 char title[300];
 sprintf(title,"cuts");
 TH1F* histo = new TH1F( title, " ", 20, 0, 20 );
 histo->Sumw2();

 double weight = 1;

  Long64_t nentries = fChain->GetEntriesFast();
  int nused = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
      fChain->GetEntry(jentry);
      histo->Fill(0., weight);
      if (!higgs_decay) continue;
        histo->Fill(1., weight);
        if (loose_leptons_ < 2) continue;
	  histo->Fill(2., weight);
          if (loose_leptons_ != 2) continue;
	    if (mode == 0 && loose_muons_ !=1) continue;
	    if (mode == 1 && loose_muons_ !=2) continue;
	    if (mode == 2 && loose_electrons_ !=2) continue;
	    histo->Fill(3., weight);
	    if (mode == 1 && loose_muons_charge[0]!=loose_muons_charge[1]) continue;
	      histo->Fill(4., weight);
	      if (mode == 1 && loose_muons_obj_fCoordinates_fT[0] <= 20) continue;
	        if (mode == 1 && loose_muons_obj_fCoordinates_fT[1] <= 20)  continue;
	          histo->Fill(5., weight);
  }
  
 char label[300];
 sprintf(label, "emu");
 if (mode == 1) sprintf(label,"mumu");
 if (mode == 2) sprintf(label,"ee");
  
  if (!silent){
    cout << "------------------------------------------" << endl;
    cout << "[Results:] " << endl;
    cout << "------------------------------------------" << endl;
    for (int i = 1; i < 9; i++){
      if (i == 1) cout << " all: " << histo->GetBinContent(i) << " +/- " << histo->GetBinError(i) << endl;
      if (i == 2) cout << " higgs decay: " << histo->GetBinContent(i) << " +/- " << histo->GetBinError(i) << endl;
      if (i == 3) cout << " 2+ loose leptons: " << histo->GetBinContent(i) << " +/- " << histo->GetBinError(i) << endl;
      if (i == 4) cout << " " << label << ": " << histo->GetBinContent(i) << " +/- " << histo->GetBinError(i) << endl;
      if (i == 5) cout << " SS: " << histo->GetBinContent(i) << " +/- " << histo->GetBinError(i) << endl;
      if (i == 6) cout << " pt > 20,20: " << histo->GetBinContent(i) << " +/- " << histo->GetBinError(i) << endl;
}
cout << "------------------------------------------" << endl;
}
f_var.Write();
f_var.Close();

}
