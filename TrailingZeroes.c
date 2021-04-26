/*
Sample Input 0
3
2
5
20
Sample Output 0
0
1
4
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int testCases,flag=1,i;
    int n,x;
    
    scanf("%d",&testCases);
    
    for(i=0;i<=5;i++)
    printf("%lf\n",pow(5,i));
    while(testCases>0)
    {
        scanf("%d",&n);
        
        for(i=1;i<=15;i++)
        {
            if((n/pow(5,i))!=0)
            {
                x+=(n/pow(5,i));
                //printf("%d\n",pow(5,i));
            }
            else
            flag=0;
            
            if(flag==0)
            break;
        }
        
        //printf("%d\n",x);
        
        testCases--;
    }
    return 0;
}
