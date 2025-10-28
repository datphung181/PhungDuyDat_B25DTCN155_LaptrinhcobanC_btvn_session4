#include<stdio.h>

int main(){
	int month;
	printf("nhap thang can kiem tra:");
	scanf("%d",&month);
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("%d la thang co 31 ngay",month);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("%d la thang co 30 ngay",month);
			break;
		case 2:
			printf("%d la thang co 28 hoac 29 ngay",month);
		default:
			printf("%d la thang KHONG hop le",month);
			break;
	}
	return 0;
}

