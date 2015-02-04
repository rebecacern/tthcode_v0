#include <iostream>
#include "TSystem.h"
#include <time.h>

void chain(int nsel = 0, int mode = 0, bool silent = false){
 
   //clock_t start_t, end_t, total_t;
   //start_t = clock();
  
  //mode = 0 emu, mode = 1 mumu, mode =2 ee
  gROOT->LoadMacro("ttHanalysis.C");
  ttHanalysis an(0);
  an.myLoop(nsel,mode,silent);
  
   // end_t = clock();
   
 // total_t = (double)(end_t - start_t)/CLOCKS_PER_SECOND;
   //printf("Total time taken by CPU: %f\n", total_t  );
   //printf("Exiting of the program...\n");
  
}
