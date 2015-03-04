//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Mar  4 10:28:41 2015 by ROOT version 5.34/18
// from TTree summaryTree/Summary Event Values
// found on file: ../tuples/synch_full_second.root
//////////////////////////////////////////////////////////

#ifndef ttHanalysis_h
#define ttHanalysis_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <stdlib.h>
#include <math.h> 
#include <cmath>
#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

// Header file for the classes stored in the TTree if any.
#include <vector>
#include <Math/GenVector/PxPyPzE4D.h>


// Fixed size dimensions of array or collections stored in the TTree if any.
const Int_t kMaxpreselected_leptons = 5;
const Int_t kMaxpreselected_electrons = 5;
const Int_t kMaxpreselected_muons = 5;
const Int_t kMaxloose_leptons = 5;
const Int_t kMaxloose_electrons = 4;
const Int_t kMaxloose_muons = 5;
const Int_t kMaxtight_leptons = 5;
const Int_t kMaxtight_electrons = 3;
const Int_t kMaxtight_muons = 3;
const Int_t kMaxraw_electrons = 13;
const Int_t kMaxraw_muons = 28;
const Int_t kMaxpreselected_jets = 18;
const Int_t kMaxloose_bJets = 12;
const Int_t kMaxmet = 1;
const Int_t kMaxpruned_genParticles = 266;

class ttHanalysis {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Double_t        mcwgt;
   Double_t        wgt;
   Double_t        wallTimePerEvent;
   Int_t           eventnum;
   Int_t           lumiBlock;
   Int_t           runNumber;
   Int_t           higgs_decay;
   Int_t           preselected_leptons_;
   Double_t        preselected_leptons_obj_fCoordinates_fX[kMaxpreselected_leptons];   //[preselected_leptons_]
   Double_t        preselected_leptons_obj_fCoordinates_fY[kMaxpreselected_leptons];   //[preselected_leptons_]
   Double_t        preselected_leptons_obj_fCoordinates_fZ[kMaxpreselected_leptons];   //[preselected_leptons_]
   Double_t        preselected_leptons_obj_fCoordinates_fT[kMaxpreselected_leptons];   //[preselected_leptons_]
   Int_t           preselected_leptons_pdgID[kMaxpreselected_leptons];   //[preselected_leptons_]
   Double_t        preselected_leptons_dxy[kMaxpreselected_leptons];   //[preselected_leptons_]
   Double_t        preselected_leptons_dz[kMaxpreselected_leptons];   //[preselected_leptons_]
   Int_t           preselected_leptons_charge[kMaxpreselected_leptons];   //[preselected_leptons_]
   Double_t        preselected_leptons_relIso[kMaxpreselected_leptons];   //[preselected_leptons_]
   Double_t        preselected_leptons_lepMVA[kMaxpreselected_leptons];   //[preselected_leptons_]
   Double_t        preselected_leptons_chreliso[kMaxpreselected_leptons];   //[preselected_leptons_]
   Double_t        preselected_leptons_nureliso[kMaxpreselected_leptons];   //[preselected_leptons_]
   Double_t        preselected_leptons_matchedJetdR[kMaxpreselected_leptons];   //[preselected_leptons_]
   Double_t        preselected_leptons_jetPtRatio[kMaxpreselected_leptons];   //[preselected_leptons_]
   Double_t        preselected_leptons_csv[kMaxpreselected_leptons];   //[preselected_leptons_]
   Double_t        preselected_leptons_sip3D[kMaxpreselected_leptons];   //[preselected_leptons_]
   Int_t           preselected_electrons_;
   Double_t        preselected_electrons_obj_fCoordinates_fX[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_obj_fCoordinates_fY[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_obj_fCoordinates_fZ[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_obj_fCoordinates_fT[kMaxpreselected_electrons];   //[preselected_electrons_]
   Int_t           preselected_electrons_pdgID[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_dxy[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_dz[kMaxpreselected_electrons];   //[preselected_electrons_]
   Int_t           preselected_electrons_charge[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_relIso[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_lepMVA[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_chreliso[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_nureliso[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_matchedJetdR[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_jetPtRatio[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_csv[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_sip3D[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_SCeta[kMaxpreselected_electrons];   //[preselected_electrons_]
   Bool_t          preselected_electrons_isGsfCtfScPixChargeConsistent[kMaxpreselected_electrons];   //[preselected_electrons_]
   Int_t           preselected_electrons_numMissingInnerHits[kMaxpreselected_electrons];   //[preselected_electrons_]
   Bool_t          preselected_electrons_passConversioVeto[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_dEtaIn[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_dPhiIn[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_full5x5_sigmaIetaIeta[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_hadronicOverEm[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_mvaID[kMaxpreselected_electrons];   //[preselected_electrons_]
   Int_t           preselected_muons_;
   Double_t        preselected_muons_obj_fCoordinates_fX[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_obj_fCoordinates_fY[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_obj_fCoordinates_fZ[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_obj_fCoordinates_fT[kMaxpreselected_muons];   //[preselected_muons_]
   Int_t           preselected_muons_pdgID[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_dxy[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_dz[kMaxpreselected_muons];   //[preselected_muons_]
   Int_t           preselected_muons_charge[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_relIso[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_lepMVA[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_chreliso[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_nureliso[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_matchedJetdR[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_jetPtRatio[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_csv[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_sip3D[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_chargeFlip[kMaxpreselected_muons];   //[preselected_muons_]
   Bool_t          preselected_muons_isPFMuon[kMaxpreselected_muons];   //[preselected_muons_]
   Bool_t          preselected_muons_isTrackerMuon[kMaxpreselected_muons];   //[preselected_muons_]
   Bool_t          preselected_muons_isGlobalMuon[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_normalizedChi2[kMaxpreselected_muons];   //[preselected_muons_]
   Int_t           preselected_muons_numberOfValidMuonHits[kMaxpreselected_muons];   //[preselected_muons_]
   Int_t           preselected_muons_numberOfMatchedStations[kMaxpreselected_muons];   //[preselected_muons_]
   Int_t           preselected_muons_numberOfValidPixelHits[kMaxpreselected_muons];   //[preselected_muons_]
   Int_t           preselected_muons_trackerLayersWithMeasurement[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_localChi2[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_trKink[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_validFrac[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_segCompatibility[kMaxpreselected_muons];   //[preselected_muons_]
   Int_t           loose_leptons_;
   Double_t        loose_leptons_obj_fCoordinates_fX[kMaxloose_leptons];   //[loose_leptons_]
   Double_t        loose_leptons_obj_fCoordinates_fY[kMaxloose_leptons];   //[loose_leptons_]
   Double_t        loose_leptons_obj_fCoordinates_fZ[kMaxloose_leptons];   //[loose_leptons_]
   Double_t        loose_leptons_obj_fCoordinates_fT[kMaxloose_leptons];   //[loose_leptons_]
   Int_t           loose_leptons_pdgID[kMaxloose_leptons];   //[loose_leptons_]
   Double_t        loose_leptons_dxy[kMaxloose_leptons];   //[loose_leptons_]
   Double_t        loose_leptons_dz[kMaxloose_leptons];   //[loose_leptons_]
   Int_t           loose_leptons_charge[kMaxloose_leptons];   //[loose_leptons_]
   Double_t        loose_leptons_relIso[kMaxloose_leptons];   //[loose_leptons_]
   Double_t        loose_leptons_lepMVA[kMaxloose_leptons];   //[loose_leptons_]
   Double_t        loose_leptons_chreliso[kMaxloose_leptons];   //[loose_leptons_]
   Double_t        loose_leptons_nureliso[kMaxloose_leptons];   //[loose_leptons_]
   Double_t        loose_leptons_matchedJetdR[kMaxloose_leptons];   //[loose_leptons_]
   Double_t        loose_leptons_jetPtRatio[kMaxloose_leptons];   //[loose_leptons_]
   Double_t        loose_leptons_csv[kMaxloose_leptons];   //[loose_leptons_]
   Double_t        loose_leptons_sip3D[kMaxloose_leptons];   //[loose_leptons_]
   Int_t           loose_electrons_;
   Double_t        loose_electrons_obj_fCoordinates_fX[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_obj_fCoordinates_fY[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_obj_fCoordinates_fZ[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_obj_fCoordinates_fT[kMaxloose_electrons];   //[loose_electrons_]
   Int_t           loose_electrons_pdgID[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_dxy[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_dz[kMaxloose_electrons];   //[loose_electrons_]
   Int_t           loose_electrons_charge[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_relIso[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_lepMVA[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_chreliso[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_nureliso[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_matchedJetdR[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_jetPtRatio[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_csv[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_sip3D[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_SCeta[kMaxloose_electrons];   //[loose_electrons_]
   Bool_t          loose_electrons_isGsfCtfScPixChargeConsistent[kMaxloose_electrons];   //[loose_electrons_]
   Int_t           loose_electrons_numMissingInnerHits[kMaxloose_electrons];   //[loose_electrons_]
   Bool_t          loose_electrons_passConversioVeto[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_dEtaIn[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_dPhiIn[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_full5x5_sigmaIetaIeta[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_hadronicOverEm[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_mvaID[kMaxloose_electrons];   //[loose_electrons_]
   Int_t           loose_muons_;
   Double_t        loose_muons_obj_fCoordinates_fX[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_obj_fCoordinates_fY[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_obj_fCoordinates_fZ[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_obj_fCoordinates_fT[kMaxloose_muons];   //[loose_muons_]
   Int_t           loose_muons_pdgID[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_dxy[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_dz[kMaxloose_muons];   //[loose_muons_]
   Int_t           loose_muons_charge[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_relIso[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_lepMVA[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_chreliso[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_nureliso[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_matchedJetdR[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_jetPtRatio[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_csv[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_sip3D[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_chargeFlip[kMaxloose_muons];   //[loose_muons_]
   Bool_t          loose_muons_isPFMuon[kMaxloose_muons];   //[loose_muons_]
   Bool_t          loose_muons_isTrackerMuon[kMaxloose_muons];   //[loose_muons_]
   Bool_t          loose_muons_isGlobalMuon[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_normalizedChi2[kMaxloose_muons];   //[loose_muons_]
   Int_t           loose_muons_numberOfValidMuonHits[kMaxloose_muons];   //[loose_muons_]
   Int_t           loose_muons_numberOfMatchedStations[kMaxloose_muons];   //[loose_muons_]
   Int_t           loose_muons_numberOfValidPixelHits[kMaxloose_muons];   //[loose_muons_]
   Int_t           loose_muons_trackerLayersWithMeasurement[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_localChi2[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_trKink[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_validFrac[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_segCompatibility[kMaxloose_muons];   //[loose_muons_]
   Int_t           tight_leptons_;
   Double_t        tight_leptons_obj_fCoordinates_fX[kMaxtight_leptons];   //[tight_leptons_]
   Double_t        tight_leptons_obj_fCoordinates_fY[kMaxtight_leptons];   //[tight_leptons_]
   Double_t        tight_leptons_obj_fCoordinates_fZ[kMaxtight_leptons];   //[tight_leptons_]
   Double_t        tight_leptons_obj_fCoordinates_fT[kMaxtight_leptons];   //[tight_leptons_]
   Int_t           tight_leptons_pdgID[kMaxtight_leptons];   //[tight_leptons_]
   Double_t        tight_leptons_dxy[kMaxtight_leptons];   //[tight_leptons_]
   Double_t        tight_leptons_dz[kMaxtight_leptons];   //[tight_leptons_]
   Int_t           tight_leptons_charge[kMaxtight_leptons];   //[tight_leptons_]
   Double_t        tight_leptons_relIso[kMaxtight_leptons];   //[tight_leptons_]
   Double_t        tight_leptons_lepMVA[kMaxtight_leptons];   //[tight_leptons_]
   Double_t        tight_leptons_chreliso[kMaxtight_leptons];   //[tight_leptons_]
   Double_t        tight_leptons_nureliso[kMaxtight_leptons];   //[tight_leptons_]
   Double_t        tight_leptons_matchedJetdR[kMaxtight_leptons];   //[tight_leptons_]
   Double_t        tight_leptons_jetPtRatio[kMaxtight_leptons];   //[tight_leptons_]
   Double_t        tight_leptons_csv[kMaxtight_leptons];   //[tight_leptons_]
   Double_t        tight_leptons_sip3D[kMaxtight_leptons];   //[tight_leptons_]
   Int_t           tight_electrons_;
   Double_t        tight_electrons_obj_fCoordinates_fX[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_obj_fCoordinates_fY[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_obj_fCoordinates_fZ[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_obj_fCoordinates_fT[kMaxtight_electrons];   //[tight_electrons_]
   Int_t           tight_electrons_pdgID[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_dxy[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_dz[kMaxtight_electrons];   //[tight_electrons_]
   Int_t           tight_electrons_charge[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_relIso[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_lepMVA[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_chreliso[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_nureliso[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_matchedJetdR[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_jetPtRatio[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_csv[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_sip3D[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_SCeta[kMaxtight_electrons];   //[tight_electrons_]
   Bool_t          tight_electrons_isGsfCtfScPixChargeConsistent[kMaxtight_electrons];   //[tight_electrons_]
   Int_t           tight_electrons_numMissingInnerHits[kMaxtight_electrons];   //[tight_electrons_]
   Bool_t          tight_electrons_passConversioVeto[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_dEtaIn[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_dPhiIn[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_full5x5_sigmaIetaIeta[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_hadronicOverEm[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_mvaID[kMaxtight_electrons];   //[tight_electrons_]
   Int_t           tight_muons_;
   Double_t        tight_muons_obj_fCoordinates_fX[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_obj_fCoordinates_fY[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_obj_fCoordinates_fZ[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_obj_fCoordinates_fT[kMaxtight_muons];   //[tight_muons_]
   Int_t           tight_muons_pdgID[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_dxy[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_dz[kMaxtight_muons];   //[tight_muons_]
   Int_t           tight_muons_charge[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_relIso[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_lepMVA[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_chreliso[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_nureliso[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_matchedJetdR[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_jetPtRatio[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_csv[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_sip3D[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_chargeFlip[kMaxtight_muons];   //[tight_muons_]
   Bool_t          tight_muons_isPFMuon[kMaxtight_muons];   //[tight_muons_]
   Bool_t          tight_muons_isTrackerMuon[kMaxtight_muons];   //[tight_muons_]
   Bool_t          tight_muons_isGlobalMuon[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_normalizedChi2[kMaxtight_muons];   //[tight_muons_]
   Int_t           tight_muons_numberOfValidMuonHits[kMaxtight_muons];   //[tight_muons_]
   Int_t           tight_muons_numberOfMatchedStations[kMaxtight_muons];   //[tight_muons_]
   Int_t           tight_muons_numberOfValidPixelHits[kMaxtight_muons];   //[tight_muons_]
   Int_t           tight_muons_trackerLayersWithMeasurement[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_localChi2[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_trKink[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_validFrac[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_segCompatibility[kMaxtight_muons];   //[tight_muons_]
   Int_t           raw_electrons_;
   Double_t        raw_electrons_obj_fCoordinates_fX[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_obj_fCoordinates_fY[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_obj_fCoordinates_fZ[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_obj_fCoordinates_fT[kMaxraw_electrons];   //[raw_electrons_]
   Int_t           raw_electrons_pdgID[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_dxy[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_dz[kMaxraw_electrons];   //[raw_electrons_]
   Int_t           raw_electrons_charge[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_relIso[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_lepMVA[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_chreliso[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_nureliso[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_matchedJetdR[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_jetPtRatio[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_csv[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_sip3D[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_SCeta[kMaxraw_electrons];   //[raw_electrons_]
   Bool_t          raw_electrons_isGsfCtfScPixChargeConsistent[kMaxraw_electrons];   //[raw_electrons_]
   Int_t           raw_electrons_numMissingInnerHits[kMaxraw_electrons];   //[raw_electrons_]
   Bool_t          raw_electrons_passConversioVeto[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_dEtaIn[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_dPhiIn[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_full5x5_sigmaIetaIeta[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_hadronicOverEm[kMaxraw_electrons];   //[raw_electrons_]
   Double_t        raw_electrons_mvaID[kMaxraw_electrons];   //[raw_electrons_]
   Int_t           raw_muons_;
   Double_t        raw_muons_obj_fCoordinates_fX[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_obj_fCoordinates_fY[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_obj_fCoordinates_fZ[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_obj_fCoordinates_fT[kMaxraw_muons];   //[raw_muons_]
   Int_t           raw_muons_pdgID[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_dxy[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_dz[kMaxraw_muons];   //[raw_muons_]
   Int_t           raw_muons_charge[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_relIso[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_lepMVA[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_chreliso[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_nureliso[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_matchedJetdR[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_jetPtRatio[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_csv[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_sip3D[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_chargeFlip[kMaxraw_muons];   //[raw_muons_]
   Bool_t          raw_muons_isPFMuon[kMaxraw_muons];   //[raw_muons_]
   Bool_t          raw_muons_isTrackerMuon[kMaxraw_muons];   //[raw_muons_]
   Bool_t          raw_muons_isGlobalMuon[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_normalizedChi2[kMaxraw_muons];   //[raw_muons_]
   Int_t           raw_muons_numberOfValidMuonHits[kMaxraw_muons];   //[raw_muons_]
   Int_t           raw_muons_numberOfMatchedStations[kMaxraw_muons];   //[raw_muons_]
   Int_t           raw_muons_numberOfValidPixelHits[kMaxraw_muons];   //[raw_muons_]
   Int_t           raw_muons_trackerLayersWithMeasurement[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_localChi2[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_trKink[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_validFrac[kMaxraw_muons];   //[raw_muons_]
   Double_t        raw_muons_segCompatibility[kMaxraw_muons];   //[raw_muons_]
   Int_t           preselected_jets_;
   Double_t        preselected_jets_obj_fCoordinates_fX[kMaxpreselected_jets];   //[preselected_jets_]
   Double_t        preselected_jets_obj_fCoordinates_fY[kMaxpreselected_jets];   //[preselected_jets_]
   Double_t        preselected_jets_obj_fCoordinates_fZ[kMaxpreselected_jets];   //[preselected_jets_]
   Double_t        preselected_jets_obj_fCoordinates_fT[kMaxpreselected_jets];   //[preselected_jets_]
   Int_t           preselected_jets_charge[kMaxpreselected_jets];   //[preselected_jets_]
   Int_t           preselected_jets_pdgID[kMaxpreselected_jets];   //[preselected_jets_]
   Double_t        preselected_jets_csv[kMaxpreselected_jets];   //[preselected_jets_]
   Int_t           loose_bJets_;
   Double_t        loose_bJets_obj_fCoordinates_fX[kMaxloose_bJets];   //[loose_bJets_]
   Double_t        loose_bJets_obj_fCoordinates_fY[kMaxloose_bJets];   //[loose_bJets_]
   Double_t        loose_bJets_obj_fCoordinates_fZ[kMaxloose_bJets];   //[loose_bJets_]
   Double_t        loose_bJets_obj_fCoordinates_fT[kMaxloose_bJets];   //[loose_bJets_]
   Int_t           loose_bJets_charge[kMaxloose_bJets];   //[loose_bJets_]
   Int_t           loose_bJets_pdgID[kMaxloose_bJets];   //[loose_bJets_]
   Double_t        loose_bJets_csv[kMaxloose_bJets];   //[loose_bJets_]
   Int_t           met_;
   Double_t        met_obj_fCoordinates_fX[kMaxmet];   //[met_]
   Double_t        met_obj_fCoordinates_fY[kMaxmet];   //[met_]
   Double_t        met_obj_fCoordinates_fZ[kMaxmet];   //[met_]
   Double_t        met_obj_fCoordinates_fT[kMaxmet];   //[met_]
   Float_t         met_pt_forSync[kMaxmet];   //[met_]
   Float_t         met_phi_forSync[kMaxmet];   //[met_]
   Int_t           pruned_genParticles_;
   Double_t        pruned_genParticles_obj_fCoordinates_fX[kMaxpruned_genParticles];   //[pruned_genParticles_]
   Double_t        pruned_genParticles_obj_fCoordinates_fY[kMaxpruned_genParticles];   //[pruned_genParticles_]
   Double_t        pruned_genParticles_obj_fCoordinates_fZ[kMaxpruned_genParticles];   //[pruned_genParticles_]
   Double_t        pruned_genParticles_obj_fCoordinates_fT[kMaxpruned_genParticles];   //[pruned_genParticles_]
   Int_t           pruned_genParticles_pdgID[kMaxpruned_genParticles];   //[pruned_genParticles_]
   Int_t           pruned_genParticles_status[kMaxpruned_genParticles];   //[pruned_genParticles_]
   Int_t           pruned_genParticles_mother_pdgID[kMaxpruned_genParticles];   //[pruned_genParticles_]
   Int_t           pruned_genParticles_grandmother_pdgID[kMaxpruned_genParticles];   //[pruned_genParticles_]

   // List of branches
   TBranch        *b_mcwgt;   //!
   TBranch        *b_wgt;   //!
   TBranch        *b_wallTimePerEvent;   //!
   TBranch        *b_eventnum;   //!
   TBranch        *b_lumiBlock;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_higgs_decay;   //!
   TBranch        *b_preselected_leptons_;   //!
   TBranch        *b_preselected_leptons_obj_fCoordinates_fX;   //!
   TBranch        *b_preselected_leptons_obj_fCoordinates_fY;   //!
   TBranch        *b_preselected_leptons_obj_fCoordinates_fZ;   //!
   TBranch        *b_preselected_leptons_obj_fCoordinates_fT;   //!
   TBranch        *b_preselected_leptons_pdgID;   //!
   TBranch        *b_preselected_leptons_dxy;   //!
   TBranch        *b_preselected_leptons_dz;   //!
   TBranch        *b_preselected_leptons_charge;   //!
   TBranch        *b_preselected_leptons_relIso;   //!
   TBranch        *b_preselected_leptons_lepMVA;   //!
   TBranch        *b_preselected_leptons_chreliso;   //!
   TBranch        *b_preselected_leptons_nureliso;   //!
   TBranch        *b_preselected_leptons_matchedJetdR;   //!
   TBranch        *b_preselected_leptons_jetPtRatio;   //!
   TBranch        *b_preselected_leptons_csv;   //!
   TBranch        *b_preselected_leptons_sip3D;   //!
   TBranch        *b_preselected_electrons_;   //!
   TBranch        *b_preselected_electrons_obj_fCoordinates_fX;   //!
   TBranch        *b_preselected_electrons_obj_fCoordinates_fY;   //!
   TBranch        *b_preselected_electrons_obj_fCoordinates_fZ;   //!
   TBranch        *b_preselected_electrons_obj_fCoordinates_fT;   //!
   TBranch        *b_preselected_electrons_pdgID;   //!
   TBranch        *b_preselected_electrons_dxy;   //!
   TBranch        *b_preselected_electrons_dz;   //!
   TBranch        *b_preselected_electrons_charge;   //!
   TBranch        *b_preselected_electrons_relIso;   //!
   TBranch        *b_preselected_electrons_lepMVA;   //!
   TBranch        *b_preselected_electrons_chreliso;   //!
   TBranch        *b_preselected_electrons_nureliso;   //!
   TBranch        *b_preselected_electrons_matchedJetdR;   //!
   TBranch        *b_preselected_electrons_jetPtRatio;   //!
   TBranch        *b_preselected_electrons_csv;   //!
   TBranch        *b_preselected_electrons_sip3D;   //!
   TBranch        *b_preselected_electrons_SCeta;   //!
   TBranch        *b_preselected_electrons_isGsfCtfScPixChargeConsistent;   //!
   TBranch        *b_preselected_electrons_numMissingInnerHits;   //!
   TBranch        *b_preselected_electrons_passConversioVeto;   //!
   TBranch        *b_preselected_electrons_dEtaIn;   //!
   TBranch        *b_preselected_electrons_dPhiIn;   //!
   TBranch        *b_preselected_electrons_full5x5_sigmaIetaIeta;   //!
   TBranch        *b_preselected_electrons_hadronicOverEm;   //!
   TBranch        *b_preselected_electrons_mvaID;   //!
   TBranch        *b_preselected_muons_;   //!
   TBranch        *b_preselected_muons_obj_fCoordinates_fX;   //!
   TBranch        *b_preselected_muons_obj_fCoordinates_fY;   //!
   TBranch        *b_preselected_muons_obj_fCoordinates_fZ;   //!
   TBranch        *b_preselected_muons_obj_fCoordinates_fT;   //!
   TBranch        *b_preselected_muons_pdgID;   //!
   TBranch        *b_preselected_muons_dxy;   //!
   TBranch        *b_preselected_muons_dz;   //!
   TBranch        *b_preselected_muons_charge;   //!
   TBranch        *b_preselected_muons_relIso;   //!
   TBranch        *b_preselected_muons_lepMVA;   //!
   TBranch        *b_preselected_muons_chreliso;   //!
   TBranch        *b_preselected_muons_nureliso;   //!
   TBranch        *b_preselected_muons_matchedJetdR;   //!
   TBranch        *b_preselected_muons_jetPtRatio;   //!
   TBranch        *b_preselected_muons_csv;   //!
   TBranch        *b_preselected_muons_sip3D;   //!
   TBranch        *b_preselected_muons_chargeFlip;   //!
   TBranch        *b_preselected_muons_isPFMuon;   //!
   TBranch        *b_preselected_muons_isTrackerMuon;   //!
   TBranch        *b_preselected_muons_isGlobalMuon;   //!
   TBranch        *b_preselected_muons_normalizedChi2;   //!
   TBranch        *b_preselected_muons_numberOfValidMuonHits;   //!
   TBranch        *b_preselected_muons_numberOfMatchedStations;   //!
   TBranch        *b_preselected_muons_numberOfValidPixelHits;   //!
   TBranch        *b_preselected_muons_trackerLayersWithMeasurement;   //!
   TBranch        *b_preselected_muons_localChi2;   //!
   TBranch        *b_preselected_muons_trKink;   //!
   TBranch        *b_preselected_muons_validFrac;   //!
   TBranch        *b_preselected_muons_segCompatibility;   //!
   TBranch        *b_loose_leptons_;   //!
   TBranch        *b_loose_leptons_obj_fCoordinates_fX;   //!
   TBranch        *b_loose_leptons_obj_fCoordinates_fY;   //!
   TBranch        *b_loose_leptons_obj_fCoordinates_fZ;   //!
   TBranch        *b_loose_leptons_obj_fCoordinates_fT;   //!
   TBranch        *b_loose_leptons_pdgID;   //!
   TBranch        *b_loose_leptons_dxy;   //!
   TBranch        *b_loose_leptons_dz;   //!
   TBranch        *b_loose_leptons_charge;   //!
   TBranch        *b_loose_leptons_relIso;   //!
   TBranch        *b_loose_leptons_lepMVA;   //!
   TBranch        *b_loose_leptons_chreliso;   //!
   TBranch        *b_loose_leptons_nureliso;   //!
   TBranch        *b_loose_leptons_matchedJetdR;   //!
   TBranch        *b_loose_leptons_jetPtRatio;   //!
   TBranch        *b_loose_leptons_csv;   //!
   TBranch        *b_loose_leptons_sip3D;   //!
   TBranch        *b_loose_electrons_;   //!
   TBranch        *b_loose_electrons_obj_fCoordinates_fX;   //!
   TBranch        *b_loose_electrons_obj_fCoordinates_fY;   //!
   TBranch        *b_loose_electrons_obj_fCoordinates_fZ;   //!
   TBranch        *b_loose_electrons_obj_fCoordinates_fT;   //!
   TBranch        *b_loose_electrons_pdgID;   //!
   TBranch        *b_loose_electrons_dxy;   //!
   TBranch        *b_loose_electrons_dz;   //!
   TBranch        *b_loose_electrons_charge;   //!
   TBranch        *b_loose_electrons_relIso;   //!
   TBranch        *b_loose_electrons_lepMVA;   //!
   TBranch        *b_loose_electrons_chreliso;   //!
   TBranch        *b_loose_electrons_nureliso;   //!
   TBranch        *b_loose_electrons_matchedJetdR;   //!
   TBranch        *b_loose_electrons_jetPtRatio;   //!
   TBranch        *b_loose_electrons_csv;   //!
   TBranch        *b_loose_electrons_sip3D;   //!
   TBranch        *b_loose_electrons_SCeta;   //!
   TBranch        *b_loose_electrons_isGsfCtfScPixChargeConsistent;   //!
   TBranch        *b_loose_electrons_numMissingInnerHits;   //!
   TBranch        *b_loose_electrons_passConversioVeto;   //!
   TBranch        *b_loose_electrons_dEtaIn;   //!
   TBranch        *b_loose_electrons_dPhiIn;   //!
   TBranch        *b_loose_electrons_full5x5_sigmaIetaIeta;   //!
   TBranch        *b_loose_electrons_hadronicOverEm;   //!
   TBranch        *b_loose_electrons_mvaID;   //!
   TBranch        *b_loose_muons_;   //!
   TBranch        *b_loose_muons_obj_fCoordinates_fX;   //!
   TBranch        *b_loose_muons_obj_fCoordinates_fY;   //!
   TBranch        *b_loose_muons_obj_fCoordinates_fZ;   //!
   TBranch        *b_loose_muons_obj_fCoordinates_fT;   //!
   TBranch        *b_loose_muons_pdgID;   //!
   TBranch        *b_loose_muons_dxy;   //!
   TBranch        *b_loose_muons_dz;   //!
   TBranch        *b_loose_muons_charge;   //!
   TBranch        *b_loose_muons_relIso;   //!
   TBranch        *b_loose_muons_lepMVA;   //!
   TBranch        *b_loose_muons_chreliso;   //!
   TBranch        *b_loose_muons_nureliso;   //!
   TBranch        *b_loose_muons_matchedJetdR;   //!
   TBranch        *b_loose_muons_jetPtRatio;   //!
   TBranch        *b_loose_muons_csv;   //!
   TBranch        *b_loose_muons_sip3D;   //!
   TBranch        *b_loose_muons_chargeFlip;   //!
   TBranch        *b_loose_muons_isPFMuon;   //!
   TBranch        *b_loose_muons_isTrackerMuon;   //!
   TBranch        *b_loose_muons_isGlobalMuon;   //!
   TBranch        *b_loose_muons_normalizedChi2;   //!
   TBranch        *b_loose_muons_numberOfValidMuonHits;   //!
   TBranch        *b_loose_muons_numberOfMatchedStations;   //!
   TBranch        *b_loose_muons_numberOfValidPixelHits;   //!
   TBranch        *b_loose_muons_trackerLayersWithMeasurement;   //!
   TBranch        *b_loose_muons_localChi2;   //!
   TBranch        *b_loose_muons_trKink;   //!
   TBranch        *b_loose_muons_validFrac;   //!
   TBranch        *b_loose_muons_segCompatibility;   //!
   TBranch        *b_tight_leptons_;   //!
   TBranch        *b_tight_leptons_obj_fCoordinates_fX;   //!
   TBranch        *b_tight_leptons_obj_fCoordinates_fY;   //!
   TBranch        *b_tight_leptons_obj_fCoordinates_fZ;   //!
   TBranch        *b_tight_leptons_obj_fCoordinates_fT;   //!
   TBranch        *b_tight_leptons_pdgID;   //!
   TBranch        *b_tight_leptons_dxy;   //!
   TBranch        *b_tight_leptons_dz;   //!
   TBranch        *b_tight_leptons_charge;   //!
   TBranch        *b_tight_leptons_relIso;   //!
   TBranch        *b_tight_leptons_lepMVA;   //!
   TBranch        *b_tight_leptons_chreliso;   //!
   TBranch        *b_tight_leptons_nureliso;   //!
   TBranch        *b_tight_leptons_matchedJetdR;   //!
   TBranch        *b_tight_leptons_jetPtRatio;   //!
   TBranch        *b_tight_leptons_csv;   //!
   TBranch        *b_tight_leptons_sip3D;   //!
   TBranch        *b_tight_electrons_;   //!
   TBranch        *b_tight_electrons_obj_fCoordinates_fX;   //!
   TBranch        *b_tight_electrons_obj_fCoordinates_fY;   //!
   TBranch        *b_tight_electrons_obj_fCoordinates_fZ;   //!
   TBranch        *b_tight_electrons_obj_fCoordinates_fT;   //!
   TBranch        *b_tight_electrons_pdgID;   //!
   TBranch        *b_tight_electrons_dxy;   //!
   TBranch        *b_tight_electrons_dz;   //!
   TBranch        *b_tight_electrons_charge;   //!
   TBranch        *b_tight_electrons_relIso;   //!
   TBranch        *b_tight_electrons_lepMVA;   //!
   TBranch        *b_tight_electrons_chreliso;   //!
   TBranch        *b_tight_electrons_nureliso;   //!
   TBranch        *b_tight_electrons_matchedJetdR;   //!
   TBranch        *b_tight_electrons_jetPtRatio;   //!
   TBranch        *b_tight_electrons_csv;   //!
   TBranch        *b_tight_electrons_sip3D;   //!
   TBranch        *b_tight_electrons_SCeta;   //!
   TBranch        *b_tight_electrons_isGsfCtfScPixChargeConsistent;   //!
   TBranch        *b_tight_electrons_numMissingInnerHits;   //!
   TBranch        *b_tight_electrons_passConversioVeto;   //!
   TBranch        *b_tight_electrons_dEtaIn;   //!
   TBranch        *b_tight_electrons_dPhiIn;   //!
   TBranch        *b_tight_electrons_full5x5_sigmaIetaIeta;   //!
   TBranch        *b_tight_electrons_hadronicOverEm;   //!
   TBranch        *b_tight_electrons_mvaID;   //!
   TBranch        *b_tight_muons_;   //!
   TBranch        *b_tight_muons_obj_fCoordinates_fX;   //!
   TBranch        *b_tight_muons_obj_fCoordinates_fY;   //!
   TBranch        *b_tight_muons_obj_fCoordinates_fZ;   //!
   TBranch        *b_tight_muons_obj_fCoordinates_fT;   //!
   TBranch        *b_tight_muons_pdgID;   //!
   TBranch        *b_tight_muons_dxy;   //!
   TBranch        *b_tight_muons_dz;   //!
   TBranch        *b_tight_muons_charge;   //!
   TBranch        *b_tight_muons_relIso;   //!
   TBranch        *b_tight_muons_lepMVA;   //!
   TBranch        *b_tight_muons_chreliso;   //!
   TBranch        *b_tight_muons_nureliso;   //!
   TBranch        *b_tight_muons_matchedJetdR;   //!
   TBranch        *b_tight_muons_jetPtRatio;   //!
   TBranch        *b_tight_muons_csv;   //!
   TBranch        *b_tight_muons_sip3D;   //!
   TBranch        *b_tight_muons_chargeFlip;   //!
   TBranch        *b_tight_muons_isPFMuon;   //!
   TBranch        *b_tight_muons_isTrackerMuon;   //!
   TBranch        *b_tight_muons_isGlobalMuon;   //!
   TBranch        *b_tight_muons_normalizedChi2;   //!
   TBranch        *b_tight_muons_numberOfValidMuonHits;   //!
   TBranch        *b_tight_muons_numberOfMatchedStations;   //!
   TBranch        *b_tight_muons_numberOfValidPixelHits;   //!
   TBranch        *b_tight_muons_trackerLayersWithMeasurement;   //!
   TBranch        *b_tight_muons_localChi2;   //!
   TBranch        *b_tight_muons_trKink;   //!
   TBranch        *b_tight_muons_validFrac;   //!
   TBranch        *b_tight_muons_segCompatibility;   //!
   TBranch        *b_raw_electrons_;   //!
   TBranch        *b_raw_electrons_obj_fCoordinates_fX;   //!
   TBranch        *b_raw_electrons_obj_fCoordinates_fY;   //!
   TBranch        *b_raw_electrons_obj_fCoordinates_fZ;   //!
   TBranch        *b_raw_electrons_obj_fCoordinates_fT;   //!
   TBranch        *b_raw_electrons_pdgID;   //!
   TBranch        *b_raw_electrons_dxy;   //!
   TBranch        *b_raw_electrons_dz;   //!
   TBranch        *b_raw_electrons_charge;   //!
   TBranch        *b_raw_electrons_relIso;   //!
   TBranch        *b_raw_electrons_lepMVA;   //!
   TBranch        *b_raw_electrons_chreliso;   //!
   TBranch        *b_raw_electrons_nureliso;   //!
   TBranch        *b_raw_electrons_matchedJetdR;   //!
   TBranch        *b_raw_electrons_jetPtRatio;   //!
   TBranch        *b_raw_electrons_csv;   //!
   TBranch        *b_raw_electrons_sip3D;   //!
   TBranch        *b_raw_electrons_SCeta;   //!
   TBranch        *b_raw_electrons_isGsfCtfScPixChargeConsistent;   //!
   TBranch        *b_raw_electrons_numMissingInnerHits;   //!
   TBranch        *b_raw_electrons_passConversioVeto;   //!
   TBranch        *b_raw_electrons_dEtaIn;   //!
   TBranch        *b_raw_electrons_dPhiIn;   //!
   TBranch        *b_raw_electrons_full5x5_sigmaIetaIeta;   //!
   TBranch        *b_raw_electrons_hadronicOverEm;   //!
   TBranch        *b_raw_electrons_mvaID;   //!
   TBranch        *b_raw_muons_;   //!
   TBranch        *b_raw_muons_obj_fCoordinates_fX;   //!
   TBranch        *b_raw_muons_obj_fCoordinates_fY;   //!
   TBranch        *b_raw_muons_obj_fCoordinates_fZ;   //!
   TBranch        *b_raw_muons_obj_fCoordinates_fT;   //!
   TBranch        *b_raw_muons_pdgID;   //!
   TBranch        *b_raw_muons_dxy;   //!
   TBranch        *b_raw_muons_dz;   //!
   TBranch        *b_raw_muons_charge;   //!
   TBranch        *b_raw_muons_relIso;   //!
   TBranch        *b_raw_muons_lepMVA;   //!
   TBranch        *b_raw_muons_chreliso;   //!
   TBranch        *b_raw_muons_nureliso;   //!
   TBranch        *b_raw_muons_matchedJetdR;   //!
   TBranch        *b_raw_muons_jetPtRatio;   //!
   TBranch        *b_raw_muons_csv;   //!
   TBranch        *b_raw_muons_sip3D;   //!
   TBranch        *b_raw_muons_chargeFlip;   //!
   TBranch        *b_raw_muons_isPFMuon;   //!
   TBranch        *b_raw_muons_isTrackerMuon;   //!
   TBranch        *b_raw_muons_isGlobalMuon;   //!
   TBranch        *b_raw_muons_normalizedChi2;   //!
   TBranch        *b_raw_muons_numberOfValidMuonHits;   //!
   TBranch        *b_raw_muons_numberOfMatchedStations;   //!
   TBranch        *b_raw_muons_numberOfValidPixelHits;   //!
   TBranch        *b_raw_muons_trackerLayersWithMeasurement;   //!
   TBranch        *b_raw_muons_localChi2;   //!
   TBranch        *b_raw_muons_trKink;   //!
   TBranch        *b_raw_muons_validFrac;   //!
   TBranch        *b_raw_muons_segCompatibility;   //!
   TBranch        *b_preselected_jets_;   //!
   TBranch        *b_preselected_jets_obj_fCoordinates_fX;   //!
   TBranch        *b_preselected_jets_obj_fCoordinates_fY;   //!
   TBranch        *b_preselected_jets_obj_fCoordinates_fZ;   //!
   TBranch        *b_preselected_jets_obj_fCoordinates_fT;   //!
   TBranch        *b_preselected_jets_charge;   //!
   TBranch        *b_preselected_jets_pdgID;   //!
   TBranch        *b_preselected_jets_csv;   //!
   TBranch        *b_loose_bJets_;   //!
   TBranch        *b_loose_bJets_obj_fCoordinates_fX;   //!
   TBranch        *b_loose_bJets_obj_fCoordinates_fY;   //!
   TBranch        *b_loose_bJets_obj_fCoordinates_fZ;   //!
   TBranch        *b_loose_bJets_obj_fCoordinates_fT;   //!
   TBranch        *b_loose_bJets_charge;   //!
   TBranch        *b_loose_bJets_pdgID;   //!
   TBranch        *b_loose_bJets_csv;   //!
   TBranch        *b_met_;   //!
   TBranch        *b_met_obj_fCoordinates_fX;   //!
   TBranch        *b_met_obj_fCoordinates_fY;   //!
   TBranch        *b_met_obj_fCoordinates_fZ;   //!
   TBranch        *b_met_obj_fCoordinates_fT;   //!
   TBranch        *b_met_pt_forSync;   //!
   TBranch        *b_met_phi_forSync;   //!
   TBranch        *b_pruned_genParticles_;   //!
   TBranch        *b_pruned_genParticles_obj_fCoordinates_fX;   //!
   TBranch        *b_pruned_genParticles_obj_fCoordinates_fY;   //!
   TBranch        *b_pruned_genParticles_obj_fCoordinates_fZ;   //!
   TBranch        *b_pruned_genParticles_obj_fCoordinates_fT;   //!
   TBranch        *b_pruned_genParticles_pdgID;   //!
   TBranch        *b_pruned_genParticles_status;   //!
   TBranch        *b_pruned_genParticles_mother_pdgID;   //!
   TBranch        *b_pruned_genParticles_grandmother_pdgID;   //!

   ttHanalysis(TTree *tree=0);
   virtual ~ttHanalysis();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef ttHanalysis_cxx
ttHanalysis::ttHanalysis(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../tuples/synch_full_second.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../tuples/synch_full_second.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("../tuples/synch_full_second.root:/OSTwoLepAna");
      dir->GetObject("summaryTree",tree);

   }
   Init(tree);
}

ttHanalysis::~ttHanalysis()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t ttHanalysis::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t ttHanalysis::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void ttHanalysis::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("mcwgt", &mcwgt, &b_mcwgt);
   fChain->SetBranchAddress("wgt", &wgt, &b_wgt);
   fChain->SetBranchAddress("wallTimePerEvent", &wallTimePerEvent, &b_wallTimePerEvent);
   fChain->SetBranchAddress("eventnum", &eventnum, &b_eventnum);
   fChain->SetBranchAddress("lumiBlock", &lumiBlock, &b_lumiBlock);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("higgs_decay", &higgs_decay, &b_higgs_decay);
   fChain->SetBranchAddress("preselected_leptons", &preselected_leptons_, &b_preselected_leptons_);
   fChain->SetBranchAddress("preselected_leptons.obj.fCoordinates.fX", preselected_leptons_obj_fCoordinates_fX, &b_preselected_leptons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("preselected_leptons.obj.fCoordinates.fY", preselected_leptons_obj_fCoordinates_fY, &b_preselected_leptons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("preselected_leptons.obj.fCoordinates.fZ", preselected_leptons_obj_fCoordinates_fZ, &b_preselected_leptons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("preselected_leptons.obj.fCoordinates.fT", preselected_leptons_obj_fCoordinates_fT, &b_preselected_leptons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("preselected_leptons.pdgID", preselected_leptons_pdgID, &b_preselected_leptons_pdgID);
   fChain->SetBranchAddress("preselected_leptons.dxy", preselected_leptons_dxy, &b_preselected_leptons_dxy);
   fChain->SetBranchAddress("preselected_leptons.dz", preselected_leptons_dz, &b_preselected_leptons_dz);
   fChain->SetBranchAddress("preselected_leptons.charge", preselected_leptons_charge, &b_preselected_leptons_charge);
   fChain->SetBranchAddress("preselected_leptons.relIso", preselected_leptons_relIso, &b_preselected_leptons_relIso);
   fChain->SetBranchAddress("preselected_leptons.lepMVA", preselected_leptons_lepMVA, &b_preselected_leptons_lepMVA);
   fChain->SetBranchAddress("preselected_leptons.chreliso", preselected_leptons_chreliso, &b_preselected_leptons_chreliso);
   fChain->SetBranchAddress("preselected_leptons.nureliso", preselected_leptons_nureliso, &b_preselected_leptons_nureliso);
   fChain->SetBranchAddress("preselected_leptons.matchedJetdR", preselected_leptons_matchedJetdR, &b_preselected_leptons_matchedJetdR);
   fChain->SetBranchAddress("preselected_leptons.jetPtRatio", preselected_leptons_jetPtRatio, &b_preselected_leptons_jetPtRatio);
   fChain->SetBranchAddress("preselected_leptons.csv", preselected_leptons_csv, &b_preselected_leptons_csv);
   fChain->SetBranchAddress("preselected_leptons.sip3D", preselected_leptons_sip3D, &b_preselected_leptons_sip3D);
   fChain->SetBranchAddress("preselected_electrons", &preselected_electrons_, &b_preselected_electrons_);
   fChain->SetBranchAddress("preselected_electrons.obj.fCoordinates.fX", preselected_electrons_obj_fCoordinates_fX, &b_preselected_electrons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("preselected_electrons.obj.fCoordinates.fY", preselected_electrons_obj_fCoordinates_fY, &b_preselected_electrons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("preselected_electrons.obj.fCoordinates.fZ", preselected_electrons_obj_fCoordinates_fZ, &b_preselected_electrons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("preselected_electrons.obj.fCoordinates.fT", preselected_electrons_obj_fCoordinates_fT, &b_preselected_electrons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("preselected_electrons.pdgID", preselected_electrons_pdgID, &b_preselected_electrons_pdgID);
   fChain->SetBranchAddress("preselected_electrons.dxy", preselected_electrons_dxy, &b_preselected_electrons_dxy);
   fChain->SetBranchAddress("preselected_electrons.dz", preselected_electrons_dz, &b_preselected_electrons_dz);
   fChain->SetBranchAddress("preselected_electrons.charge", preselected_electrons_charge, &b_preselected_electrons_charge);
   fChain->SetBranchAddress("preselected_electrons.relIso", preselected_electrons_relIso, &b_preselected_electrons_relIso);
   fChain->SetBranchAddress("preselected_electrons.lepMVA", preselected_electrons_lepMVA, &b_preselected_electrons_lepMVA);
   fChain->SetBranchAddress("preselected_electrons.chreliso", preselected_electrons_chreliso, &b_preselected_electrons_chreliso);
   fChain->SetBranchAddress("preselected_electrons.nureliso", preselected_electrons_nureliso, &b_preselected_electrons_nureliso);
   fChain->SetBranchAddress("preselected_electrons.matchedJetdR", preselected_electrons_matchedJetdR, &b_preselected_electrons_matchedJetdR);
   fChain->SetBranchAddress("preselected_electrons.jetPtRatio", preselected_electrons_jetPtRatio, &b_preselected_electrons_jetPtRatio);
   fChain->SetBranchAddress("preselected_electrons.csv", preselected_electrons_csv, &b_preselected_electrons_csv);
   fChain->SetBranchAddress("preselected_electrons.sip3D", preselected_electrons_sip3D, &b_preselected_electrons_sip3D);
   fChain->SetBranchAddress("preselected_electrons.SCeta", preselected_electrons_SCeta, &b_preselected_electrons_SCeta);
   fChain->SetBranchAddress("preselected_electrons.isGsfCtfScPixChargeConsistent", preselected_electrons_isGsfCtfScPixChargeConsistent, &b_preselected_electrons_isGsfCtfScPixChargeConsistent);
   fChain->SetBranchAddress("preselected_electrons.numMissingInnerHits", preselected_electrons_numMissingInnerHits, &b_preselected_electrons_numMissingInnerHits);
   fChain->SetBranchAddress("preselected_electrons.passConversioVeto", preselected_electrons_passConversioVeto, &b_preselected_electrons_passConversioVeto);
   fChain->SetBranchAddress("preselected_electrons.dEtaIn", preselected_electrons_dEtaIn, &b_preselected_electrons_dEtaIn);
   fChain->SetBranchAddress("preselected_electrons.dPhiIn", preselected_electrons_dPhiIn, &b_preselected_electrons_dPhiIn);
   fChain->SetBranchAddress("preselected_electrons.full5x5_sigmaIetaIeta", preselected_electrons_full5x5_sigmaIetaIeta, &b_preselected_electrons_full5x5_sigmaIetaIeta);
   fChain->SetBranchAddress("preselected_electrons.hadronicOverEm", preselected_electrons_hadronicOverEm, &b_preselected_electrons_hadronicOverEm);
   fChain->SetBranchAddress("preselected_electrons.mvaID", preselected_electrons_mvaID, &b_preselected_electrons_mvaID);
   fChain->SetBranchAddress("preselected_muons", &preselected_muons_, &b_preselected_muons_);
   fChain->SetBranchAddress("preselected_muons.obj.fCoordinates.fX", preselected_muons_obj_fCoordinates_fX, &b_preselected_muons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("preselected_muons.obj.fCoordinates.fY", preselected_muons_obj_fCoordinates_fY, &b_preselected_muons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("preselected_muons.obj.fCoordinates.fZ", preselected_muons_obj_fCoordinates_fZ, &b_preselected_muons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("preselected_muons.obj.fCoordinates.fT", preselected_muons_obj_fCoordinates_fT, &b_preselected_muons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("preselected_muons.pdgID", preselected_muons_pdgID, &b_preselected_muons_pdgID);
   fChain->SetBranchAddress("preselected_muons.dxy", preselected_muons_dxy, &b_preselected_muons_dxy);
   fChain->SetBranchAddress("preselected_muons.dz", preselected_muons_dz, &b_preselected_muons_dz);
   fChain->SetBranchAddress("preselected_muons.charge", preselected_muons_charge, &b_preselected_muons_charge);
   fChain->SetBranchAddress("preselected_muons.relIso", preselected_muons_relIso, &b_preselected_muons_relIso);
   fChain->SetBranchAddress("preselected_muons.lepMVA", preselected_muons_lepMVA, &b_preselected_muons_lepMVA);
   fChain->SetBranchAddress("preselected_muons.chreliso", preselected_muons_chreliso, &b_preselected_muons_chreliso);
   fChain->SetBranchAddress("preselected_muons.nureliso", preselected_muons_nureliso, &b_preselected_muons_nureliso);
   fChain->SetBranchAddress("preselected_muons.matchedJetdR", preselected_muons_matchedJetdR, &b_preselected_muons_matchedJetdR);
   fChain->SetBranchAddress("preselected_muons.jetPtRatio", preselected_muons_jetPtRatio, &b_preselected_muons_jetPtRatio);
   fChain->SetBranchAddress("preselected_muons.csv", preselected_muons_csv, &b_preselected_muons_csv);
   fChain->SetBranchAddress("preselected_muons.sip3D", preselected_muons_sip3D, &b_preselected_muons_sip3D);
   fChain->SetBranchAddress("preselected_muons.chargeFlip", preselected_muons_chargeFlip, &b_preselected_muons_chargeFlip);
   fChain->SetBranchAddress("preselected_muons.isPFMuon", preselected_muons_isPFMuon, &b_preselected_muons_isPFMuon);
   fChain->SetBranchAddress("preselected_muons.isTrackerMuon", preselected_muons_isTrackerMuon, &b_preselected_muons_isTrackerMuon);
   fChain->SetBranchAddress("preselected_muons.isGlobalMuon", preselected_muons_isGlobalMuon, &b_preselected_muons_isGlobalMuon);
   fChain->SetBranchAddress("preselected_muons.normalizedChi2", preselected_muons_normalizedChi2, &b_preselected_muons_normalizedChi2);
   fChain->SetBranchAddress("preselected_muons.numberOfValidMuonHits", preselected_muons_numberOfValidMuonHits, &b_preselected_muons_numberOfValidMuonHits);
   fChain->SetBranchAddress("preselected_muons.numberOfMatchedStations", preselected_muons_numberOfMatchedStations, &b_preselected_muons_numberOfMatchedStations);
   fChain->SetBranchAddress("preselected_muons.numberOfValidPixelHits", preselected_muons_numberOfValidPixelHits, &b_preselected_muons_numberOfValidPixelHits);
   fChain->SetBranchAddress("preselected_muons.trackerLayersWithMeasurement", preselected_muons_trackerLayersWithMeasurement, &b_preselected_muons_trackerLayersWithMeasurement);
   fChain->SetBranchAddress("preselected_muons.localChi2", preselected_muons_localChi2, &b_preselected_muons_localChi2);
   fChain->SetBranchAddress("preselected_muons.trKink", preselected_muons_trKink, &b_preselected_muons_trKink);
   fChain->SetBranchAddress("preselected_muons.validFrac", preselected_muons_validFrac, &b_preselected_muons_validFrac);
   fChain->SetBranchAddress("preselected_muons.segCompatibility", preselected_muons_segCompatibility, &b_preselected_muons_segCompatibility);
   fChain->SetBranchAddress("loose_leptons", &loose_leptons_, &b_loose_leptons_);
   fChain->SetBranchAddress("loose_leptons.obj.fCoordinates.fX", loose_leptons_obj_fCoordinates_fX, &b_loose_leptons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("loose_leptons.obj.fCoordinates.fY", loose_leptons_obj_fCoordinates_fY, &b_loose_leptons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("loose_leptons.obj.fCoordinates.fZ", loose_leptons_obj_fCoordinates_fZ, &b_loose_leptons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("loose_leptons.obj.fCoordinates.fT", loose_leptons_obj_fCoordinates_fT, &b_loose_leptons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("loose_leptons.pdgID", loose_leptons_pdgID, &b_loose_leptons_pdgID);
   fChain->SetBranchAddress("loose_leptons.dxy", loose_leptons_dxy, &b_loose_leptons_dxy);
   fChain->SetBranchAddress("loose_leptons.dz", loose_leptons_dz, &b_loose_leptons_dz);
   fChain->SetBranchAddress("loose_leptons.charge", loose_leptons_charge, &b_loose_leptons_charge);
   fChain->SetBranchAddress("loose_leptons.relIso", loose_leptons_relIso, &b_loose_leptons_relIso);
   fChain->SetBranchAddress("loose_leptons.lepMVA", loose_leptons_lepMVA, &b_loose_leptons_lepMVA);
   fChain->SetBranchAddress("loose_leptons.chreliso", loose_leptons_chreliso, &b_loose_leptons_chreliso);
   fChain->SetBranchAddress("loose_leptons.nureliso", loose_leptons_nureliso, &b_loose_leptons_nureliso);
   fChain->SetBranchAddress("loose_leptons.matchedJetdR", loose_leptons_matchedJetdR, &b_loose_leptons_matchedJetdR);
   fChain->SetBranchAddress("loose_leptons.jetPtRatio", loose_leptons_jetPtRatio, &b_loose_leptons_jetPtRatio);
   fChain->SetBranchAddress("loose_leptons.csv", loose_leptons_csv, &b_loose_leptons_csv);
   fChain->SetBranchAddress("loose_leptons.sip3D", loose_leptons_sip3D, &b_loose_leptons_sip3D);
   fChain->SetBranchAddress("loose_electrons", &loose_electrons_, &b_loose_electrons_);
   fChain->SetBranchAddress("loose_electrons.obj.fCoordinates.fX", loose_electrons_obj_fCoordinates_fX, &b_loose_electrons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("loose_electrons.obj.fCoordinates.fY", loose_electrons_obj_fCoordinates_fY, &b_loose_electrons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("loose_electrons.obj.fCoordinates.fZ", loose_electrons_obj_fCoordinates_fZ, &b_loose_electrons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("loose_electrons.obj.fCoordinates.fT", loose_electrons_obj_fCoordinates_fT, &b_loose_electrons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("loose_electrons.pdgID", loose_electrons_pdgID, &b_loose_electrons_pdgID);
   fChain->SetBranchAddress("loose_electrons.dxy", loose_electrons_dxy, &b_loose_electrons_dxy);
   fChain->SetBranchAddress("loose_electrons.dz", loose_electrons_dz, &b_loose_electrons_dz);
   fChain->SetBranchAddress("loose_electrons.charge", loose_electrons_charge, &b_loose_electrons_charge);
   fChain->SetBranchAddress("loose_electrons.relIso", loose_electrons_relIso, &b_loose_electrons_relIso);
   fChain->SetBranchAddress("loose_electrons.lepMVA", loose_electrons_lepMVA, &b_loose_electrons_lepMVA);
   fChain->SetBranchAddress("loose_electrons.chreliso", loose_electrons_chreliso, &b_loose_electrons_chreliso);
   fChain->SetBranchAddress("loose_electrons.nureliso", loose_electrons_nureliso, &b_loose_electrons_nureliso);
   fChain->SetBranchAddress("loose_electrons.matchedJetdR", loose_electrons_matchedJetdR, &b_loose_electrons_matchedJetdR);
   fChain->SetBranchAddress("loose_electrons.jetPtRatio", loose_electrons_jetPtRatio, &b_loose_electrons_jetPtRatio);
   fChain->SetBranchAddress("loose_electrons.csv", loose_electrons_csv, &b_loose_electrons_csv);
   fChain->SetBranchAddress("loose_electrons.sip3D", loose_electrons_sip3D, &b_loose_electrons_sip3D);
   fChain->SetBranchAddress("loose_electrons.SCeta", loose_electrons_SCeta, &b_loose_electrons_SCeta);
   fChain->SetBranchAddress("loose_electrons.isGsfCtfScPixChargeConsistent", loose_electrons_isGsfCtfScPixChargeConsistent, &b_loose_electrons_isGsfCtfScPixChargeConsistent);
   fChain->SetBranchAddress("loose_electrons.numMissingInnerHits", loose_electrons_numMissingInnerHits, &b_loose_electrons_numMissingInnerHits);
   fChain->SetBranchAddress("loose_electrons.passConversioVeto", loose_electrons_passConversioVeto, &b_loose_electrons_passConversioVeto);
   fChain->SetBranchAddress("loose_electrons.dEtaIn", loose_electrons_dEtaIn, &b_loose_electrons_dEtaIn);
   fChain->SetBranchAddress("loose_electrons.dPhiIn", loose_electrons_dPhiIn, &b_loose_electrons_dPhiIn);
   fChain->SetBranchAddress("loose_electrons.full5x5_sigmaIetaIeta", loose_electrons_full5x5_sigmaIetaIeta, &b_loose_electrons_full5x5_sigmaIetaIeta);
   fChain->SetBranchAddress("loose_electrons.hadronicOverEm", loose_electrons_hadronicOverEm, &b_loose_electrons_hadronicOverEm);
   fChain->SetBranchAddress("loose_electrons.mvaID", loose_electrons_mvaID, &b_loose_electrons_mvaID);
   fChain->SetBranchAddress("loose_muons", &loose_muons_, &b_loose_muons_);
   fChain->SetBranchAddress("loose_muons.obj.fCoordinates.fX", loose_muons_obj_fCoordinates_fX, &b_loose_muons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("loose_muons.obj.fCoordinates.fY", loose_muons_obj_fCoordinates_fY, &b_loose_muons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("loose_muons.obj.fCoordinates.fZ", loose_muons_obj_fCoordinates_fZ, &b_loose_muons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("loose_muons.obj.fCoordinates.fT", loose_muons_obj_fCoordinates_fT, &b_loose_muons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("loose_muons.pdgID", loose_muons_pdgID, &b_loose_muons_pdgID);
   fChain->SetBranchAddress("loose_muons.dxy", loose_muons_dxy, &b_loose_muons_dxy);
   fChain->SetBranchAddress("loose_muons.dz", loose_muons_dz, &b_loose_muons_dz);
   fChain->SetBranchAddress("loose_muons.charge", loose_muons_charge, &b_loose_muons_charge);
   fChain->SetBranchAddress("loose_muons.relIso", loose_muons_relIso, &b_loose_muons_relIso);
   fChain->SetBranchAddress("loose_muons.lepMVA", loose_muons_lepMVA, &b_loose_muons_lepMVA);
   fChain->SetBranchAddress("loose_muons.chreliso", loose_muons_chreliso, &b_loose_muons_chreliso);
   fChain->SetBranchAddress("loose_muons.nureliso", loose_muons_nureliso, &b_loose_muons_nureliso);
   fChain->SetBranchAddress("loose_muons.matchedJetdR", loose_muons_matchedJetdR, &b_loose_muons_matchedJetdR);
   fChain->SetBranchAddress("loose_muons.jetPtRatio", loose_muons_jetPtRatio, &b_loose_muons_jetPtRatio);
   fChain->SetBranchAddress("loose_muons.csv", loose_muons_csv, &b_loose_muons_csv);
   fChain->SetBranchAddress("loose_muons.sip3D", loose_muons_sip3D, &b_loose_muons_sip3D);
   fChain->SetBranchAddress("loose_muons.chargeFlip", loose_muons_chargeFlip, &b_loose_muons_chargeFlip);
   fChain->SetBranchAddress("loose_muons.isPFMuon", loose_muons_isPFMuon, &b_loose_muons_isPFMuon);
   fChain->SetBranchAddress("loose_muons.isTrackerMuon", loose_muons_isTrackerMuon, &b_loose_muons_isTrackerMuon);
   fChain->SetBranchAddress("loose_muons.isGlobalMuon", loose_muons_isGlobalMuon, &b_loose_muons_isGlobalMuon);
   fChain->SetBranchAddress("loose_muons.normalizedChi2", loose_muons_normalizedChi2, &b_loose_muons_normalizedChi2);
   fChain->SetBranchAddress("loose_muons.numberOfValidMuonHits", loose_muons_numberOfValidMuonHits, &b_loose_muons_numberOfValidMuonHits);
   fChain->SetBranchAddress("loose_muons.numberOfMatchedStations", loose_muons_numberOfMatchedStations, &b_loose_muons_numberOfMatchedStations);
   fChain->SetBranchAddress("loose_muons.numberOfValidPixelHits", loose_muons_numberOfValidPixelHits, &b_loose_muons_numberOfValidPixelHits);
   fChain->SetBranchAddress("loose_muons.trackerLayersWithMeasurement", loose_muons_trackerLayersWithMeasurement, &b_loose_muons_trackerLayersWithMeasurement);
   fChain->SetBranchAddress("loose_muons.localChi2", loose_muons_localChi2, &b_loose_muons_localChi2);
   fChain->SetBranchAddress("loose_muons.trKink", loose_muons_trKink, &b_loose_muons_trKink);
   fChain->SetBranchAddress("loose_muons.validFrac", loose_muons_validFrac, &b_loose_muons_validFrac);
   fChain->SetBranchAddress("loose_muons.segCompatibility", loose_muons_segCompatibility, &b_loose_muons_segCompatibility);
   fChain->SetBranchAddress("tight_leptons", &tight_leptons_, &b_tight_leptons_);
   fChain->SetBranchAddress("tight_leptons.obj.fCoordinates.fX", tight_leptons_obj_fCoordinates_fX, &b_tight_leptons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("tight_leptons.obj.fCoordinates.fY", tight_leptons_obj_fCoordinates_fY, &b_tight_leptons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("tight_leptons.obj.fCoordinates.fZ", tight_leptons_obj_fCoordinates_fZ, &b_tight_leptons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("tight_leptons.obj.fCoordinates.fT", tight_leptons_obj_fCoordinates_fT, &b_tight_leptons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("tight_leptons.pdgID", tight_leptons_pdgID, &b_tight_leptons_pdgID);
   fChain->SetBranchAddress("tight_leptons.dxy", tight_leptons_dxy, &b_tight_leptons_dxy);
   fChain->SetBranchAddress("tight_leptons.dz", tight_leptons_dz, &b_tight_leptons_dz);
   fChain->SetBranchAddress("tight_leptons.charge", tight_leptons_charge, &b_tight_leptons_charge);
   fChain->SetBranchAddress("tight_leptons.relIso", tight_leptons_relIso, &b_tight_leptons_relIso);
   fChain->SetBranchAddress("tight_leptons.lepMVA", tight_leptons_lepMVA, &b_tight_leptons_lepMVA);
   fChain->SetBranchAddress("tight_leptons.chreliso", tight_leptons_chreliso, &b_tight_leptons_chreliso);
   fChain->SetBranchAddress("tight_leptons.nureliso", tight_leptons_nureliso, &b_tight_leptons_nureliso);
   fChain->SetBranchAddress("tight_leptons.matchedJetdR", tight_leptons_matchedJetdR, &b_tight_leptons_matchedJetdR);
   fChain->SetBranchAddress("tight_leptons.jetPtRatio", tight_leptons_jetPtRatio, &b_tight_leptons_jetPtRatio);
   fChain->SetBranchAddress("tight_leptons.csv", tight_leptons_csv, &b_tight_leptons_csv);
   fChain->SetBranchAddress("tight_leptons.sip3D", tight_leptons_sip3D, &b_tight_leptons_sip3D);
   fChain->SetBranchAddress("tight_electrons", &tight_electrons_, &b_tight_electrons_);
   fChain->SetBranchAddress("tight_electrons.obj.fCoordinates.fX", tight_electrons_obj_fCoordinates_fX, &b_tight_electrons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("tight_electrons.obj.fCoordinates.fY", tight_electrons_obj_fCoordinates_fY, &b_tight_electrons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("tight_electrons.obj.fCoordinates.fZ", tight_electrons_obj_fCoordinates_fZ, &b_tight_electrons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("tight_electrons.obj.fCoordinates.fT", tight_electrons_obj_fCoordinates_fT, &b_tight_electrons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("tight_electrons.pdgID", tight_electrons_pdgID, &b_tight_electrons_pdgID);
   fChain->SetBranchAddress("tight_electrons.dxy", tight_electrons_dxy, &b_tight_electrons_dxy);
   fChain->SetBranchAddress("tight_electrons.dz", tight_electrons_dz, &b_tight_electrons_dz);
   fChain->SetBranchAddress("tight_electrons.charge", tight_electrons_charge, &b_tight_electrons_charge);
   fChain->SetBranchAddress("tight_electrons.relIso", tight_electrons_relIso, &b_tight_electrons_relIso);
   fChain->SetBranchAddress("tight_electrons.lepMVA", tight_electrons_lepMVA, &b_tight_electrons_lepMVA);
   fChain->SetBranchAddress("tight_electrons.chreliso", tight_electrons_chreliso, &b_tight_electrons_chreliso);
   fChain->SetBranchAddress("tight_electrons.nureliso", tight_electrons_nureliso, &b_tight_electrons_nureliso);
   fChain->SetBranchAddress("tight_electrons.matchedJetdR", tight_electrons_matchedJetdR, &b_tight_electrons_matchedJetdR);
   fChain->SetBranchAddress("tight_electrons.jetPtRatio", tight_electrons_jetPtRatio, &b_tight_electrons_jetPtRatio);
   fChain->SetBranchAddress("tight_electrons.csv", tight_electrons_csv, &b_tight_electrons_csv);
   fChain->SetBranchAddress("tight_electrons.sip3D", tight_electrons_sip3D, &b_tight_electrons_sip3D);
   fChain->SetBranchAddress("tight_electrons.SCeta", tight_electrons_SCeta, &b_tight_electrons_SCeta);
   fChain->SetBranchAddress("tight_electrons.isGsfCtfScPixChargeConsistent", tight_electrons_isGsfCtfScPixChargeConsistent, &b_tight_electrons_isGsfCtfScPixChargeConsistent);
   fChain->SetBranchAddress("tight_electrons.numMissingInnerHits", tight_electrons_numMissingInnerHits, &b_tight_electrons_numMissingInnerHits);
   fChain->SetBranchAddress("tight_electrons.passConversioVeto", tight_electrons_passConversioVeto, &b_tight_electrons_passConversioVeto);
   fChain->SetBranchAddress("tight_electrons.dEtaIn", tight_electrons_dEtaIn, &b_tight_electrons_dEtaIn);
   fChain->SetBranchAddress("tight_electrons.dPhiIn", tight_electrons_dPhiIn, &b_tight_electrons_dPhiIn);
   fChain->SetBranchAddress("tight_electrons.full5x5_sigmaIetaIeta", tight_electrons_full5x5_sigmaIetaIeta, &b_tight_electrons_full5x5_sigmaIetaIeta);
   fChain->SetBranchAddress("tight_electrons.hadronicOverEm", tight_electrons_hadronicOverEm, &b_tight_electrons_hadronicOverEm);
   fChain->SetBranchAddress("tight_electrons.mvaID", tight_electrons_mvaID, &b_tight_electrons_mvaID);
   fChain->SetBranchAddress("tight_muons", &tight_muons_, &b_tight_muons_);
   fChain->SetBranchAddress("tight_muons.obj.fCoordinates.fX", tight_muons_obj_fCoordinates_fX, &b_tight_muons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("tight_muons.obj.fCoordinates.fY", tight_muons_obj_fCoordinates_fY, &b_tight_muons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("tight_muons.obj.fCoordinates.fZ", tight_muons_obj_fCoordinates_fZ, &b_tight_muons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("tight_muons.obj.fCoordinates.fT", tight_muons_obj_fCoordinates_fT, &b_tight_muons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("tight_muons.pdgID", tight_muons_pdgID, &b_tight_muons_pdgID);
   fChain->SetBranchAddress("tight_muons.dxy", tight_muons_dxy, &b_tight_muons_dxy);
   fChain->SetBranchAddress("tight_muons.dz", tight_muons_dz, &b_tight_muons_dz);
   fChain->SetBranchAddress("tight_muons.charge", tight_muons_charge, &b_tight_muons_charge);
   fChain->SetBranchAddress("tight_muons.relIso", tight_muons_relIso, &b_tight_muons_relIso);
   fChain->SetBranchAddress("tight_muons.lepMVA", tight_muons_lepMVA, &b_tight_muons_lepMVA);
   fChain->SetBranchAddress("tight_muons.chreliso", tight_muons_chreliso, &b_tight_muons_chreliso);
   fChain->SetBranchAddress("tight_muons.nureliso", tight_muons_nureliso, &b_tight_muons_nureliso);
   fChain->SetBranchAddress("tight_muons.matchedJetdR", tight_muons_matchedJetdR, &b_tight_muons_matchedJetdR);
   fChain->SetBranchAddress("tight_muons.jetPtRatio", tight_muons_jetPtRatio, &b_tight_muons_jetPtRatio);
   fChain->SetBranchAddress("tight_muons.csv", tight_muons_csv, &b_tight_muons_csv);
   fChain->SetBranchAddress("tight_muons.sip3D", tight_muons_sip3D, &b_tight_muons_sip3D);
   fChain->SetBranchAddress("tight_muons.chargeFlip", tight_muons_chargeFlip, &b_tight_muons_chargeFlip);
   fChain->SetBranchAddress("tight_muons.isPFMuon", tight_muons_isPFMuon, &b_tight_muons_isPFMuon);
   fChain->SetBranchAddress("tight_muons.isTrackerMuon", tight_muons_isTrackerMuon, &b_tight_muons_isTrackerMuon);
   fChain->SetBranchAddress("tight_muons.isGlobalMuon", tight_muons_isGlobalMuon, &b_tight_muons_isGlobalMuon);
   fChain->SetBranchAddress("tight_muons.normalizedChi2", tight_muons_normalizedChi2, &b_tight_muons_normalizedChi2);
   fChain->SetBranchAddress("tight_muons.numberOfValidMuonHits", tight_muons_numberOfValidMuonHits, &b_tight_muons_numberOfValidMuonHits);
   fChain->SetBranchAddress("tight_muons.numberOfMatchedStations", tight_muons_numberOfMatchedStations, &b_tight_muons_numberOfMatchedStations);
   fChain->SetBranchAddress("tight_muons.numberOfValidPixelHits", tight_muons_numberOfValidPixelHits, &b_tight_muons_numberOfValidPixelHits);
   fChain->SetBranchAddress("tight_muons.trackerLayersWithMeasurement", tight_muons_trackerLayersWithMeasurement, &b_tight_muons_trackerLayersWithMeasurement);
   fChain->SetBranchAddress("tight_muons.localChi2", tight_muons_localChi2, &b_tight_muons_localChi2);
   fChain->SetBranchAddress("tight_muons.trKink", tight_muons_trKink, &b_tight_muons_trKink);
   fChain->SetBranchAddress("tight_muons.validFrac", tight_muons_validFrac, &b_tight_muons_validFrac);
   fChain->SetBranchAddress("tight_muons.segCompatibility", tight_muons_segCompatibility, &b_tight_muons_segCompatibility);
   fChain->SetBranchAddress("raw_electrons", &raw_electrons_, &b_raw_electrons_);
   fChain->SetBranchAddress("raw_electrons.obj.fCoordinates.fX", raw_electrons_obj_fCoordinates_fX, &b_raw_electrons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("raw_electrons.obj.fCoordinates.fY", raw_electrons_obj_fCoordinates_fY, &b_raw_electrons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("raw_electrons.obj.fCoordinates.fZ", raw_electrons_obj_fCoordinates_fZ, &b_raw_electrons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("raw_electrons.obj.fCoordinates.fT", raw_electrons_obj_fCoordinates_fT, &b_raw_electrons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("raw_electrons.pdgID", raw_electrons_pdgID, &b_raw_electrons_pdgID);
   fChain->SetBranchAddress("raw_electrons.dxy", raw_electrons_dxy, &b_raw_electrons_dxy);
   fChain->SetBranchAddress("raw_electrons.dz", raw_electrons_dz, &b_raw_electrons_dz);
   fChain->SetBranchAddress("raw_electrons.charge", raw_electrons_charge, &b_raw_electrons_charge);
   fChain->SetBranchAddress("raw_electrons.relIso", raw_electrons_relIso, &b_raw_electrons_relIso);
   fChain->SetBranchAddress("raw_electrons.lepMVA", raw_electrons_lepMVA, &b_raw_electrons_lepMVA);
   fChain->SetBranchAddress("raw_electrons.chreliso", raw_electrons_chreliso, &b_raw_electrons_chreliso);
   fChain->SetBranchAddress("raw_electrons.nureliso", raw_electrons_nureliso, &b_raw_electrons_nureliso);
   fChain->SetBranchAddress("raw_electrons.matchedJetdR", raw_electrons_matchedJetdR, &b_raw_electrons_matchedJetdR);
   fChain->SetBranchAddress("raw_electrons.jetPtRatio", raw_electrons_jetPtRatio, &b_raw_electrons_jetPtRatio);
   fChain->SetBranchAddress("raw_electrons.csv", raw_electrons_csv, &b_raw_electrons_csv);
   fChain->SetBranchAddress("raw_electrons.sip3D", raw_electrons_sip3D, &b_raw_electrons_sip3D);
   fChain->SetBranchAddress("raw_electrons.SCeta", raw_electrons_SCeta, &b_raw_electrons_SCeta);
   fChain->SetBranchAddress("raw_electrons.isGsfCtfScPixChargeConsistent", raw_electrons_isGsfCtfScPixChargeConsistent, &b_raw_electrons_isGsfCtfScPixChargeConsistent);
   fChain->SetBranchAddress("raw_electrons.numMissingInnerHits", raw_electrons_numMissingInnerHits, &b_raw_electrons_numMissingInnerHits);
   fChain->SetBranchAddress("raw_electrons.passConversioVeto", raw_electrons_passConversioVeto, &b_raw_electrons_passConversioVeto);
   fChain->SetBranchAddress("raw_electrons.dEtaIn", raw_electrons_dEtaIn, &b_raw_electrons_dEtaIn);
   fChain->SetBranchAddress("raw_electrons.dPhiIn", raw_electrons_dPhiIn, &b_raw_electrons_dPhiIn);
   fChain->SetBranchAddress("raw_electrons.full5x5_sigmaIetaIeta", raw_electrons_full5x5_sigmaIetaIeta, &b_raw_electrons_full5x5_sigmaIetaIeta);
   fChain->SetBranchAddress("raw_electrons.hadronicOverEm", raw_electrons_hadronicOverEm, &b_raw_electrons_hadronicOverEm);
   fChain->SetBranchAddress("raw_electrons.mvaID", raw_electrons_mvaID, &b_raw_electrons_mvaID);
   fChain->SetBranchAddress("raw_muons", &raw_muons_, &b_raw_muons_);
   fChain->SetBranchAddress("raw_muons.obj.fCoordinates.fX", raw_muons_obj_fCoordinates_fX, &b_raw_muons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("raw_muons.obj.fCoordinates.fY", raw_muons_obj_fCoordinates_fY, &b_raw_muons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("raw_muons.obj.fCoordinates.fZ", raw_muons_obj_fCoordinates_fZ, &b_raw_muons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("raw_muons.obj.fCoordinates.fT", raw_muons_obj_fCoordinates_fT, &b_raw_muons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("raw_muons.pdgID", raw_muons_pdgID, &b_raw_muons_pdgID);
   fChain->SetBranchAddress("raw_muons.dxy", raw_muons_dxy, &b_raw_muons_dxy);
   fChain->SetBranchAddress("raw_muons.dz", raw_muons_dz, &b_raw_muons_dz);
   fChain->SetBranchAddress("raw_muons.charge", raw_muons_charge, &b_raw_muons_charge);
   fChain->SetBranchAddress("raw_muons.relIso", raw_muons_relIso, &b_raw_muons_relIso);
   fChain->SetBranchAddress("raw_muons.lepMVA", raw_muons_lepMVA, &b_raw_muons_lepMVA);
   fChain->SetBranchAddress("raw_muons.chreliso", raw_muons_chreliso, &b_raw_muons_chreliso);
   fChain->SetBranchAddress("raw_muons.nureliso", raw_muons_nureliso, &b_raw_muons_nureliso);
   fChain->SetBranchAddress("raw_muons.matchedJetdR", raw_muons_matchedJetdR, &b_raw_muons_matchedJetdR);
   fChain->SetBranchAddress("raw_muons.jetPtRatio", raw_muons_jetPtRatio, &b_raw_muons_jetPtRatio);
   fChain->SetBranchAddress("raw_muons.csv", raw_muons_csv, &b_raw_muons_csv);
   fChain->SetBranchAddress("raw_muons.sip3D", raw_muons_sip3D, &b_raw_muons_sip3D);
   fChain->SetBranchAddress("raw_muons.chargeFlip", raw_muons_chargeFlip, &b_raw_muons_chargeFlip);
   fChain->SetBranchAddress("raw_muons.isPFMuon", raw_muons_isPFMuon, &b_raw_muons_isPFMuon);
   fChain->SetBranchAddress("raw_muons.isTrackerMuon", raw_muons_isTrackerMuon, &b_raw_muons_isTrackerMuon);
   fChain->SetBranchAddress("raw_muons.isGlobalMuon", raw_muons_isGlobalMuon, &b_raw_muons_isGlobalMuon);
   fChain->SetBranchAddress("raw_muons.normalizedChi2", raw_muons_normalizedChi2, &b_raw_muons_normalizedChi2);
   fChain->SetBranchAddress("raw_muons.numberOfValidMuonHits", raw_muons_numberOfValidMuonHits, &b_raw_muons_numberOfValidMuonHits);
   fChain->SetBranchAddress("raw_muons.numberOfMatchedStations", raw_muons_numberOfMatchedStations, &b_raw_muons_numberOfMatchedStations);
   fChain->SetBranchAddress("raw_muons.numberOfValidPixelHits", raw_muons_numberOfValidPixelHits, &b_raw_muons_numberOfValidPixelHits);
   fChain->SetBranchAddress("raw_muons.trackerLayersWithMeasurement", raw_muons_trackerLayersWithMeasurement, &b_raw_muons_trackerLayersWithMeasurement);
   fChain->SetBranchAddress("raw_muons.localChi2", raw_muons_localChi2, &b_raw_muons_localChi2);
   fChain->SetBranchAddress("raw_muons.trKink", raw_muons_trKink, &b_raw_muons_trKink);
   fChain->SetBranchAddress("raw_muons.validFrac", raw_muons_validFrac, &b_raw_muons_validFrac);
   fChain->SetBranchAddress("raw_muons.segCompatibility", raw_muons_segCompatibility, &b_raw_muons_segCompatibility);
   fChain->SetBranchAddress("preselected_jets", &preselected_jets_, &b_preselected_jets_);
   fChain->SetBranchAddress("preselected_jets.obj.fCoordinates.fX", preselected_jets_obj_fCoordinates_fX, &b_preselected_jets_obj_fCoordinates_fX);
   fChain->SetBranchAddress("preselected_jets.obj.fCoordinates.fY", preselected_jets_obj_fCoordinates_fY, &b_preselected_jets_obj_fCoordinates_fY);
   fChain->SetBranchAddress("preselected_jets.obj.fCoordinates.fZ", preselected_jets_obj_fCoordinates_fZ, &b_preselected_jets_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("preselected_jets.obj.fCoordinates.fT", preselected_jets_obj_fCoordinates_fT, &b_preselected_jets_obj_fCoordinates_fT);
   fChain->SetBranchAddress("preselected_jets.charge", preselected_jets_charge, &b_preselected_jets_charge);
   fChain->SetBranchAddress("preselected_jets.pdgID", preselected_jets_pdgID, &b_preselected_jets_pdgID);
   fChain->SetBranchAddress("preselected_jets.csv", preselected_jets_csv, &b_preselected_jets_csv);
   fChain->SetBranchAddress("loose_bJets", &loose_bJets_, &b_loose_bJets_);
   fChain->SetBranchAddress("loose_bJets.obj.fCoordinates.fX", loose_bJets_obj_fCoordinates_fX, &b_loose_bJets_obj_fCoordinates_fX);
   fChain->SetBranchAddress("loose_bJets.obj.fCoordinates.fY", loose_bJets_obj_fCoordinates_fY, &b_loose_bJets_obj_fCoordinates_fY);
   fChain->SetBranchAddress("loose_bJets.obj.fCoordinates.fZ", loose_bJets_obj_fCoordinates_fZ, &b_loose_bJets_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("loose_bJets.obj.fCoordinates.fT", loose_bJets_obj_fCoordinates_fT, &b_loose_bJets_obj_fCoordinates_fT);
   fChain->SetBranchAddress("loose_bJets.charge", loose_bJets_charge, &b_loose_bJets_charge);
   fChain->SetBranchAddress("loose_bJets.pdgID", loose_bJets_pdgID, &b_loose_bJets_pdgID);
   fChain->SetBranchAddress("loose_bJets.csv", loose_bJets_csv, &b_loose_bJets_csv);
   fChain->SetBranchAddress("met", &met_, &b_met_);
   fChain->SetBranchAddress("met.obj.fCoordinates.fX", met_obj_fCoordinates_fX, &b_met_obj_fCoordinates_fX);
   fChain->SetBranchAddress("met.obj.fCoordinates.fY", met_obj_fCoordinates_fY, &b_met_obj_fCoordinates_fY);
   fChain->SetBranchAddress("met.obj.fCoordinates.fZ", met_obj_fCoordinates_fZ, &b_met_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("met.obj.fCoordinates.fT", met_obj_fCoordinates_fT, &b_met_obj_fCoordinates_fT);
   fChain->SetBranchAddress("met.pt_forSync", met_pt_forSync, &b_met_pt_forSync);
   fChain->SetBranchAddress("met.phi_forSync", met_phi_forSync, &b_met_phi_forSync);
   fChain->SetBranchAddress("pruned_genParticles", &pruned_genParticles_, &b_pruned_genParticles_);
   fChain->SetBranchAddress("pruned_genParticles.obj.fCoordinates.fX", pruned_genParticles_obj_fCoordinates_fX, &b_pruned_genParticles_obj_fCoordinates_fX);
   fChain->SetBranchAddress("pruned_genParticles.obj.fCoordinates.fY", pruned_genParticles_obj_fCoordinates_fY, &b_pruned_genParticles_obj_fCoordinates_fY);
   fChain->SetBranchAddress("pruned_genParticles.obj.fCoordinates.fZ", pruned_genParticles_obj_fCoordinates_fZ, &b_pruned_genParticles_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("pruned_genParticles.obj.fCoordinates.fT", pruned_genParticles_obj_fCoordinates_fT, &b_pruned_genParticles_obj_fCoordinates_fT);
   fChain->SetBranchAddress("pruned_genParticles.pdgID", pruned_genParticles_pdgID, &b_pruned_genParticles_pdgID);
   fChain->SetBranchAddress("pruned_genParticles.status", pruned_genParticles_status, &b_pruned_genParticles_status);
   fChain->SetBranchAddress("pruned_genParticles.mother_pdgID", pruned_genParticles_mother_pdgID, &b_pruned_genParticles_mother_pdgID);
   fChain->SetBranchAddress("pruned_genParticles.grandmother_pdgID", pruned_genParticles_grandmother_pdgID, &b_pruned_genParticles_grandmother_pdgID);
   Notify();
}

Bool_t ttHanalysis::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void ttHanalysis::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t ttHanalysis::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef ttHanalysis_cxx
