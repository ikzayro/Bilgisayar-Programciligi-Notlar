#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	float x=2.7;
	x=floor(x);  //sayýyý bi alt tamsayýya yuvarlar
	printf("%f \n",x);
	x=ceil(2.3);  //sayýyý bi üst tamsayýya yuvarlar
	printf("%f \n",x);
	int a=16;
	int b=sqrt(a);  //sayýnýn karekökünü alýr
	printf("%d \n",b);
	int taban=3;
	int us=2;
	int sonuc=pow(taban,us);  //girdigin sayýnýn girdigin üssünü alýr
	printf("%d",sonuc);
	
	getch();
	
}
