#include<stdio.h>
void TabMultuplication(int a){
    int i ;
    for (i=0;i<=10;i++){
        printf ("%d * %d = %d \n",a,i,a*i);
    }
}



int main (){
    int N;
    printf("Veuillez sasir un element :");
    scanf("%d",&N);
    TabMultuplication(N);
}
    