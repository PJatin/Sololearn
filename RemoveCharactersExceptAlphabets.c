#include <stdio.h>
/*
INPUT :
What's your name ?
OUTPUT :
Whats your name
*/
int main() {
    
    char a[50];
    int i;
    
    scanf("%[^\n]%*c",a);
    
    for(i=0;a[i]!=0;i++)
    {
        if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z')||(a[i]==32))
        printf("%c",a[i]);
    }
    
	return 0;
}