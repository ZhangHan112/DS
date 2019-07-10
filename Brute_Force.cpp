#include "Brute_Force.h"

brute_force::brute_force(){
    startbits.reset();
    goalbits.set();
    flag=1;
    max=0;
}

void brute_force::run(){
    
    while(true){
        for(int i=0;i<dimension;i++)
            if(startbits[i]!=goalbits[i]){
                flag = 0;
                break;
            }
            else flag = 1;
        if(flag==1) break;

        //addition
        for(int i=0;i<dimension;i++){
            if(startbits[i])
                startbits[i]=0;
            else{
                startbits[i]=1;
                break;
            }
                    
        }

        //fitness
        int temp=0;
        for(int i=0;i<dimension;i++){
            if(startbits[i]==1) 
                temp++;
        }
        if(max<temp) {
            max = temp;
            cout << max << endl;
        }

        //determination
                
            
    }  
    cout << max << endl;
       
    //end = clock();
    //time = (double)(end - begin)/CLOCKS_PER_SEC;
    //cout << "time: " << time << " seconds ! " << endl;
}
