#include<stdio.h>
void doigiatri(int*number1,int*number2){
int temp=*number1;
*number1=*number2;
*number2=temp;
}
int main(){
	int a=10;
	int b=20;
	printf("gia tri cua bien a truoc khi doi cho la:%d\n gia tri cua bien b truoc khi doi cho la:%d\n",a,b);
	doigiatri(&a,&b);
	printf("gia tri cua bien a sau khi doi cho la :%d\n",a);
	printf("gia tri cua bien b sau khi doi cho la:%d",b);
	return 0;
	}
	
