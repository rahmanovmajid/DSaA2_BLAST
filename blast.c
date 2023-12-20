#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    
    char match[] = "01111000000110111100000011";
    int nBestPos = 0, nBestHeight = 0 , nCandPos=0, nCandHeight=0;

    for (int i = 0; i < strlen(match); i++){
        if(match[i] == '0'){
            if(nCandHeight != 0){
                nCandHeight--;
            }else{
                nCandPos = i+1;
            }
        }else{
            nCandHeight++;
        }
        if(nCandHeight > nBestHeight){
            nBestPos = nCandPos;
            nBestHeight = nCandHeight;
        }
    }


    printf("Best position is: %d\t\tBest Height is: %d\n", nBestPos,nBestHeight);

    return 0;
}
   