#include<stdio.h>
 
int main (){
	int a,b,c;
	printf("nhap 3 canh cua tam giac:");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a){
		printf("La 3 canh cua mot tam giac");
	} else{
		printf("Khong phai la 3 canh cua mot tam giac");
	}
	
	return 0;
}
