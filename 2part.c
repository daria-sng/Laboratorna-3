#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001");
    float array [12] = {-1.6, 0, 3.4, 5.4, 0, -8.2, 2.2, 0, -3.8, 1.2, 0, 1.1};

    int i; 
    int first = -1;
    int second = -1;

    for(i = 0; i < 12; i +=1){
        if(array[i] == 0){
            if(first == -1){
                first = i;
            }
            else{
                second = i;
            }
        }
    }

    if(first != -1){
        array[first] = array[first+1];
    }

    if(second != -1){
        array[second] = array[second-1];
    }
    
    puts("Масив без нулів:");
    for(i = 0; i < 12; i +=1) {
        printf (" %.2f\n", array[i]);
    }
    return 0;
}