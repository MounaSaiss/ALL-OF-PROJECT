#include <stdio.h>
int main(){
    float T[5];
    int i ; 
    int Max;
    for (i=0;i<5;i++){
        printf("Veuillez saisir element %d :",i+1);
        scanf("%f",&T[i]);
    }
    Max=T[0];
    for (i=1;i<5;i++){
        if (Max<T[i])
        Max = T[i];
    }
    
     printf("Max = %d",Max);
    
      
    return 0;
}