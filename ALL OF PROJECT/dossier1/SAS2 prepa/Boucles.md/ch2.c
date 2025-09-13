#include<stdio.h>
int main (){
    int i,j,p;
    printf("x*y |");
    for (i=1;i<=10;i++){
        printf("  %i",i);
    }
    for (j=1;j<=10;j++){
        p=i*j;
        printf(" %d",p);
    }
    return 0;
}