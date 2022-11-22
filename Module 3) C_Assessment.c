#include<stdio.h>
void main()
{
	int a,b,amount,g=0,total_amount=0;
	restart:
	printf("1.Pizza                 price = 180Rs/pcs\n");
	printf("2.Burger                price = 100Rs/pcs\n");
	printf("3.Igli                  price = 120Rs/pcs\n");
	printf("4.dosa                  price = 50Rs/pcs\n");
	printf("\nPlease Enter your choice....:");
	scanf("%d",&a);
	
	
		switch(a)
	{
		case 1: printf("\nYou have selected pizza.");
		goto quantity;
		break;
		
		case 2: printf("\nYou have selected burger.");
		goto quantity;
		break;
		
		case 3: printf("\nYou have selected Idli.");
		goto quantity;
		break;
		
		case 4: printf("\nYou have selected Dosa.");
		goto quantity;
		break;
		
		default:printf("\nPlease enter a valid no.\n");
		goto restart;
	}
	quantity:
	{
		printf("\nEnter the quantity:");
		scanf("%d",&b);
		g=g+b;
		
	}
    printf("%d\n",g);
 	if(a==1)
 	{
 	amount=180*b;	
 	}
 	 else	if(a==2)
 	{
 	amount=100*b;	
 	}
 	 else	if(a==3)
 	{
 	amount=120*b;	
 	}
 	else 	if(a==4)
 	{
 	amount=50*b;	
 	}
 	total_amount=total_amount+amount;
 	printf("Total Amount = %d\n",total_amount);
 	printf("Do you want to place more Orders?\nPress Y to place more orders\nPress N to confirm your order:");
 	char c;
	
	re2:
	scanf(" %c", &c);
    if(c=='y' || c=='Y')
    {
    goto restart;
    }
	else if(c=='n' || c=='N')
	{
		printf("\n Qty:%d Total Amount:%d",g,total_amount);
	 } 
	 else
	 {
	 	printf("enter Y or N");
	 	goto re2;
	 }
	
}