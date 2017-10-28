#include <stdio.h>
#include <conio.h>

main()
{
	int bosluk=1;
	int son=5;
	for(int a=0; a<5; a++)
	{
	for(int b=0; b<bosluk; b++)
		printf(" ");
	for(int i=1; i<=son; i++)
		printf("%d",i);
	son--;
	bosluk++;
	printf("\n");
	}
	
	bosluk=5;
	int bas=5;
	for(int a=0; a<5; a++)
	{
	for(int b=0; b<bosluk; b++)
		printf(" ");
	for(int i=bas; i<=5; i++)
		printf("%d",i);
	bas--;
	bosluk--;
	printf("\n");
	}
	
	getch();
	
}


