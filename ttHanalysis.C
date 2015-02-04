#define ttHanalysis_cxx
#include "ttHanalysis.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>


void ttHanalysis::Loop(){
  // running default loop:
  myLoop(0,0,0);
}

void ttHanalysis::myLoop(int nsel, int mode, bool silent)()
{

  if (mode != 0 && mode !=1 && mode !=2) mode = 0;
  if (!silent){
    cout << "[Info:]" ;
    if (mode == 0) cout << " emu channel, " ;
    else if (mode == 1) cout << " mumu channel, " ;
    else if (mode == 2) cout << " ee channel, " ;
  }
  char newRootFile[300];
  sprintf(newRootFile,"results/first_tight_%d.root", mode);
  TFile f_var(newRootFile, "RECREATE");
  if(!silent){
    std::cout << "results root file named " << newRootFile << std::endl;
  }

  char title[300];
  sprintf(title,"cuts");
  TH1F* histo = new TH1F( title, " ", 20, 0, 20 );
  histo->Sumw2();

  /*char myTexFile[300];
  sprintf(myTexFile,"twotightlep_%d.txt", mode);
  ofstream salida(myTexFile); 
  if(!silent){
    std::cout << "[Info:] text file named " << myTexFile << std::endl;
  }*/
  
  double weight = 1;

  Long64_t nentries = fChain->GetEntriesFast();
  int nused = 0;
  if (!silent) cout << "[Info:] Number of raw events: " << nentries << endl;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    fChain->GetEntry(jentry);
    histo->Fill(0., weight);
    if (!higgs_decay) continue;
    histo->Fill(1., weight);
    if (tight_leptons_ < 2) continue;
    histo->Fill(2., weight);
   
    TVector3 lepton1(tight_leptons_obj_fCoordinates_fX[0],tight_leptons_obj_fCoordinates_fY[0],tight_leptons_obj_fCoordinates_fZ[0]); 
    TVector3 lepton2(tight_leptons_obj_fCoordinates_fX[1],tight_leptons_obj_fCoordinates_fY[1],tight_leptons_obj_fCoordinates_fZ[1]); 	   
   
    bool goodemu = false;
    if (mode == 0 && tight_muons_ !=0 && tight_electrons_ != 0){
     if (tight_leptons_obj_fCoordinates_fT[0] == tight_muons_obj_fCoordinates_fT[0] 
      && tight_leptons_obj_fCoordinates_fT[1] == tight_electrons_obj_fCoordinates_fT[0]) goodemu = true;
     if (tight_leptons_obj_fCoordinates_fT[1] == tight_muons_obj_fCoordinates_fT[0] 
      && tight_leptons_obj_fCoordinates_fT[0] == tight_electrons_obj_fCoordinates_fT[0]) goodemu = true; 
    }
     
    if (mode == 0 && !goodemu) continue;
    if (mode == 1 && (tight_leptons_obj_fCoordinates_fT[0] != tight_muons_obj_fCoordinates_fT[0] ||
    		      tight_leptons_obj_fCoordinates_fT[1] != tight_muons_obj_fCoordinates_fT[1])) continue;
    if (mode == 2 && (tight_leptons_obj_fCoordinates_fT[0] != tight_electrons_obj_fCoordinates_fT[0] ||
		      tight_leptons_obj_fCoordinates_fT[1] != tight_electrons_obj_fCoordinates_fT[1])) continue;
	  
	  
    histo->Fill(3., weight);
	    
    if (mode == 0 && tight_muons_charge[0]!=tight_electrons_charge[0]) continue;
    if (mode == 1 && tight_muons_charge[0]!=tight_muons_charge[1]) continue;
    if (mode == 2 && tight_electrons_charge[0]!=tight_electrons_charge[1]) continue;
    
    histo->Fill(4., weight);
	      
    if (lepton1.Pt() < 20) continue;
    if (lepton2.Pt() < 20)  continue;
   
    histo->Fill(5., weight);
  
  }
  
  char label[300];
  sprintf(label, "emu");
  if (mode == 1) sprintf(label,"mumu");
  if (mode == 2) sprintf(label,"ee");
  
 
 
  
  if (!silent){
    cout << "------------------------------------------" << endl;
    cout << "[Results:] tight leptons " << label << endl;
    cout << "------------------------------------------" << endl;
    for (int i = 1; i < 9; i++){
      if (i == 1) cout << " all: " << histo->GetBinContent(i) << " +/- " << histo->GetBinError(i) << endl;
  //    if (i == 2) cout << " higgs decay: " << histo->GetBinContent(i) << " +/- " << histo->GetBinError(i) << endl;
      if (i == 3) cout << " 2+ tight leptons: " << histo->GetBinContent(i) << " +/- " << histo->GetBinError(i) << endl;
    //  if (i == 4) cout << " " << label << ": " << histo->GetBinContent(i) << " +/- " << histo->GetBinError(i) << endl;
      if (i == 5) cout << " SS: " << histo->GetBinContent(i) << " +/- " << histo->GetBinError(i) << endl;
      if (i == 6) cout << " pt > 20,20: " << histo->GetBinContent(i) << " +/- " << histo->GetBinError(i) << endl;
    }
    cout << "------------------------------------------" << endl;



  }
  f_var.Write();
  f_var.Close();

}
