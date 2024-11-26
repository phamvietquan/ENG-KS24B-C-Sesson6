#include <stdio.h>

int main() {
    
	int n, count=0;
	printf("Moi ban nhap vao so nguyen bat ky");
	scanf("%d",&n);
	
    if (n < 2) {
        printf("So nho hon 2 khong phai la so nguyen to");
    }
    for(int i = n; i>= 1; i--) {
        if (n % i == 0) {
        	count ++;   
        }
    } 
    if(count==2){
    	printf("%d la so nguyen to", n);
	}else{
        printf("%d Khong phai so nguyen to", n);	
		}

   
    return 0;
}


