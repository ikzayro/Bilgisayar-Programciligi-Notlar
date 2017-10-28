#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	float x=2.7;
	x=floor(x);  //sayıyı bi alt tamsayıya yuvarlar
	printf("%f \n",x);
	x=ceil(2.3);  //sayıyı bi üst tamsayıya yuvarlar
	printf("%f \n",x);
	int a=16;
	int b=sqrt(a);  //sayının karekökünü alır
	printf("%d \n",b);
	int taban=3;
	int us=2;
	int sonuc=pow(taban,us);  //girdigin sayının girdigin üssünü alır
	printf("%d",sonuc);
	
	getch();
	
}
