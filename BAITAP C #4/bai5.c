#include <stdio.h>
int main (){
	int a , b , c ;
	printf("Nhap so a :");
	scanf("%d" , &a) ;
	printf("Nhap so b :");
	scanf("%d" , &b) ;
	printf("Nhap so c :");
	scanf("%d" , &c) ;
	if(b < a && a < c || a < b && a > c){
		printf("So thu 1 nam giua khoang so thu 2 va so thu 3") ;
	}else {
		printf("So thu 1 khong nam giua khoang so thu 2 va so thu 3") ;
	}
	return 0 ;
}
