#include <stdio.h>
#include<stdlib.h>
/*
SAMPLE INPUT:
6
6 8 4 -5 7 9
15
OUTPUT:
0 5
*/
int main() {
    
    int n,sum,i,j;
    
    scanf("%d",&n);
    
    int *a = (int *)malloc( n * sizeof(int ));
    
    for(i=0;i<n;i++)
    scanf("%d",a+i);
	
	scanf("%d",&sum);
	
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if((a[i]+a[j])==sum)
	        {
	            printf("%d %d",i+1,j+1);
	            return 0;
	        }
	        
	    }
	}
	
	return 0;
}