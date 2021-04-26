#include <stdio.h>
/*
Sample Input 0
5
10
15
7
1
120
Sample Output 0
1010
1111
111
1
1111000
*/
long int y[30];
int main() {
    
    long int i,j,k;
    long int n,x;
    int testCases;
    scanf("%d",&testCases);
    for(k=0;k<testCases;k++)
    {
        scanf("%ld",&n);
        
    for(i=0;n>=0;i++)
    {
        x = n / 2;
        y[i] = n % 2;
        n=x;
    }
    
    j=i-1;
        for( ; j>=0 ; j--)
        {
            printf("%ld",y[j]);
        }printf("\n");
    }
	return 0;
}