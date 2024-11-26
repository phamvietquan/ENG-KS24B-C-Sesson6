#include<stdio.h>
int main(){
    int n, a=0, b=1, c;
    printf("Nhap vao 1 so nguyen bat ky: ");
    scanf("%d", &n);
    if(n==1){
        printf("1\n");
    }else if(n==2){
        printf("1\n1\n");
    }else{
        printf("1\n");
        for(int i=1; i<=(n-1);i++){
            c=a+b;
            printf("%d\n", c);
            a=b;
            b=c;
        }
    }
    return 0;
}
