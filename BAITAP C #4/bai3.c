#include<stdio.h>
 
int main (){
	int a;
	printf("nhap so a:");
	scanf("%d", &a);
	if(a%3==0 && a%5==0){
		printf("%d la so chia het cho 3 va 5",a);
	} else if(a%5==0){
		printf("%d la so chia het cho 5",a);
	} else if(a%3==0){
		printf("%d la so chia het cho 3",a);
	} else{
		printf("%d la so khong chia het cho 3 va 5",a);
	}
	return 0;
}
