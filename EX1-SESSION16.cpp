#include<stdio.h>
int main(){
	int a=21;
    int *aPTR=&a;
    //c1
    printf("gia tri cua bien da duoc khai bao la:%d\n",a);
    printf("dia chi cua bien da duoc kahi bao la:%d\n",&a);
    //c2
    printf("gia tri cua bien da duoc khai bao la:%d\n",*aPTR);
    printf("dia chi cua bienn da duoc khai bao la:%d",&aPTR);
    return 0;
    }
