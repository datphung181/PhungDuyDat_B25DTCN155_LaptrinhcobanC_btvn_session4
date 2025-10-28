#include <stdio.h>

int main() {
    int old1, new1, wat;

    printf("Nhap chi so dien cu: ");
    scanf("%d", &old1);

    printf("Nhap chi so dien moi: ");
    scanf("%d", &new1);

    wat = old1 - new1;

    if (wat < 0) {
        printf("Chi so nhap KHONG hop le!\n");
        return 0;
    }
    if (wat < 50) {
        tien = wat * 10000;
	}
    else if (wat < 100 && wat >=50){
        tien = 50 * 10000 + (wat - 50) * 15000;
	}
    else if (wat < 150 && wat >= 100){
        tien = 50 * 10000 + 50 * 15000 + (wat - 100) * 20000;
	}
    else if (wat < 200 && wat >= 150){
        tien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (wat - 150) * 25000;
	}
    else {
        tien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (wat - 200) * 30000;
	{

    printf("so dien tieu thu: %.0lf kWh\n", wat);
    printf("TIEN DIEN LA... %.0lf VND\n", tien);

    return 0;
}

