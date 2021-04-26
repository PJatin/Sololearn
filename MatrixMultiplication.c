#include <stdio.h>
#include<stdlib.h>
/*
Sample Input 0
2
2 2
1 2 
3 -1 
2 3
1 -2 3 
2 3 -1 
2 3
27 29 53 
-28 49 -24 
3 4
23 52 -38 72 
-64 15 -59 -10 
-75 43 10 25 
Sample Output 0
5 4 1 
1 -9 10 
-5210 4118 -2207 2979 
-1980 -1753 -2067 -3106 
*/
int main() {
    
    int i,j,ip,n1,m1,n2,m2,testCases,k,sum;
    
    scanf("%d",&testCases);
    
    for(ip=0;ip<testCases;ip++)
    {
        scanf("%d %d",&n1,&m1);
        int *a = (int *)malloc(n1 * m1 * sizeof(int));
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m1;j++)
            {
                scanf("%d",(a+(i*m1)+j));
            }
        }
        
        scanf("%d %d",&n2,&m2);
        int *b = (int *)malloc(n2 * m2 * sizeof(int));
        for(i=0;i<n2;i++)
        {
            for(j=0;j<m2;j++)
            {
                scanf("%d",(b+(i*m2)+j));
            }
        }
        
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m2;j++)
            {
                sum=0;
                for(k=0;k<n2;k++)
                {
                    sum+=((*(a+(i*m1)+k))*(*(b+(k*m2)+j)));
                }printf("%d\t",sum);
            }printf("\n");
        }
    }
	return 0;
}