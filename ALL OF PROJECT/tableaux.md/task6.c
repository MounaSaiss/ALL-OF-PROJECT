#include<stdio.h>
int main(){
    float T[10];
    int i;
    float Min;
      for (i=0;i<10;i++){
        printf ("veuillez saisir l'element %d :",i+1);
        scanf("%f",&T[i]);
      }
    Min=T[0];
        for (i=1;i<10;i++){
            if (Min>T[i])
            Min=T[i];
            
        }
    printf ("Min = %f",Min);    
    
    return 0;
}