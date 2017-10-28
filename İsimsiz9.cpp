#include <stdio.h>
#include <conio.h>

main()
{
	
	
	int son=5;
	for(int a=0; a<5; a++)
	{
		for(int i=son; i>=1; i--)
			printf("%d",i);
		
		for(int i=1; i<=son; i++)
			printf("%d",i);
		
		
	son--;
	printf("\n");
	}
	
	getch();
	
}


/*
main()
{
	int sinir=5,bosluk=1;
	for(int i=0; i<5; i++)
	{
	for (int a=0; a<bosluk; a++)
		printf(" ");
	for (int b=sinir; b>=1; b--)
		printf("%d", b);
	for (int c=1; c<=sinir; c++)
		printf("%d", c);
		
		printf("\n");
		sinir--;
		bosluk++;
}
getch();
}


*/

