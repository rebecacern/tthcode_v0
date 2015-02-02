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
      if (!higgs_decay) continue;
       // if (loose_muons_ + loose_electrons_ < 2) continue;
       
       //cout << preselected_muons_ << ", " << preselected_electrons_ << ", " << preselected_leptons_ << endl;
       if ( preselected_muons_+ preselected_electrons_ != preselected_leptons_ ) cout << "EJEM" << endl;
              if ( tight_muons_+ tight_electrons_ != tight_leptons_ ) cout << "EJEM" << endl;

       
        if (preselected_muons_ + preselected_electrons_ != 2) continue;
	  //if (tight_muons_ !=2) continue;
	  //if (preselected_muons_ !=2) continue;
	  if (preselected_electrons_ !=2) continue;
	    //if (preselected_muons_charge[0]!=preselected_muons_charge[1]) continue;
	    if (preselected_electrons_charge[0]!=preselected_electrons_charge[1]) continue;
	      //if (preselected_muons_obj_fCoordinates_fT[0] <= 20) continue;
	        //if (preselected_muons_obj_fCoordinates_fT[1] <= 20)  continue;
		if (preselected_electrons_obj_fCoordinates_fT[0] <= 20) continue;
	          if (preselected_electrons_obj_fCoordinates_fT[1] <= 20)  continue;
		  //if (preselected_muons_lepMVA[0] <= 0.7) continue;
		   // if (preselected_muons_lepMVA[1] <= 0.7) continue;
		   if (preselected_electrons_lepMVA[0] <= 0.7) continue;
		    if (preselected_electrons_lepMVA[1] <= 0.7) continue;
		   
		    //cout << preselected_muons_chargeFlip[0] << " - " << preselected_muons_chargeFlip[1]<< endl;
              nused++;
  }
  cout << "From " << nentries << " events, " << nused << " used" << endl;
}
