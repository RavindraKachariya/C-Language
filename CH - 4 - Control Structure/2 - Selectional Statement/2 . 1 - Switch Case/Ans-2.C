#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int month;
	clrscr();

	printf("Enter The Month (1-12) : ");
	scanf("%d",&month);

	switch(month)
	{
		case 1:
			P("Month Name : Jan\n");
			P("Total Day In Month : 31 Days\n");
			break;

		case 2:
			P("Month Name : Feb\n");
			P("Total Day In Month : 28/29 Days\n");
			break;

		case 3:
			P("Month Name : Mar\n");
			P("Total Day In Month : 31 Days\n");
			break;

		case 4:
			P("Month Name : Apr\n");
			P("Total Day In Month : 30 Days\n");
			break;

		case 5:
			P("Month Name : May\n");
			P("Total Day In Month : 31 Days\n");
			break;

		case 6:
			P("Month Name : Jun\n");
			P("Total Day In Month : 30 Days\n");
			break;

		case 7:
			P("Month Name : Jul\n");
			P("Total Day In Month : 31 Days\n");
			break;

		case 8:
			P("Month Name : Aug\n");
			P("Total Day In Month : 31 Days\n");
			break;

		case 9:
			P("Month Name : Sep\n");
			P("Total Day In Month : 30 Days\n");
			break;

		case 10:
			P("Month Name : Oct\n");
			P("Total Day In Month : 31 Days\n");
			break;

		case 11:
			P("Month Name : Nov\n");
			P("Total Day In Month : 30 Days\n");
			break;

		case 12:
			P("Month Name : Dec\n");
			P("Total Day In Month : 31 Days\n");
			break;

		default:
			P("Invalid Month !! ");

	}

	getch();

}