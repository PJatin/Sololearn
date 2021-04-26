#include <stdio.h>
#include<stdlib.h>
/*
INPUT
5
*/
int main() {
    int i,j,n;
    int sumr=0,sumc=0;
    
    scanf("%d",&n);
    int *a = (int *)malloc(n*sizeof(int )*n);
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            (*(a+i*n+j))=(rand()%10);
            printf("%d ",*(a+i*n+j));
        }printf("\n");
    }
    
    for(i=0;i<n;i++){
        sumr=0;
        sumc=0;
        for(j=0;j<n;j++){
            sumr+=(*(a+i*n+j));
            sumc+=(*(a+j*n+i));
        }
        printf("Row%d = %d\t",i+1,sumr);
        printf("Col%d = %d\n",i+1,sumc);
    }return 0;
}