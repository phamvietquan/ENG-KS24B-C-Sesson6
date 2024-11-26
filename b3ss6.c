#include <stdio.h> 


 int main(){
 	int a=2908;
 	int b;
 	do{
 			printf("Moi ban nhap vao mat khau: ");
 		scanf("%d", &b);
		 if(a==b){
		 printf("Chinh xac\n");
		 }else{
		 	printf("sai roi\n");
		 }
 	}while(a!=b);
 		
 		
 	
 	return 0;
}
