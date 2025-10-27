#include<stdio.h>

int main(){
	int wat;
	printf("nhap so dien tieu thu thang vua qua:");
	scanf("%d",&wat);
	if(wat>=0 && wat<50){
		printf("thang %d co gia dien la: 10000vnd/kWh");
	} else if (wat>=50 && wat<100){
		printf("thang %d co gia dien la: 15000vnd/kWh");
	} else if (wat>=100 && wat<150){
		printf("thang %d co gia dien la: 20000vnd/kWh");
	} else if (wat>=150 && wat<200){
		printf("thang %d co gia dien la: 25000vnd/kWh");
	} else{
		printf("thang %d co gia dien la: 30000vnd/kWh");
	}
	return 0;
}
