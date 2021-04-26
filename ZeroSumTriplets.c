/*
5
0 -1 2 -3 1
*/

#include <stdio.h>

int main() {
    int a[20],i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==0)
                {
                    printf("%d, %d, %d\n",a[i],a[j],a[k]);
                }
            }
        }
    }
	return 0;
}