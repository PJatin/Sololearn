#include <stdio.h>
#include<stdlib.h>
/*
5
244
P.Jatin
2000000
2 July 1999
260
Rupa
2000000
28 June 1999
219
BHEl
2000000
25 July 4999
214
Pandu
2000001
23 January 1998
222
MandhuLal
20623
25 August 1969

*/
struct EmployeeDetails{
    int empnum;
    char empname[50];
    long int empsal;
    struct {
        int date;
        char month[12];
        int year;
    }dob;
}emp;

int main() {
    
    int i,n;
    
    scanf("%d",&n);
    
    struct EmployeeDetails *emp = (struct EmployeeDetails *)malloc(sizeof(struct EmployeeDetails) * n); 
    
    for(i=0;i<n;i++){
        
        scanf("%d",&(emp+i)->empnum);
        scanf("%s",(emp+i)->empname);
        scanf("%ld",&(emp+i)->empsal);
        scanf("%d",&(emp+i)->dob.date);
        scanf("%s",(emp+i)->dob.month);
        scanf("%d",&(emp+i)->dob.year);
    }
    
    for(i=0;i<n;i++){
   
    printf("Employee Number: %d\n",(emp+i)->empnum);
    printf("Employee Name: %s\n",(emp+i)->empname);
    printf("Employee Salary: %ld\n",(emp+i)->empsal);
    printf("Employee DOB: %d %s %d\n",(emp+i)->dob.date,(emp+i)->dob.month,(emp+i)->dob.year);
   
    }
    
    
    /*
    scanf("%d",&emp->empnum);
    printf("Employee Number: %d\n",emp->empnum);
    scanf("%s",emp->empname);
    printf("Employee Name: %s\n",emp->empname);
    scanf("%ld",&emp->empsal);
    printf("Employee Salary: %ld\n",emp->empsal);
    scanf("%d",&emp->dob.date);
    scanf("%s",emp->dob.month);
    scanf("%d",&emp->dob.year);
    printf("Employee DOB: %d %s %d\n",emp->dob.date,emp->dob.month,emp->dob.year);
    
    */
    
	return 0;
}