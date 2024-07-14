#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int ch,qut;

	clrscr();

	P("\n	    --MENU CARD--");
	P("\n-------------------------------------");
	P("\n1)   Tea		       	Rs.15");
	P("\n2)   Milk Shak			Rs.30");
	P("\n3)   Cold Coco			Rs.45");
	P("\n4)   Thik Shak			Rs.35");
	P("\n5)   Chocklet Shak		Rs.60");
	P("\n6)   Ice Cream			Rs.60");
	P("\n7)   Cadbary Shak		Rs.90");
	P("\n8)   Vanila Shak		Rs.75");
	P("\n9)   Coffie		 	Rs.30");
	P("\n10)  Cold Coffie		Rs.80 ");
	P("\n-------------------------------------");
	P("\nEnter Your Choice :");
	scanf("%d",&ch);
	P("\n-------------------------------------");

	switch(ch)
	{

		case 1:
			P("\nYou Have Selected : Tea ");
			P("\nEnter Qut : ");
			scanf("%d",&qut);
			P("\Total Price : %d",(qut*15));
			P("\n-------------------------------------");
			P("\nThankyu For Order");
			break;

		case 2:
			P("\nYou Have Selected : Milk Shak ");
			P("\nEnter Qut : ");
			scanf("%d",&qut);
			P("\Total Price : %d",(qut*30));
			P("\n-------------------------------------");
			P("\nThankyu For Order");
			break;

		case 3:
			P("\nYou Have Selected : Cold Coco ");
			P("\nEnter Qut : ");
			scanf("%d",&qut);
			P("\Total Price : %d",(qut*45));
			P("\n-------------------------------------");
			P("\nThankyu For Order");
			break;

		case 4:
			P("\nYou Have Selected : Thik Shak ");
			P("\nEnter Qut : ");
			scanf("%d",&qut);
			P("\Total Price : %d",(qut*35));
			P("\n-------------------------------------");
			P("\nThankyu For Order");
			break;

		case 5:
			P("\nYou Have Selected : Chocklet Shak");
			P("\nEnter Qut : ");
			scanf("%d",&qut);
			P("\Total Price : %d",(qut*60));
			P("\n-------------------------------------");
			P("\nThankyu For Order");
			break;

		case 6:
			P("\nYou Have Selected : Ice Cream ");
			P("\nEnter Qut : ");
			scanf("%d",&qut);
			P("\Total Price : %d",(qut*60));
			P("\n-------------------------------------");
			P("\nThankyu For Order");
			break;

		case 7:
			P("\nYou Have Selected : Cadbary Shak ");
			P("\nEnter Qut : ");
			scanf("%d",&qut);
			P("\Total Price : %d",(qut*90));
			P("\n-------------------------------------");
			P("\nThankyu For Order");
			break;

		case 8:
			P("\nYou Have Selected : Vanila Shak ");
			P("\nEnter Qut : ");
			scanf("%d",&qut);
			P("\Total Price : %d",(qut*75));
			P("\n-------------------------------------");
			P("\nThankyu For Order");
			break;

		case 9:
			P("\nYou Have Selected : Coffie ");
			P("\nEnter Qut : ");
			scanf("%d",&qut);
			P("\Total Price : %d",(qut*30));
			P("\n-------------------------------------");
			P("\nThankyu For Order");
			break;

		case 10:
			P("\nYou Have Selected : Cold Coffie ");
			P("\nEnter Qut : ");
			scanf("%d",&qut);
			P("\Total Price : %d",(qut*80));
			P("\n-------------------------------------");
			P("\nThankyu For Order");
			break;

		default:
			P("\nNot Avaliable");



	 }
	getch();


}