//WAP to create Food Billing System

#include<stdio.h>


	void displayMenu()
	{printf("\"Continental Veggie Delite Menu\"\n");//Menu category
	
	//Food items display
	
	printf("Sr.No.     Item name          Quantity     Rate(Rs.)\n");
	printf("  1.       Russian Salad          1        119/-\n");
	printf("  2.       Lebanese falafel       1        119/-\n");
	printf("  3.       Paneer Salsa Wrap      1        133/-\n");
	printf("  4.       Lasagna Roll           1        133/-\n");
	printf("  5.       Veg. Sushi             1        145/-\n");
	printf("  6.       Pasta in twin sauce    1        190/-\n");
	printf("  7.       Veg. Chopsuey          1        195/-\n");
	printf("  8.       Macaroni Hotpot        1        205/-\n");
	printf("  9.       Veg. Augratin          1        205/-\n");
	printf("  10.      Veggie Delite Pizza    1        265/-\n");}
	
	int main()
{
	int item_num,quantity;
	float price,item_price, total_price;
	char order;
	printf("------WELCOME TO RV RESTAURANT------\n");//Name of restaurant
	do{
		displayMenu();
		printf("\nEnter item number:");// Enter 1 for Russian salad, 2 for Lebanese falafel----> 10 for Super veggie pizza
		scanf("%d", &item_num);
		switch (item_num)
	{
	
	       case 1: price=119;
	       printf("You have choosen Russian Salad\n");
	       break;
	       case 2: price=119;
	       printf("You have choosen Lebanese falafel\n");
	       break;
	       case 3: price=133;
	       printf("You have choosen Paneer Salsa Wrap\n");
	       break;
	       case 4: price=133;
	       printf("You have choosen Lasagna Roll\n");
	       break;
	       case 5: price=145;
	       printf("You have choosen Veg. Sushi\n");
	       break;
	       case 6: price=190;
	       printf("You have choosen Pasta in twin sauce\n");
	       break;
	       case 7: price=195;
	       printf("You have choosen Veg. Chopsuey\n");
	       break;
	       case 8: price=205;
	       printf("You have choosen Macaroni Hotpot\n");
	       break;
	       case 9: price=205;
	       printf("You have choosen Veg. Augratin\n");
	       break;
	       case 10: price=265;
	       printf("You have choosen Veggie Delite Pizza\n");
	       break;
	       default: printf("Invalid choice");
  
           }
           
           printf("Enter the quantity:");// Enter quantity (Number of dishes) to order
		   scanf("%d", &quantity);
		   
		   item_price=price*quantity;//Gives individual item total
		   printf("Total item price:Rs.%0.2f\n", item_price);
		   
		   total_price+=item_price;//Gives total bill of all items selected
		   printf("Total bill:Rs.%0.2f", total_price);
		   
		   printf("\nDo you want to select more items? (Y/N): ");//option to select more items
           scanf(" %c", &order);

        if (order != 'Y' && order != 'y') {
            break;}
		   
		   
	}
	while (item_num!=10);
	printf("\nTotal bill:Rs.%0.2f",total_price);
	printf("\nThank you for visiting:)");
	printf("\nHave a nice day!");
	
	
	return 0;}
