#include <iostream>
#include "TSystem.h"

void chain(int nsel = 0, int mode = 0, bool silent = false){
gROOT->LoadMacro("ttHanalysis.C");

ttHanalysis an(0);
an.Loop();

}
