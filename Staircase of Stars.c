#include <stdio.h>
/*
INPUT THE BELOW 
4
2
1
5
10
*/

int main() {
    int i,j,n,m,k;
    scanf("%d",&m);
    for(k=0;k<m;k++)
    {
        
        scanf("%d",&n);
        printf("Case #%d:\nMethod 1\n",k+1);
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j>=n-1-i)
                printf("*");
                else
                printf(" ");
            }
            printf("\n");
        }
	    
	    printf("Method 2\n");
	    
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            if((i+j)<n-1)
	            printf(" ");
	            else
	            printf("*");
	        }printf("\n");
	    }printf("\n");
    }
    return 0;
}