#include <stdio.h>

int main(){
	int a;
	printf("Moi ban nhap vao so nguyen thu nhat ");
	scanf("%d", &a);
	int b;
	printf("Moi ban nhap vao so nguyen thu hai ");
	scanf("%d", &b);
	int c;
	printf("Moi ban nhap vao so nguyen thu ba ");
	scanf("%d", &c);
	int d;
	printf("Moi ban nhap vao so nguyen thu tu ");
	scanf("%d", &d);
	int e;
	printf("Moi ban nhap vao so nguyen thu nam ");
	scanf("%d", &e);
	int count1=0;
	int count2=0;
	if(a%2==0){
		count1++;
	}else{
		count2++;
	}
	if(b%2==0){
		count1++;
	}else{
		count2++;
	}
	if(c%2==0){
		count1++;
	}else{
		count2++;
	}
	if(d%2==0){
		count1++;
	}else{
		count2++;
	}
	if(e%2==0){
		count1++;
	}else{
		count2++;
	}
	printf("So chan la %d So le la %d",count1, count2);
	return 0;
}
