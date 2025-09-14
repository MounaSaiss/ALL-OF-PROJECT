#include<stdio.h>
int main (){
    char V[6];
    int i ;

   V[0]='A';
   V[1]='E';
   V[2]='Y';
   V[3]='I';
   V[4]='O';
   V[5]='U';
   
   printf ("les voyelles sont :");
   for (i=0;i<6;i++){
     printf("%c,",V[i]);
   }

    return 0;
}