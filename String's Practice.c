#include<stdio.h>
#include<string.h>
/*
INPUT
Hey ! I got 57 marks ! What's your score , dude ?
Hey ! I got 57 marks ! What's your score , dude ?
a
*/
/*
"  %[^\n]%*c   " scans till it encounter new line .
*/
char c1[50];
int main() {
    char a[50];
    
    scanf("%[^\n]%*c",a);
    printf("Entered String : %s\n",a);
    
    int count = 0,i = 0;
    printf("Individual characters :  ");
    //String LENGTH
    while(a[i]!=0)
    {
        count++;
        printf("%c  ",a[i]);   // String TOKENS
        i++;
    }
    printf("\n");
    printf("String Length :  %d\n",count);
    //String REVERSAL
    printf("Reversed String :  ");
    i=0;
    while (i<=count)
    {
        printf("%c",a[count-i]);
        i++;
    }
    printf("\n");
    //Number of WORDS
    i=1;
    int words=1;
    while(a[i]!=0)
    {
        if(a[i]==32)
        if((a[i+1]>=97 && a[i+1]<=122) || (a[i+1]>=65 && a[i+1]<=90 ))
        words++;
        i++;
    }
    printf("Number of Words : %d\n",words);
	//String COMPARISION
	char b[50];
	i=0;
	int flag=1;
	scanf("%[^\n]%*c",b);
	printf("Second String : %s\n",b);
	while(a[i]!=0)
	{
	    if(a[i]!=b[i])
	    {
	        flag=0;
	        break;
	    }
	    if(flag==0)
	    break;
	    i++;
	}
	if(flag==1)
	printf("Similiarity: Strings are same.\n");
	else
	printf("Similiarity: Strings are not same.\n");
	//COUNTING ALPHABETS AND DIGITS AND SPECIAL CHARACTERS
    i=0;
	int small=0,spaces=0,caps=0,digits=0,specialChar=0;
	while(a[i]!=0)
	{
	    if(a[i]>=97 && a[i]<=122)
	    small++;
	    else if(a[i]>=65 && a[i]<=90)
	    caps++;
	    else if(a[i]>='0' && a[i]<='9')
	    digits++;
	    else 
	    specialChar++;
	    if(a[i]==32)
	    spaces++;
	    i++;
	}
    printf("Alphabets: %d --> %d(small) & %d(capital),\nDigits: %d,\nSpecial Characters: %d\n",small+caps,small,caps,digits,specialChar-spaces);
    //Frequency of characters
    i=0;
    count=0;
    char test;
    printf("Charachter whose freq. to be tested: ");
    scanf("%c",&test);
    printf("%c\n",test);
    while(a[i]!=0)
    {
        if(a[i]==test)
        count++;
        i++;
    }
    printf("Frequency of \'%c\' in \" %s \" is: %d\n",test,a,count);
    //Lowercase to Uppercase and vice-versa
    char c[50];
    for(i=0;a[i]!=0;i++)
	{
	    c[i]=a[i];
	}
	c[i]=0;
	i=0;
    while(c[i]!=0)
    {
        if(c[i]>=65 && c[i]<=90)
        {
            c[i]+=32;
        }
        else if(c[i]>=97 && c[i]<=122)
        {
            c[i]-=32;
        }
        else
        flag=0;
        
        i++;
    }
    printf("Modified String: %s\n",c);
	//Copying
	for(i=0;a[i]!=0;i++)
	c1[i]=a[i];
	c1[i]=0;
	for(i=0;b[i]!=0;i++)
	c1[i]=b[i];
	c1[i]=0;
	printf("String \'%s\' copied to \'%s\'\nString: a = \'%s\'\n",b,a,c1);
	//Smallest and Largest words
	int j=0,k=0,max=1,index=0,index2=0,min=20;
	char c2[20][20];
	for(i=0;a[i]!=0;i++)
	{
	    if(a[i]!=32)
	    {
	        c2[j][k]=a[i];
	        k++;
	    }
	    else
	    {
	        c2[j][k]=0;
	        if(k>max)
	        {
	            max=k;
	            index=j;
	        }
	        if(k<min)
	        {
	            min=k;
	            index2=j;
	        }
	        k=0;
	        j++;
	    }
	        
	}
	c2[j][k]=0;
	printf("Largest word: %s \nSmallest word: %s \n",c2[index],c2[index2]);
	return 0;
}