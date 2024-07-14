#include<stdio.h>
#include<conio.h>

main()
{
	int first,second,third,f;
	clrscr();

	printf("first angle :");
	scanf("%d",&first);

	printf("sceond angle :");
	scanf("%d",&second);

	f=first+second;

	printf("third angle : %d",180-f);

	getch();
}