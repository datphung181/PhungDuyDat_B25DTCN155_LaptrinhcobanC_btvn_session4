#include<stdio.h>

int main(){
	int a,b,c,temp;
	printf("nhap 3 so bat ki:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		temp = a;
		a = b;
		b = temp;
	}
	if(a>c){
		temp = a;
		a = c;
		c = temp;
	}
	if(b>c){
		temp = b;
		b = c;
		b = temp;
	}
	
	printf("day so sau sap xep: %d %d %d", a,b,c);
	
	return 0;
}
