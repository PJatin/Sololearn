/*or each integer 

in the interval 





(given as input) :
If 





, then print the English representation of it in lowercase. That is "one" for 

, "two" for 

, and so on.
Else if 



and it is an even number, then print "even".
Else if 



and it is an odd number, then print "odd".
Input Format
The first line contains an integer, 

. 
The seond line contains an integer, 

. 
*/
#include<stdio.h>

int main()
{
    int a,b,i;

    scanf("%d %d",&i,&b);

    for(a=i;a<=b;a++)
    {
        if(a>=1 && a<=9)
        {
           if(a==1)
           {
               printf("one\n");
           }
           
           else if(a==2)
           {
               printf("two\n");
           }
           else if(a==3)
           {
               printf("three\n");
           }
           else if(a==4)
           {
               printf("four\n");
           }
           else if(a==5)
           {
               printf("five\n");
           }
           else if(a==6)
           {
               printf("six\n");
           }
           else if (a==7)
           {
               printf("seven\n");
           }
           else if(a==8)
           {
               printf("eight\n");
           }
           else
           {
               printf("nine\n");
           }
        }
        
        if(a>9)
        {
            if(a%2==0)
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
        }
    }
    return 0;
}