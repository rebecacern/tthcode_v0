#include <iostream>
#include "TSystem.h"

void chain(int nsel = 0, int mode = 1, bool silent = false){
 
  //mode = 0 emu, mode = 1 mumu, mode =2 ee
  gROOT->LoadMacro("ttHanalysis.C");
  ttHanalysis an(0);
  an.myLoop(nsel,mode,silent);
}
