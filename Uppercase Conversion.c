/*
jatin IS a GooD boy 
*/
#include <stdio.h>
#include<string.h>
int main() {
    int i;
    char a[20];
    
    scanf("%[^\n]%*c",a);
    
    for(i=0;i<=strlen(a);i++)
    {
        if(a[i]<='z' && a[i]>='a')
        a[i]-=32;
        else if(a[i]>='A' && a[i]<='Z')
        a[i]+=32;
    }
    
    puts(a);

    return 0;
}