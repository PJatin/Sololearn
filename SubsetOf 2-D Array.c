/*
Sample Input 0
3
3
5 15 3 
2
57 96 
4
3 15 8 23 
Sample Output 0
3 
3 5 
3 5 15 
3 15 
5 
5 15 
15 

57 
57 96 
96 

3 
3 8 
3 8 15 
3 8 15 23 
3 8 23 
3 15 
3 15 23 
3 23 
8 
8 15 
8 15 23 
8 23 
15 
15 23 
23
*/
#include <stdio.h>

int main() 
{
    int testCases,i,j,k,n;
    int temp;
    
    for(i=0;i<testCases;i++)
    {
        scanf("%d",&n);
        
        int *a=(int *)malloc(n*sizeof(int ));
        
        for(i=0;i<n;i++)
        {
            scanf("%d",(a+i));
        }
    
        for(i=0;i<n;i++)
        {
            for(j=i;j<=n;j++)
            {
                if((a+i)>(a+j))
                {
                    temp=*(a+i);
                    *(a+i)=*(a+j);
                    *(a+j)=temp;
                }
            }
        }
    
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                for(k=i;k<=j;k++)
                {
                    printf("%d ",*(a+k));
                }printf("\n");
            }
        }
    }
	return 0;
}