#include<stdio.h>
int main(int argc,char[] *argv[]){
	if(argc!=2){
		printf("U r supposed to enter only two numbers.\n");
		return 0;
		}
	else{
		int sum = atoi(arg[0])+atoi(arg[1]);
		return sum;	
		}
}