#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	float x=2.7;
	x=floor(x);  //say�y� bi alt tamsay�ya yuvarlar
	printf("%f \n",x);
	x=ceil(2.3);  //say�y� bi �st tamsay�ya yuvarlar
	printf("%f \n",x);
	int a=16;
	int b=sqrt(a);  //say�n�n karek�k�n� al�r
	printf("%d \n",b);
	int taban=3;
	int us=2;
	int sonuc=pow(taban,us);  //girdigin say�n�n girdigin �ss�n� al�r
	printf("%d",sonuc);
	
	getch();
	
}
