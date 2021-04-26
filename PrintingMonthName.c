#include <stdio.h>

struct month{
  int mm,dd;
}d1,d2;

char months[12][12] = { "January" , "February" , "March","April","May","June","July","August","September","October","November","December" };
    
int main() {
    
    int a,b;
    //printf("%s\n",months[2]);
    
    scanf("%d %d",&a,&b);
    
    (d1.dd)=(a%100);
    (d1.mm)=(a/100);
    (d2.dd)=(b%100);
    (d2.mm)=(b/100);
    
    printf("%s\n",months[d1.mm-1]);
    printf("%s\n",months[d2.mm-1]);
    
	return 0;
}