#include <stdio.h>
#include <string.h>

union ogrenci {
	char isim [20];
	int no;
	float ort;
	
};

typedef union {
	
	char isim[20];
	int yas;
	
}ogretmen;



int main () {
	
	printf("boyut: %ld byte \n",sizeof(union ogrenci));
	
	union ogrenci o;
	
	strcpy(o.isim,"ali");
	printf("isim: %s",o.isim);
	
	o.no=31;
	printf("no: %d",o.no);
	
	o.ort=85;
	printf("ortalama: %d",o.ort);
	
	//typedef ile kullaným
	
	ogretmen ogrt;
	strcpy(ogrt.isim,"ahmet");
	printf("ogretmen ismi: %s",ogrt.isim);
	
	ogrt.yas = 27;
	printf("ogretmen yas: %d",ogrt.yas);
	
	return 0;
}
