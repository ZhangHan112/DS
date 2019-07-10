#include "HC.h"
#include "Brute_Force.h"

int main(int argc,char *argv[]){

    int Gen = atoi(argv[1]);
    int Dimension = atoi(argv[2]);
    int Run = atoi(argv[3]);
    
    hc Hc(Gen,Dimension,Run);
    Hc.hill_climbing();

    brute_force BF;
    BF.run();
    
    return 0;

}

