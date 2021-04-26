#include <stdio.h>
#include<stdlib.h>
/*

2
Mangilal 22 99.993423
Jatin 44 20.02884

*/
struct Class{
    char Name[20];
    int RollNo;
    float Marks;
};

//struct Class S[2];

int main() {
    
    int i=0,students;
    struct Class *ptr;
    
    scanf("%d",&students);
    printf("Number of students : %d\n\n",students);
    
    ptr=(struct Class*)malloc(students * sizeof(struct Class));
    
    for(i=0;i<students;i++)
    {
        scanf("%s %d %f",(ptr+i)->Name,&(ptr+i)->RollNo,&(ptr+i)->Marks);
    }
    
    for(i=0;i<students;i++)
    {
        printf("Student %d:\n",i+1);
        printf("Name:%s  RollNo:%d  Marks:%f\n\n",(ptr+i)->Name,(ptr+i)->RollNo,(ptr+i)->Marks);
    }

	return 0;
}