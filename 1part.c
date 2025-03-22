#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001");
    float array [9] = {-1.6, 0, 3.4, 5.4, 0, -8.2, 1.2, 0, 2.2};
    int i; 

    for(i = 0; i < 9; i +=1){
        if(array[i] == 0){
            array [i] = ( array [i - 1] + array [i + 1] ) / 2;
        }
    }
    
    puts("Масив без нулів:");
    for(i = 0; i < 9; i +=1) {
        printf ("%.2f\n", array[i]);
    }

    return 0;
}