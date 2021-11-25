#include "stdio.h"
#include "fun.h"
#include "fun1.h"
#include "string.h"
#include "stdlib.h"
int main()
{
    login();
	 int ch;
 	do{
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n");	
	printf("\t Moive Ticket booking ");
	printf("\n");
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	
	printf("\nEnter >1< To Insert Movie");
   	printf("\nEnter >2< To View All Movie");
	printf("\nEnter >3< To Find Movie ");
	printf("\nEnter >4< To Book Tickets");
	printf("\nEnter >5< To View All Transactions");
   	printf("\nEnter >0< To Exit ");

   	printf("\nEnter your Choice ::");
   	scanf("%d",&ch); 
	   //system("cls");	

   	switch (ch)
   	{
    		case 1 :
    		insert_details();
   		break;
		case 2:
    		viewAll();
   		break;
    		
		case 3:
    		find();
   		break;

		case 4:
		book_ticket();
		break;
		
		case 5:
		old_record();
		break;

    		case 0:
    		exit(0);
    		break;

    		default:
    		printf("Wrong choice !");
    		break;
   	}
 }while(ch!=0);
 

	


}

