//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jan 29 16:12:38 2015 by ROOT version 5.34/18
// from TTree summaryTree/Summary Event Values
// found on file: ../tuples/synch_full_second.root
//////////////////////////////////////////////////////////

#ifndef ttHanalysis_h
#define ttHanalysis_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>
#include <Math/GenVector/PxPyPzE4D.h>
#include "/afs/cern.ch/work/r/rebeca/CMSSW_7_2_3/src/ttH-13TeVMultiLeptons/TemplateMakers/interface/objectClasses.h"

// Fixed size dimensions of array or collections stored in the TTree if any.
const Int_t kMaxpreselected_leptons = 5;
const Int_t kMaxpreselected_electrons = 4;
const Int_t kMaxpreselected_muons = 5;
const Int_t kMaxloose_leptons = 9;
const Int_t kMaxloose_electrons = 4;
const Int_t kMaxloose_muons = 9;
const Int_t kMaxtight_leptons = 4;
const Int_t kMaxtight_electrons = 4;
const Int_t kMaxtight_muons = 3;
const Int_t kMaxpreselected_jets = 16;
const Int_t kMaxloose_bJets = 1;
const Int_t kMaxmet = 1;

class ttHanalysis {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           checkTrig;
   Double_t        LepTrigCorr;
   Double_t        LepIDAndIsoSF;
   Double_t        TopPt;
   Double_t        TopPtCorr;
   Double_t        PU;
   Double_t        PUCorr;
   Double_t        mcwgt;
   Double_t        wgt;
   Int_t           eventnum;
   Int_t           lumiBlock;
   Int_t           runNumber;
   Int_t           numExtraPartons;
   Int_t           higgs_decay;
   vector<int>     *allLeptonGenGrandMotherId;
   vector<int>     *allLeptonGenMotherId;
   vector<int>     *allLeptonTkCharge;
   Int_t           preselected_leptons_;
   Double_t        preselected_leptons_obj_fCoordinates_fX[kMaxpreselected_leptons];   //[preselected_leptons_]
   Double_t        preselected_leptons_obj_fCoordinates_fY[kMaxpreselected_leptons];   //[preselected_leptons_]
   Double_t        preselected_leptons_obj_fCoordinates_fZ[kMaxpreselected_leptons];   //[preselected_leptons_]
   Double_t        preselected_leptons_obj_fCoordinates_fT[kMaxpreselected_leptons];   //[preselected_leptons_]
   Double_t        preselected_leptons_id[kMaxpreselected_leptons];   //[preselected_leptons_]
   Int_t           preselected_electrons_;
   Double_t        preselected_electrons_obj_fCoordinates_fX[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_obj_fCoordinates_fY[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_obj_fCoordinates_fZ[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_obj_fCoordinates_fT[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_SCeta[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_pdgID[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_dxy[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_dz[kMaxpreselected_electrons];   //[preselected_electrons_]
   Int_t           preselected_electrons_charge[kMaxpreselected_electrons];   //[preselected_electrons_]
   Bool_t          preselected_electrons_isGsfCtfScPixChargeConsistent[kMaxpreselected_electrons];   //[preselected_electrons_]
   Int_t           preselected_electrons_numMissingInnerHits[kMaxpreselected_electrons];   //[preselected_electrons_]
   Bool_t          preselected_electrons_passConversioVeto[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_mvaID[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_lepMVA[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_chreliso[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_nureliso[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_matchedJetdR[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_jetPtRatio[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_btagCSV[kMaxpreselected_electrons];   //[preselected_electrons_]
   Double_t        preselected_electrons_sip3D[kMaxpreselected_electrons];   //[preselected_electrons_]
   Int_t           preselected_muons_;
   Double_t        preselected_muons_obj_fCoordinates_fX[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_obj_fCoordinates_fY[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_obj_fCoordinates_fZ[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_obj_fCoordinates_fT[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_pdgID[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_dxy[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_dz[kMaxpreselected_muons];   //[preselected_muons_]
   Int_t           preselected_muons_charge[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_chargeFlip[kMaxpreselected_muons];   //[preselected_muons_]
   Bool_t          preselected_muons_isPFMuon[kMaxpreselected_muons];   //[preselected_muons_]
   Bool_t          preselected_muons_isTrackerMuon[kMaxpreselected_muons];   //[preselected_muons_]
   Bool_t          preselected_muons_isGlobalMuon[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_lepMVA[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_chreliso[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_nureliso[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_matchedJetdR[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_jetPtRatio[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_btagCSV[kMaxpreselected_muons];   //[preselected_muons_]
   Double_t        preselected_muons_sip3D[kMaxpreselected_muons];   //[preselected_muons_]
   Int_t           loose_leptons_;
   Double_t        loose_leptons_obj_fCoordinates_fX[kMaxloose_leptons];   //[loose_leptons_]
   Double_t        loose_leptons_obj_fCoordinates_fY[kMaxloose_leptons];   //[loose_leptons_]
   Double_t        loose_leptons_obj_fCoordinates_fZ[kMaxloose_leptons];   //[loose_leptons_]
   Double_t        loose_leptons_obj_fCoordinates_fT[kMaxloose_leptons];   //[loose_leptons_]
   Double_t        loose_leptons_id[kMaxloose_leptons];   //[loose_leptons_]
   Int_t           loose_electrons_;
   Double_t        loose_electrons_obj_fCoordinates_fX[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_obj_fCoordinates_fY[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_obj_fCoordinates_fZ[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_obj_fCoordinates_fT[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_SCeta[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_pdgID[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_dxy[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_dz[kMaxloose_electrons];   //[loose_electrons_]
   Int_t           loose_electrons_charge[kMaxloose_electrons];   //[loose_electrons_]
   Bool_t          loose_electrons_isGsfCtfScPixChargeConsistent[kMaxloose_electrons];   //[loose_electrons_]
   Int_t           loose_electrons_numMissingInnerHits[kMaxloose_electrons];   //[loose_electrons_]
   Bool_t          loose_electrons_passConversioVeto[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_mvaID[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_lepMVA[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_chreliso[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_nureliso[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_matchedJetdR[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_jetPtRatio[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_btagCSV[kMaxloose_electrons];   //[loose_electrons_]
   Double_t        loose_electrons_sip3D[kMaxloose_electrons];   //[loose_electrons_]
   Int_t           loose_muons_;
   Double_t        loose_muons_obj_fCoordinates_fX[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_obj_fCoordinates_fY[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_obj_fCoordinates_fZ[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_obj_fCoordinates_fT[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_pdgID[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_dxy[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_dz[kMaxloose_muons];   //[loose_muons_]
   Int_t           loose_muons_charge[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_chargeFlip[kMaxloose_muons];   //[loose_muons_]
   Bool_t          loose_muons_isPFMuon[kMaxloose_muons];   //[loose_muons_]
   Bool_t          loose_muons_isTrackerMuon[kMaxloose_muons];   //[loose_muons_]
   Bool_t          loose_muons_isGlobalMuon[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_lepMVA[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_chreliso[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_nureliso[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_matchedJetdR[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_jetPtRatio[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_btagCSV[kMaxloose_muons];   //[loose_muons_]
   Double_t        loose_muons_sip3D[kMaxloose_muons];   //[loose_muons_]
   Int_t           tight_leptons_;
   Double_t        tight_leptons_obj_fCoordinates_fX[kMaxtight_leptons];   //[tight_leptons_]
   Double_t        tight_leptons_obj_fCoordinates_fY[kMaxtight_leptons];   //[tight_leptons_]
   Double_t        tight_leptons_obj_fCoordinates_fZ[kMaxtight_leptons];   //[tight_leptons_]
   Double_t        tight_leptons_obj_fCoordinates_fT[kMaxtight_leptons];   //[tight_leptons_]
   Double_t        tight_leptons_id[kMaxtight_leptons];   //[tight_leptons_]
   Int_t           tight_electrons_;
   Double_t        tight_electrons_obj_fCoordinates_fX[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_obj_fCoordinates_fY[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_obj_fCoordinates_fZ[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_obj_fCoordinates_fT[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_SCeta[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_pdgID[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_dxy[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_dz[kMaxtight_electrons];   //[tight_electrons_]
   Int_t           tight_electrons_charge[kMaxtight_electrons];   //[tight_electrons_]
   Bool_t          tight_electrons_isGsfCtfScPixChargeConsistent[kMaxtight_electrons];   //[tight_electrons_]
   Int_t           tight_electrons_numMissingInnerHits[kMaxtight_electrons];   //[tight_electrons_]
   Bool_t          tight_electrons_passConversioVeto[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_mvaID[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_lepMVA[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_chreliso[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_nureliso[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_matchedJetdR[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_jetPtRatio[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_btagCSV[kMaxtight_electrons];   //[tight_electrons_]
   Double_t        tight_electrons_sip3D[kMaxtight_electrons];   //[tight_electrons_]
   Int_t           tight_muons_;
   Double_t        tight_muons_obj_fCoordinates_fX[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_obj_fCoordinates_fY[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_obj_fCoordinates_fZ[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_obj_fCoordinates_fT[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_pdgID[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_dxy[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_dz[kMaxtight_muons];   //[tight_muons_]
   Int_t           tight_muons_charge[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_chargeFlip[kMaxtight_muons];   //[tight_muons_]
   Bool_t          tight_muons_isPFMuon[kMaxtight_muons];   //[tight_muons_]
   Bool_t          tight_muons_isTrackerMuon[kMaxtight_muons];   //[tight_muons_]
   Bool_t          tight_muons_isGlobalMuon[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_lepMVA[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_chreliso[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_nureliso[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_matchedJetdR[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_jetPtRatio[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_btagCSV[kMaxtight_muons];   //[tight_muons_]
   Double_t        tight_muons_sip3D[kMaxtight_muons];   //[tight_muons_]
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
   Int_t           numJets_fromHiggs_30;
   Int_t           numJets_fromHiggs;
   Double_t        AvgBtagDiscNonBtags;
   Double_t        AvgBtagDiscBtags;
   Double_t        NumHiggsLikeDijet15;
   Double_t        HiggsLikeDijetMass2;
   Double_t        HiggsLikeDijetMass;
   Double_t        GenHiggsDijetMass;
   Double_t        DeltaPhiMetLepLep;
   Double_t        DeltaRMetLepLep;
   Double_t        MTMetLepLep;
   Double_t        MassMetLepLep;
   Double_t        MaxDeltaPhiMetJet;
   Double_t        MinDeltaPhiMetJet;
   Double_t        MaxDeltaPhiMetJet;
   Double_t        MinDeltaPhiMetJet;
   Double_t        DeltaPhiMetLep2;
   Double_t        DeltaPhiMetLep1;
   Double_t        DeltaRJets_FromHiggs;
   Double_t        DeltaPhiJets_FromHiggs;
   Double_t        WLikeDijetMass81;
   Double_t        SumNonTaggedJetMass;
   Double_t        SumJetMass;
   Double_t        SumJetPt;
   Double_t        SumPt;
   Double_t        MinDrJets;
   Double_t        MHT;
   Double_t        DeltaPhiLepLep;
   Double_t        DeltaRLepLep;
   Double_t        Zmass;
   Double_t        MassLepLep;
   Double_t        myFinalBDT_OS_2012;

   // List of branches
   TBranch        *b_checkTrig;   //!
   TBranch        *b_LepTrigCorr;   //!
   TBranch        *b_LepIDAndIsoSF;   //!
   TBranch        *b_TopPt;   //!
   TBranch        *b_TopPtCorr;   //!
   TBranch        *b_PU;   //!
   TBranch        *b_PUCorr;   //!
   TBranch        *b_mcwgt;   //!
   TBranch        *b_wgt;   //!
   TBranch        *b_eventnum;   //!
   TBranch        *b_lumiBlock;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_numExtraPartons;   //!
   TBranch        *b_higgs_decay;   //!
   TBranch        *b_allLeptonGenGrandMotherId;   //!
   TBranch        *b_allLeptonGenMotherId;   //!
   TBranch        *b_allLeptonTkCharge;   //!
   TBranch        *b_preselected_leptons_;   //!
   TBranch        *b_preselected_leptons_obj_fCoordinates_fX;   //!
   TBranch        *b_preselected_leptons_obj_fCoordinates_fY;   //!
   TBranch        *b_preselected_leptons_obj_fCoordinates_fZ;   //!
   TBranch        *b_preselected_leptons_obj_fCoordinates_fT;   //!
   TBranch        *b_preselected_leptons_id;   //!
   TBranch        *b_preselected_electrons_;   //!
   TBranch        *b_preselected_electrons_obj_fCoordinates_fX;   //!
   TBranch        *b_preselected_electrons_obj_fCoordinates_fY;   //!
   TBranch        *b_preselected_electrons_obj_fCoordinates_fZ;   //!
   TBranch        *b_preselected_electrons_obj_fCoordinates_fT;   //!
   TBranch        *b_preselected_electrons_SCeta;   //!
   TBranch        *b_preselected_electrons_pdgID;   //!
   TBranch        *b_preselected_electrons_dxy;   //!
   TBranch        *b_preselected_electrons_dz;   //!
   TBranch        *b_preselected_electrons_charge;   //!
   TBranch        *b_preselected_electrons_isGsfCtfScPixChargeConsistent;   //!
   TBranch        *b_preselected_electrons_numMissingInnerHits;   //!
   TBranch        *b_preselected_electrons_passConversioVeto;   //!
   TBranch        *b_preselected_electrons_mvaID;   //!
   TBranch        *b_preselected_electrons_lepMVA;   //!
   TBranch        *b_preselected_electrons_chreliso;   //!
   TBranch        *b_preselected_electrons_nureliso;   //!
   TBranch        *b_preselected_electrons_matchedJetdR;   //!
   TBranch        *b_preselected_electrons_jetPtRatio;   //!
   TBranch        *b_preselected_electrons_btagCSV;   //!
   TBranch        *b_preselected_electrons_sip3D;   //!
   TBranch        *b_preselected_muons_;   //!
   TBranch        *b_preselected_muons_obj_fCoordinates_fX;   //!
   TBranch        *b_preselected_muons_obj_fCoordinates_fY;   //!
   TBranch        *b_preselected_muons_obj_fCoordinates_fZ;   //!
   TBranch        *b_preselected_muons_obj_fCoordinates_fT;   //!
   TBranch        *b_preselected_muons_pdgID;   //!
   TBranch        *b_preselected_muons_dxy;   //!
   TBranch        *b_preselected_muons_dz;   //!
   TBranch        *b_preselected_muons_charge;   //!
   TBranch        *b_preselected_muons_chargeFlip;   //!
   TBranch        *b_preselected_muons_isPFMuon;   //!
   TBranch        *b_preselected_muons_isTrackerMuon;   //!
   TBranch        *b_preselected_muons_isGlobalMuon;   //!
   TBranch        *b_preselected_muons_lepMVA;   //!
   TBranch        *b_preselected_muons_chreliso;   //!
   TBranch        *b_preselected_muons_nureliso;   //!
   TBranch        *b_preselected_muons_matchedJetdR;   //!
   TBranch        *b_preselected_muons_jetPtRatio;   //!
   TBranch        *b_preselected_muons_btagCSV;   //!
   TBranch        *b_preselected_muons_sip3D;   //!
   TBranch        *b_loose_leptons_;   //!
   TBranch        *b_loose_leptons_obj_fCoordinates_fX;   //!
   TBranch        *b_loose_leptons_obj_fCoordinates_fY;   //!
   TBranch        *b_loose_leptons_obj_fCoordinates_fZ;   //!
   TBranch        *b_loose_leptons_obj_fCoordinates_fT;   //!
   TBranch        *b_loose_leptons_id;   //!
   TBranch        *b_loose_electrons_;   //!
   TBranch        *b_loose_electrons_obj_fCoordinates_fX;   //!
   TBranch        *b_loose_electrons_obj_fCoordinates_fY;   //!
   TBranch        *b_loose_electrons_obj_fCoordinates_fZ;   //!
   TBranch        *b_loose_electrons_obj_fCoordinates_fT;   //!
   TBranch        *b_loose_electrons_SCeta;   //!
   TBranch        *b_loose_electrons_pdgID;   //!
   TBranch        *b_loose_electrons_dxy;   //!
   TBranch        *b_loose_electrons_dz;   //!
   TBranch        *b_loose_electrons_charge;   //!
   TBranch        *b_loose_electrons_isGsfCtfScPixChargeConsistent;   //!
   TBranch        *b_loose_electrons_numMissingInnerHits;   //!
   TBranch        *b_loose_electrons_passConversioVeto;   //!
   TBranch        *b_loose_electrons_mvaID;   //!
   TBranch        *b_loose_electrons_lepMVA;   //!
   TBranch        *b_loose_electrons_chreliso;   //!
   TBranch        *b_loose_electrons_nureliso;   //!
   TBranch        *b_loose_electrons_matchedJetdR;   //!
   TBranch        *b_loose_electrons_jetPtRatio;   //!
   TBranch        *b_loose_electrons_btagCSV;   //!
   TBranch        *b_loose_electrons_sip3D;   //!
   TBranch        *b_loose_muons_;   //!
   TBranch        *b_loose_muons_obj_fCoordinates_fX;   //!
   TBranch        *b_loose_muons_obj_fCoordinates_fY;   //!
   TBranch        *b_loose_muons_obj_fCoordinates_fZ;   //!
   TBranch        *b_loose_muons_obj_fCoordinates_fT;   //!
   TBranch        *b_loose_muons_pdgID;   //!
   TBranch        *b_loose_muons_dxy;   //!
   TBranch        *b_loose_muons_dz;   //!
   TBranch        *b_loose_muons_charge;   //!
   TBranch        *b_loose_muons_chargeFlip;   //!
   TBranch        *b_loose_muons_isPFMuon;   //!
   TBranch        *b_loose_muons_isTrackerMuon;   //!
   TBranch        *b_loose_muons_isGlobalMuon;   //!
   TBranch        *b_loose_muons_lepMVA;   //!
   TBranch        *b_loose_muons_chreliso;   //!
   TBranch        *b_loose_muons_nureliso;   //!
   TBranch        *b_loose_muons_matchedJetdR;   //!
   TBranch        *b_loose_muons_jetPtRatio;   //!
   TBranch        *b_loose_muons_btagCSV;   //!
   TBranch        *b_loose_muons_sip3D;   //!
   TBranch        *b_tight_leptons_;   //!
   TBranch        *b_tight_leptons_obj_fCoordinates_fX;   //!
   TBranch        *b_tight_leptons_obj_fCoordinates_fY;   //!
   TBranch        *b_tight_leptons_obj_fCoordinates_fZ;   //!
   TBranch        *b_tight_leptons_obj_fCoordinates_fT;   //!
   TBranch        *b_tight_leptons_id;   //!
   TBranch        *b_tight_electrons_;   //!
   TBranch        *b_tight_electrons_obj_fCoordinates_fX;   //!
   TBranch        *b_tight_electrons_obj_fCoordinates_fY;   //!
   TBranch        *b_tight_electrons_obj_fCoordinates_fZ;   //!
   TBranch        *b_tight_electrons_obj_fCoordinates_fT;   //!
   TBranch        *b_tight_electrons_SCeta;   //!
   TBranch        *b_tight_electrons_pdgID;   //!
   TBranch        *b_tight_electrons_dxy;   //!
   TBranch        *b_tight_electrons_dz;   //!
   TBranch        *b_tight_electrons_charge;   //!
   TBranch        *b_tight_electrons_isGsfCtfScPixChargeConsistent;   //!
   TBranch        *b_tight_electrons_numMissingInnerHits;   //!
   TBranch        *b_tight_electrons_passConversioVeto;   //!
   TBranch        *b_tight_electrons_mvaID;   //!
   TBranch        *b_tight_electrons_lepMVA;   //!
   TBranch        *b_tight_electrons_chreliso;   //!
   TBranch        *b_tight_electrons_nureliso;   //!
   TBranch        *b_tight_electrons_matchedJetdR;   //!
   TBranch        *b_tight_electrons_jetPtRatio;   //!
   TBranch        *b_tight_electrons_btagCSV;   //!
   TBranch        *b_tight_electrons_sip3D;   //!
   TBranch        *b_tight_muons_;   //!
   TBranch        *b_tight_muons_obj_fCoordinates_fX;   //!
   TBranch        *b_tight_muons_obj_fCoordinates_fY;   //!
   TBranch        *b_tight_muons_obj_fCoordinates_fZ;   //!
   TBranch        *b_tight_muons_obj_fCoordinates_fT;   //!
   TBranch        *b_tight_muons_pdgID;   //!
   TBranch        *b_tight_muons_dxy;   //!
   TBranch        *b_tight_muons_dz;   //!
   TBranch        *b_tight_muons_charge;   //!
   TBranch        *b_tight_muons_chargeFlip;   //!
   TBranch        *b_tight_muons_isPFMuon;   //!
   TBranch        *b_tight_muons_isTrackerMuon;   //!
   TBranch        *b_tight_muons_isGlobalMuon;   //!
   TBranch        *b_tight_muons_lepMVA;   //!
   TBranch        *b_tight_muons_chreliso;   //!
   TBranch        *b_tight_muons_nureliso;   //!
   TBranch        *b_tight_muons_matchedJetdR;   //!
   TBranch        *b_tight_muons_jetPtRatio;   //!
   TBranch        *b_tight_muons_btagCSV;   //!
   TBranch        *b_tight_muons_sip3D;   //!
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
   TBranch        *b_numJets_fromHiggs_30;   //!
   TBranch        *b_numJets_fromHiggs;   //!
   TBranch        *b_AvgBtagDiscNonBtags;   //!
   TBranch        *b_AvgBtagDiscBtags;   //!
   TBranch        *b_NumHiggsLikeDijet15;   //!
   TBranch        *b_HiggsLikeDijetMass2;   //!
   TBranch        *b_HiggsLikeDijetMass;   //!
   TBranch        *b_GenHiggsDijetMass;   //!
   TBranch        *b_DeltaPhiMetLepLep;   //!
   TBranch        *b_DeltaRMetLepLep;   //!
   TBranch        *b_MTMetLepLep;   //!
   TBranch        *b_MassMetLepLep;   //!
   TBranch        *b_MaxDeltaPhiMetJet;   //!
   TBranch        *b_MinDeltaPhiMetJet;   //!
   TBranch        *b_MaxDeltaPhiMetJet;   //!
   TBranch        *b_MinDeltaPhiMetJet;   //!
   TBranch        *b_DeltaPhiMetLep2;   //!
   TBranch        *b_DeltaPhiMetLep1;   //!
   TBranch        *b_DeltaRJets_FromHiggs;   //!
   TBranch        *b_DeltaPhiJets_FromHiggs;   //!
   TBranch        *b_WLikeDijetMass81;   //!
   TBranch        *b_SumNonTaggedJetMass;   //!
   TBranch        *b_SumJetMass;   //!
   TBranch        *b_SumJetPt;   //!
   TBranch        *b_SumPt;   //!
   TBranch        *b_MinDrJets;   //!
   TBranch        *b_MHT;   //!
   TBranch        *b_DeltaPhiLepLep;   //!
   TBranch        *b_DeltaRLepLep;   //!
   TBranch        *b_Zmass;   //!
   TBranch        *b_MassLepLep;   //!
   TBranch        *b_myFinalBDT_OS_2012;   //!

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

   // Set object pointer
   allLeptonGenGrandMotherId = 0;
   allLeptonGenMotherId = 0;
   allLeptonTkCharge = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("checkTrig", &checkTrig, &b_checkTrig);
   fChain->SetBranchAddress("LepTrigCorr", &LepTrigCorr, &b_LepTrigCorr);
   fChain->SetBranchAddress("LepIDAndIsoSF", &LepIDAndIsoSF, &b_LepIDAndIsoSF);
   fChain->SetBranchAddress("TopPt", &TopPt, &b_TopPt);
   fChain->SetBranchAddress("TopPtCorr", &TopPtCorr, &b_TopPtCorr);
   fChain->SetBranchAddress("PU", &PU, &b_PU);
   fChain->SetBranchAddress("PUCorr", &PUCorr, &b_PUCorr);
   fChain->SetBranchAddress("mcwgt", &mcwgt, &b_mcwgt);
   fChain->SetBranchAddress("wgt", &wgt, &b_wgt);
   fChain->SetBranchAddress("eventnum", &eventnum, &b_eventnum);
   fChain->SetBranchAddress("lumiBlock", &lumiBlock, &b_lumiBlock);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("numExtraPartons", &numExtraPartons, &b_numExtraPartons);
   fChain->SetBranchAddress("higgs_decay", &higgs_decay, &b_higgs_decay);
   fChain->SetBranchAddress("allLeptonGenGrandMotherId", &allLeptonGenGrandMotherId, &b_allLeptonGenGrandMotherId);
   fChain->SetBranchAddress("allLeptonGenMotherId", &allLeptonGenMotherId, &b_allLeptonGenMotherId);
   fChain->SetBranchAddress("allLeptonTkCharge", &allLeptonTkCharge, &b_allLeptonTkCharge);
   fChain->SetBranchAddress("preselected_leptons", &preselected_leptons_, &b_preselected_leptons_);
   fChain->SetBranchAddress("preselected_leptons.obj.fCoordinates.fX", preselected_leptons_obj_fCoordinates_fX, &b_preselected_leptons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("preselected_leptons.obj.fCoordinates.fY", preselected_leptons_obj_fCoordinates_fY, &b_preselected_leptons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("preselected_leptons.obj.fCoordinates.fZ", preselected_leptons_obj_fCoordinates_fZ, &b_preselected_leptons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("preselected_leptons.obj.fCoordinates.fT", preselected_leptons_obj_fCoordinates_fT, &b_preselected_leptons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("preselected_leptons.id", preselected_leptons_id, &b_preselected_leptons_id);
   fChain->SetBranchAddress("preselected_electrons", &preselected_electrons_, &b_preselected_electrons_);
   fChain->SetBranchAddress("preselected_electrons.obj.fCoordinates.fX", preselected_electrons_obj_fCoordinates_fX, &b_preselected_electrons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("preselected_electrons.obj.fCoordinates.fY", preselected_electrons_obj_fCoordinates_fY, &b_preselected_electrons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("preselected_electrons.obj.fCoordinates.fZ", preselected_electrons_obj_fCoordinates_fZ, &b_preselected_electrons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("preselected_electrons.obj.fCoordinates.fT", preselected_electrons_obj_fCoordinates_fT, &b_preselected_electrons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("preselected_electrons.SCeta", preselected_electrons_SCeta, &b_preselected_electrons_SCeta);
   fChain->SetBranchAddress("preselected_electrons.pdgID", preselected_electrons_pdgID, &b_preselected_electrons_pdgID);
   fChain->SetBranchAddress("preselected_electrons.dxy", preselected_electrons_dxy, &b_preselected_electrons_dxy);
   fChain->SetBranchAddress("preselected_electrons.dz", preselected_electrons_dz, &b_preselected_electrons_dz);
   fChain->SetBranchAddress("preselected_electrons.charge", preselected_electrons_charge, &b_preselected_electrons_charge);
   fChain->SetBranchAddress("preselected_electrons.isGsfCtfScPixChargeConsistent", preselected_electrons_isGsfCtfScPixChargeConsistent, &b_preselected_electrons_isGsfCtfScPixChargeConsistent);
   fChain->SetBranchAddress("preselected_electrons.numMissingInnerHits", preselected_electrons_numMissingInnerHits, &b_preselected_electrons_numMissingInnerHits);
   fChain->SetBranchAddress("preselected_electrons.passConversioVeto", preselected_electrons_passConversioVeto, &b_preselected_electrons_passConversioVeto);
   fChain->SetBranchAddress("preselected_electrons.mvaID", preselected_electrons_mvaID, &b_preselected_electrons_mvaID);
   fChain->SetBranchAddress("preselected_electrons.lepMVA", preselected_electrons_lepMVA, &b_preselected_electrons_lepMVA);
   fChain->SetBranchAddress("preselected_electrons.chreliso", preselected_electrons_chreliso, &b_preselected_electrons_chreliso);
   fChain->SetBranchAddress("preselected_electrons.nureliso", preselected_electrons_nureliso, &b_preselected_electrons_nureliso);
   fChain->SetBranchAddress("preselected_electrons.matchedJetdR", preselected_electrons_matchedJetdR, &b_preselected_electrons_matchedJetdR);
   fChain->SetBranchAddress("preselected_electrons.jetPtRatio", preselected_electrons_jetPtRatio, &b_preselected_electrons_jetPtRatio);
   fChain->SetBranchAddress("preselected_electrons.btagCSV", preselected_electrons_btagCSV, &b_preselected_electrons_btagCSV);
   fChain->SetBranchAddress("preselected_electrons.sip3D", preselected_electrons_sip3D, &b_preselected_electrons_sip3D);
   fChain->SetBranchAddress("preselected_muons", &preselected_muons_, &b_preselected_muons_);
   fChain->SetBranchAddress("preselected_muons.obj.fCoordinates.fX", preselected_muons_obj_fCoordinates_fX, &b_preselected_muons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("preselected_muons.obj.fCoordinates.fY", preselected_muons_obj_fCoordinates_fY, &b_preselected_muons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("preselected_muons.obj.fCoordinates.fZ", preselected_muons_obj_fCoordinates_fZ, &b_preselected_muons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("preselected_muons.obj.fCoordinates.fT", preselected_muons_obj_fCoordinates_fT, &b_preselected_muons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("preselected_muons.pdgID", preselected_muons_pdgID, &b_preselected_muons_pdgID);
   fChain->SetBranchAddress("preselected_muons.dxy", preselected_muons_dxy, &b_preselected_muons_dxy);
   fChain->SetBranchAddress("preselected_muons.dz", preselected_muons_dz, &b_preselected_muons_dz);
   fChain->SetBranchAddress("preselected_muons.charge", preselected_muons_charge, &b_preselected_muons_charge);
   fChain->SetBranchAddress("preselected_muons.chargeFlip", preselected_muons_chargeFlip, &b_preselected_muons_chargeFlip);
   fChain->SetBranchAddress("preselected_muons.isPFMuon", preselected_muons_isPFMuon, &b_preselected_muons_isPFMuon);
   fChain->SetBranchAddress("preselected_muons.isTrackerMuon", preselected_muons_isTrackerMuon, &b_preselected_muons_isTrackerMuon);
   fChain->SetBranchAddress("preselected_muons.isGlobalMuon", preselected_muons_isGlobalMuon, &b_preselected_muons_isGlobalMuon);
   fChain->SetBranchAddress("preselected_muons.lepMVA", preselected_muons_lepMVA, &b_preselected_muons_lepMVA);
   fChain->SetBranchAddress("preselected_muons.chreliso", preselected_muons_chreliso, &b_preselected_muons_chreliso);
   fChain->SetBranchAddress("preselected_muons.nureliso", preselected_muons_nureliso, &b_preselected_muons_nureliso);
   fChain->SetBranchAddress("preselected_muons.matchedJetdR", preselected_muons_matchedJetdR, &b_preselected_muons_matchedJetdR);
   fChain->SetBranchAddress("preselected_muons.jetPtRatio", preselected_muons_jetPtRatio, &b_preselected_muons_jetPtRatio);
   fChain->SetBranchAddress("preselected_muons.btagCSV", preselected_muons_btagCSV, &b_preselected_muons_btagCSV);
   fChain->SetBranchAddress("preselected_muons.sip3D", preselected_muons_sip3D, &b_preselected_muons_sip3D);
   fChain->SetBranchAddress("loose_leptons", &loose_leptons_, &b_loose_leptons_);
   fChain->SetBranchAddress("loose_leptons.obj.fCoordinates.fX", loose_leptons_obj_fCoordinates_fX, &b_loose_leptons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("loose_leptons.obj.fCoordinates.fY", loose_leptons_obj_fCoordinates_fY, &b_loose_leptons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("loose_leptons.obj.fCoordinates.fZ", loose_leptons_obj_fCoordinates_fZ, &b_loose_leptons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("loose_leptons.obj.fCoordinates.fT", loose_leptons_obj_fCoordinates_fT, &b_loose_leptons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("loose_leptons.id", loose_leptons_id, &b_loose_leptons_id);
   fChain->SetBranchAddress("loose_electrons", &loose_electrons_, &b_loose_electrons_);
   fChain->SetBranchAddress("loose_electrons.obj.fCoordinates.fX", loose_electrons_obj_fCoordinates_fX, &b_loose_electrons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("loose_electrons.obj.fCoordinates.fY", loose_electrons_obj_fCoordinates_fY, &b_loose_electrons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("loose_electrons.obj.fCoordinates.fZ", loose_electrons_obj_fCoordinates_fZ, &b_loose_electrons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("loose_electrons.obj.fCoordinates.fT", loose_electrons_obj_fCoordinates_fT, &b_loose_electrons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("loose_electrons.SCeta", loose_electrons_SCeta, &b_loose_electrons_SCeta);
   fChain->SetBranchAddress("loose_electrons.pdgID", loose_electrons_pdgID, &b_loose_electrons_pdgID);
   fChain->SetBranchAddress("loose_electrons.dxy", loose_electrons_dxy, &b_loose_electrons_dxy);
   fChain->SetBranchAddress("loose_electrons.dz", loose_electrons_dz, &b_loose_electrons_dz);
   fChain->SetBranchAddress("loose_electrons.charge", loose_electrons_charge, &b_loose_electrons_charge);
   fChain->SetBranchAddress("loose_electrons.isGsfCtfScPixChargeConsistent", loose_electrons_isGsfCtfScPixChargeConsistent, &b_loose_electrons_isGsfCtfScPixChargeConsistent);
   fChain->SetBranchAddress("loose_electrons.numMissingInnerHits", loose_electrons_numMissingInnerHits, &b_loose_electrons_numMissingInnerHits);
   fChain->SetBranchAddress("loose_electrons.passConversioVeto", loose_electrons_passConversioVeto, &b_loose_electrons_passConversioVeto);
   fChain->SetBranchAddress("loose_electrons.mvaID", loose_electrons_mvaID, &b_loose_electrons_mvaID);
   fChain->SetBranchAddress("loose_electrons.lepMVA", loose_electrons_lepMVA, &b_loose_electrons_lepMVA);
   fChain->SetBranchAddress("loose_electrons.chreliso", loose_electrons_chreliso, &b_loose_electrons_chreliso);
   fChain->SetBranchAddress("loose_electrons.nureliso", loose_electrons_nureliso, &b_loose_electrons_nureliso);
   fChain->SetBranchAddress("loose_electrons.matchedJetdR", loose_electrons_matchedJetdR, &b_loose_electrons_matchedJetdR);
   fChain->SetBranchAddress("loose_electrons.jetPtRatio", loose_electrons_jetPtRatio, &b_loose_electrons_jetPtRatio);
   fChain->SetBranchAddress("loose_electrons.btagCSV", loose_electrons_btagCSV, &b_loose_electrons_btagCSV);
   fChain->SetBranchAddress("loose_electrons.sip3D", loose_electrons_sip3D, &b_loose_electrons_sip3D);
   fChain->SetBranchAddress("loose_muons", &loose_muons_, &b_loose_muons_);
   fChain->SetBranchAddress("loose_muons.obj.fCoordinates.fX", loose_muons_obj_fCoordinates_fX, &b_loose_muons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("loose_muons.obj.fCoordinates.fY", loose_muons_obj_fCoordinates_fY, &b_loose_muons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("loose_muons.obj.fCoordinates.fZ", loose_muons_obj_fCoordinates_fZ, &b_loose_muons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("loose_muons.obj.fCoordinates.fT", loose_muons_obj_fCoordinates_fT, &b_loose_muons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("loose_muons.pdgID", loose_muons_pdgID, &b_loose_muons_pdgID);
   fChain->SetBranchAddress("loose_muons.dxy", loose_muons_dxy, &b_loose_muons_dxy);
   fChain->SetBranchAddress("loose_muons.dz", loose_muons_dz, &b_loose_muons_dz);
   fChain->SetBranchAddress("loose_muons.charge", loose_muons_charge, &b_loose_muons_charge);
   fChain->SetBranchAddress("loose_muons.chargeFlip", loose_muons_chargeFlip, &b_loose_muons_chargeFlip);
   fChain->SetBranchAddress("loose_muons.isPFMuon", loose_muons_isPFMuon, &b_loose_muons_isPFMuon);
   fChain->SetBranchAddress("loose_muons.isTrackerMuon", loose_muons_isTrackerMuon, &b_loose_muons_isTrackerMuon);
   fChain->SetBranchAddress("loose_muons.isGlobalMuon", loose_muons_isGlobalMuon, &b_loose_muons_isGlobalMuon);
   fChain->SetBranchAddress("loose_muons.lepMVA", loose_muons_lepMVA, &b_loose_muons_lepMVA);
   fChain->SetBranchAddress("loose_muons.chreliso", loose_muons_chreliso, &b_loose_muons_chreliso);
   fChain->SetBranchAddress("loose_muons.nureliso", loose_muons_nureliso, &b_loose_muons_nureliso);
   fChain->SetBranchAddress("loose_muons.matchedJetdR", loose_muons_matchedJetdR, &b_loose_muons_matchedJetdR);
   fChain->SetBranchAddress("loose_muons.jetPtRatio", loose_muons_jetPtRatio, &b_loose_muons_jetPtRatio);
   fChain->SetBranchAddress("loose_muons.btagCSV", loose_muons_btagCSV, &b_loose_muons_btagCSV);
   fChain->SetBranchAddress("loose_muons.sip3D", loose_muons_sip3D, &b_loose_muons_sip3D);
   fChain->SetBranchAddress("tight_leptons", &tight_leptons_, &b_tight_leptons_);
   fChain->SetBranchAddress("tight_leptons.obj.fCoordinates.fX", tight_leptons_obj_fCoordinates_fX, &b_tight_leptons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("tight_leptons.obj.fCoordinates.fY", tight_leptons_obj_fCoordinates_fY, &b_tight_leptons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("tight_leptons.obj.fCoordinates.fZ", tight_leptons_obj_fCoordinates_fZ, &b_tight_leptons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("tight_leptons.obj.fCoordinates.fT", tight_leptons_obj_fCoordinates_fT, &b_tight_leptons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("tight_leptons.id", tight_leptons_id, &b_tight_leptons_id);
   fChain->SetBranchAddress("tight_electrons", &tight_electrons_, &b_tight_electrons_);
   fChain->SetBranchAddress("tight_electrons.obj.fCoordinates.fX", tight_electrons_obj_fCoordinates_fX, &b_tight_electrons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("tight_electrons.obj.fCoordinates.fY", tight_electrons_obj_fCoordinates_fY, &b_tight_electrons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("tight_electrons.obj.fCoordinates.fZ", tight_electrons_obj_fCoordinates_fZ, &b_tight_electrons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("tight_electrons.obj.fCoordinates.fT", tight_electrons_obj_fCoordinates_fT, &b_tight_electrons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("tight_electrons.SCeta", tight_electrons_SCeta, &b_tight_electrons_SCeta);
   fChain->SetBranchAddress("tight_electrons.pdgID", tight_electrons_pdgID, &b_tight_electrons_pdgID);
   fChain->SetBranchAddress("tight_electrons.dxy", tight_electrons_dxy, &b_tight_electrons_dxy);
   fChain->SetBranchAddress("tight_electrons.dz", tight_electrons_dz, &b_tight_electrons_dz);
   fChain->SetBranchAddress("tight_electrons.charge", tight_electrons_charge, &b_tight_electrons_charge);
   fChain->SetBranchAddress("tight_electrons.isGsfCtfScPixChargeConsistent", tight_electrons_isGsfCtfScPixChargeConsistent, &b_tight_electrons_isGsfCtfScPixChargeConsistent);
   fChain->SetBranchAddress("tight_electrons.numMissingInnerHits", tight_electrons_numMissingInnerHits, &b_tight_electrons_numMissingInnerHits);
   fChain->SetBranchAddress("tight_electrons.passConversioVeto", tight_electrons_passConversioVeto, &b_tight_electrons_passConversioVeto);
   fChain->SetBranchAddress("tight_electrons.mvaID", tight_electrons_mvaID, &b_tight_electrons_mvaID);
   fChain->SetBranchAddress("tight_electrons.lepMVA", tight_electrons_lepMVA, &b_tight_electrons_lepMVA);
   fChain->SetBranchAddress("tight_electrons.chreliso", tight_electrons_chreliso, &b_tight_electrons_chreliso);
   fChain->SetBranchAddress("tight_electrons.nureliso", tight_electrons_nureliso, &b_tight_electrons_nureliso);
   fChain->SetBranchAddress("tight_electrons.matchedJetdR", tight_electrons_matchedJetdR, &b_tight_electrons_matchedJetdR);
   fChain->SetBranchAddress("tight_electrons.jetPtRatio", tight_electrons_jetPtRatio, &b_tight_electrons_jetPtRatio);
   fChain->SetBranchAddress("tight_electrons.btagCSV", tight_electrons_btagCSV, &b_tight_electrons_btagCSV);
   fChain->SetBranchAddress("tight_electrons.sip3D", tight_electrons_sip3D, &b_tight_electrons_sip3D);
   fChain->SetBranchAddress("tight_muons", &tight_muons_, &b_tight_muons_);
   fChain->SetBranchAddress("tight_muons.obj.fCoordinates.fX", tight_muons_obj_fCoordinates_fX, &b_tight_muons_obj_fCoordinates_fX);
   fChain->SetBranchAddress("tight_muons.obj.fCoordinates.fY", tight_muons_obj_fCoordinates_fY, &b_tight_muons_obj_fCoordinates_fY);
   fChain->SetBranchAddress("tight_muons.obj.fCoordinates.fZ", tight_muons_obj_fCoordinates_fZ, &b_tight_muons_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("tight_muons.obj.fCoordinates.fT", tight_muons_obj_fCoordinates_fT, &b_tight_muons_obj_fCoordinates_fT);
   fChain->SetBranchAddress("tight_muons.pdgID", tight_muons_pdgID, &b_tight_muons_pdgID);
   fChain->SetBranchAddress("tight_muons.dxy", tight_muons_dxy, &b_tight_muons_dxy);
   fChain->SetBranchAddress("tight_muons.dz", tight_muons_dz, &b_tight_muons_dz);
   fChain->SetBranchAddress("tight_muons.charge", tight_muons_charge, &b_tight_muons_charge);
   fChain->SetBranchAddress("tight_muons.chargeFlip", tight_muons_chargeFlip, &b_tight_muons_chargeFlip);
   fChain->SetBranchAddress("tight_muons.isPFMuon", tight_muons_isPFMuon, &b_tight_muons_isPFMuon);
   fChain->SetBranchAddress("tight_muons.isTrackerMuon", tight_muons_isTrackerMuon, &b_tight_muons_isTrackerMuon);
   fChain->SetBranchAddress("tight_muons.isGlobalMuon", tight_muons_isGlobalMuon, &b_tight_muons_isGlobalMuon);
   fChain->SetBranchAddress("tight_muons.lepMVA", tight_muons_lepMVA, &b_tight_muons_lepMVA);
   fChain->SetBranchAddress("tight_muons.chreliso", tight_muons_chreliso, &b_tight_muons_chreliso);
   fChain->SetBranchAddress("tight_muons.nureliso", tight_muons_nureliso, &b_tight_muons_nureliso);
   fChain->SetBranchAddress("tight_muons.matchedJetdR", tight_muons_matchedJetdR, &b_tight_muons_matchedJetdR);
   fChain->SetBranchAddress("tight_muons.jetPtRatio", tight_muons_jetPtRatio, &b_tight_muons_jetPtRatio);
   fChain->SetBranchAddress("tight_muons.btagCSV", tight_muons_btagCSV, &b_tight_muons_btagCSV);
   fChain->SetBranchAddress("tight_muons.sip3D", tight_muons_sip3D, &b_tight_muons_sip3D);
   fChain->SetBranchAddress("preselected_jets", &preselected_jets_, &b_preselected_jets_);
   fChain->SetBranchAddress("preselected_jets.obj.fCoordinates.fX", preselected_jets_obj_fCoordinates_fX, &b_preselected_jets_obj_fCoordinates_fX);
   fChain->SetBranchAddress("preselected_jets.obj.fCoordinates.fY", preselected_jets_obj_fCoordinates_fY, &b_preselected_jets_obj_fCoordinates_fY);
   fChain->SetBranchAddress("preselected_jets.obj.fCoordinates.fZ", preselected_jets_obj_fCoordinates_fZ, &b_preselected_jets_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("preselected_jets.obj.fCoordinates.fT", preselected_jets_obj_fCoordinates_fT, &b_preselected_jets_obj_fCoordinates_fT);
   fChain->SetBranchAddress("preselected_jets.charge", preselected_jets_charge, &b_preselected_jets_charge);
   fChain->SetBranchAddress("preselected_jets.pdgID", preselected_jets_pdgID, &b_preselected_jets_pdgID);
   fChain->SetBranchAddress("preselected_jets.csv", preselected_jets_csv, &b_preselected_jets_csv);
   fChain->SetBranchAddress("loose_bJets", &loose_bJets_, &b_loose_bJets_);
   fChain->SetBranchAddress("loose_bJets.obj.fCoordinates.fX", &loose_bJets_obj_fCoordinates_fX, &b_loose_bJets_obj_fCoordinates_fX);
   fChain->SetBranchAddress("loose_bJets.obj.fCoordinates.fY", &loose_bJets_obj_fCoordinates_fY, &b_loose_bJets_obj_fCoordinates_fY);
   fChain->SetBranchAddress("loose_bJets.obj.fCoordinates.fZ", &loose_bJets_obj_fCoordinates_fZ, &b_loose_bJets_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("loose_bJets.obj.fCoordinates.fT", &loose_bJets_obj_fCoordinates_fT, &b_loose_bJets_obj_fCoordinates_fT);
   fChain->SetBranchAddress("loose_bJets.charge", &loose_bJets_charge, &b_loose_bJets_charge);
   fChain->SetBranchAddress("loose_bJets.pdgID", &loose_bJets_pdgID, &b_loose_bJets_pdgID);
   fChain->SetBranchAddress("loose_bJets.csv", &loose_bJets_csv, &b_loose_bJets_csv);
   fChain->SetBranchAddress("met", &met_, &b_met_);
   fChain->SetBranchAddress("met.obj.fCoordinates.fX", met_obj_fCoordinates_fX, &b_met_obj_fCoordinates_fX);
   fChain->SetBranchAddress("met.obj.fCoordinates.fY", met_obj_fCoordinates_fY, &b_met_obj_fCoordinates_fY);
   fChain->SetBranchAddress("met.obj.fCoordinates.fZ", met_obj_fCoordinates_fZ, &b_met_obj_fCoordinates_fZ);
   fChain->SetBranchAddress("met.obj.fCoordinates.fT", met_obj_fCoordinates_fT, &b_met_obj_fCoordinates_fT);
   fChain->SetBranchAddress("met.pt_forSync", met_pt_forSync, &b_met_pt_forSync);
   fChain->SetBranchAddress("met.phi_forSync", met_phi_forSync, &b_met_phi_forSync);
   fChain->SetBranchAddress("numJets_fromHiggs_30", &numJets_fromHiggs_30, &b_numJets_fromHiggs_30);
   fChain->SetBranchAddress("numJets_fromHiggs", &numJets_fromHiggs, &b_numJets_fromHiggs);
   fChain->SetBranchAddress("AvgBtagDiscNonBtags", &AvgBtagDiscNonBtags, &b_AvgBtagDiscNonBtags);
   fChain->SetBranchAddress("AvgBtagDiscBtags", &AvgBtagDiscBtags, &b_AvgBtagDiscBtags);
   fChain->SetBranchAddress("NumHiggsLikeDijet15", &NumHiggsLikeDijet15, &b_NumHiggsLikeDijet15);
   fChain->SetBranchAddress("HiggsLikeDijetMass2", &HiggsLikeDijetMass2, &b_HiggsLikeDijetMass2);
   fChain->SetBranchAddress("HiggsLikeDijetMass", &HiggsLikeDijetMass, &b_HiggsLikeDijetMass);
   fChain->SetBranchAddress("GenHiggsDijetMass", &GenHiggsDijetMass, &b_GenHiggsDijetMass);
   fChain->SetBranchAddress("DeltaPhiMetLepLep", &DeltaPhiMetLepLep, &b_DeltaPhiMetLepLep);
   fChain->SetBranchAddress("DeltaRMetLepLep", &DeltaRMetLepLep, &b_DeltaRMetLepLep);
   fChain->SetBranchAddress("MTMetLepLep", &MTMetLepLep, &b_MTMetLepLep);
   fChain->SetBranchAddress("MassMetLepLep", &MassMetLepLep, &b_MassMetLepLep);
   fChain->SetBranchAddress("MaxDeltaPhiMetJet", &MaxDeltaPhiMetJet, &b_MaxDeltaPhiMetJet);
   fChain->SetBranchAddress("MinDeltaPhiMetJet", &MinDeltaPhiMetJet, &b_MinDeltaPhiMetJet);
//    fChain->SetBranchAddress("MaxDeltaPhiMetJet", &MaxDeltaPhiMetJet, &b_MaxDeltaPhiMetJet);
//    fChain->SetBranchAddress("MinDeltaPhiMetJet", &MinDeltaPhiMetJet, &b_MinDeltaPhiMetJet);
   fChain->SetBranchAddress("DeltaPhiMetLep2", &DeltaPhiMetLep2, &b_DeltaPhiMetLep2);
   fChain->SetBranchAddress("DeltaPhiMetLep1", &DeltaPhiMetLep1, &b_DeltaPhiMetLep1);
   fChain->SetBranchAddress("DeltaRJets_FromHiggs", &DeltaRJets_FromHiggs, &b_DeltaRJets_FromHiggs);
   fChain->SetBranchAddress("DeltaPhiJets_FromHiggs", &DeltaPhiJets_FromHiggs, &b_DeltaPhiJets_FromHiggs);
   fChain->SetBranchAddress("WLikeDijetMass81", &WLikeDijetMass81, &b_WLikeDijetMass81);
   fChain->SetBranchAddress("SumNonTaggedJetMass", &SumNonTaggedJetMass, &b_SumNonTaggedJetMass);
   fChain->SetBranchAddress("SumJetMass", &SumJetMass, &b_SumJetMass);
   fChain->SetBranchAddress("SumJetPt", &SumJetPt, &b_SumJetPt);
   fChain->SetBranchAddress("SumPt", &SumPt, &b_SumPt);
   fChain->SetBranchAddress("MinDrJets", &MinDrJets, &b_MinDrJets);
   fChain->SetBranchAddress("MHT", &MHT, &b_MHT);
   fChain->SetBranchAddress("DeltaPhiLepLep", &DeltaPhiLepLep, &b_DeltaPhiLepLep);
   fChain->SetBranchAddress("DeltaRLepLep", &DeltaRLepLep, &b_DeltaRLepLep);
   fChain->SetBranchAddress("Zmass", &Zmass, &b_Zmass);
   fChain->SetBranchAddress("MassLepLep", &MassLepLep, &b_MassLepLep);
   fChain->SetBranchAddress("myFinalBDT_OS_2012", &myFinalBDT_OS_2012, &b_myFinalBDT_OS_2012);
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
