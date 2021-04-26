#include<stdio.h>
#include<stdlib.h>
/*
INPUT 0:
2 3
1 2 3
4 5 6
OUTPUT 0:
6
scanf("%d",(a + i*cols + j));
*/
int main(){
    
    int i,j,max=0,rows,cols;
    
    rows=rand()%10;
    cols=rand()%10;
    
    int *a = (int *) malloc (rows * cols * sizeof(int ));
    
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            (*(a + i*cols + j))=((rand())%400);
            printf("%d,",(*(a + i*cols + j)));
        }printf("\n");
    }
    
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if((*(a + i*cols + j))>max)
            {
                max=(*(a + i*cols +j));
            }
        }
    }
    printf("\n%d\n",max);
    return 0;
}