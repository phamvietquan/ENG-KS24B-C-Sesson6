#include <stdio.h>

int main(){
	int a, b, c, d, e, sum;
	printf("Moi ban nhap vao 5 so nguyen bat ky ");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	if(a%2!=0){
		sum+=a;
	}if(b%2!=0){
		sum+=b;
	}if(c%2!=0){
		sum+=c;
	}if(d%2!=0){
		sum+=d;
	}if(e%2!=0){
		sum+=e;
	}
	printf(" tong cac so le la: %d", sum);
}
