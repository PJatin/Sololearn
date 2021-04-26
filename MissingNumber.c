#include <stdio.h>
/*
Sample Input 0
3
8
1 2 7 9 5 6 3 8 
7
3 5 8 1 4 7 2 
10
8 11 10 2 7 4 3 5 1 6 
Sample Output 0
4
6
9
*/
int main() {
    int sum=0,i=0,x,n,testCases;
    
    scanf("%d",&testCases);
    
    while(testCases>0)
    {
        scanf("%d",&n);
        
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            
            sum+=(i-x+1);
        }
        printf("Missing number : %d \n",(sum+n+1));
        testCases--;
    }
	return 0;
}