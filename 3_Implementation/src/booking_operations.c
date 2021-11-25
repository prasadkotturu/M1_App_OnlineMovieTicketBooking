#include "fun.h"
#include "fun1.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
void login()
{
	
    char uname[10]; 
    char pword[10];
    char user[10]="user";
    char pass[10]="pass";
  
	
    printf("\n  ++++++++++++++++++++++++++++++  LOGIN FIRST  ++++++++++++++++++++++++++++++  ");
    printf(" \n\n                  ENTER USERNAME:-");
	scanf("%s", uname); 
	printf(" \n\n                  ENTER PASSWORD:-");
	
	
	scanf("%s",pword); 
		if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
	{
	printf("  \n\n\n       WELCOME TO OUR BOOKING SYSTEM !!!! LOGIN IS SUCCESSFUL");
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
        exit(0);
		
		
		
		
	}

	
}

void insert_details()
{
	
	FILE *fp;
	struct book b;
	printf("Enter movie code :- ");	
	scanf("%s",b.code);
	printf("Enter  name :- ");	
	scanf("%s",b.name);
	printf("Enter Release Date:- ");	
	scanf("%s",b.date);
	printf("Enetr Ticket Price:- ");	
	scanf("%d",&b.cost);
	
	fp=fopen("C:/Users/RITICHINTAPALLI/Desktop/mpro/data.txt","a");

	if(fp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(fp,"%s %s %s %d \n",b.code,b.name,b.date,b.cost);
		printf("Recorded Successfully");
	}
		printf("\n");
	fclose(fp);
	//system("cls");
}
void find() //find details
{
	struct book b;
	FILE *fp;
	
	char ch[20];
	printf("Enter movie code :");
	scanf("%s",ch);

	fp = fopen("C:/Users/RITICHINTAPALLI/Desktop/mpro/data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{	
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %s %d",b.code,b.name,b.date,&b.cost);
			if(strcmp(b.code,ch) == 0)
			{	
				//printf("%s / %s / %s / %d\n",b.code,b.name,b.date,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\tCode ::%s",b.code);
				printf("\n\t\tmovie name ::%s",b.name);
				printf("\n\t\tmovie date ::%s",b.date);
				printf("\n\t\tprice of ticket ::%d",b.cost);
			}
		}
		
	}

	fclose(fp);
	//system("cls");
}
void viewAll()
{
	
	char ch;
	FILE *fp;

	fp = fopen("C:/Users/RITICHINTAPALLI/Desktop/mpro/data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{	
		//system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);
		
	}
	
	fclose(fp);

}
//for ticket booking 
void book_ticket()
{
 struct book b;
	FILE *fp;

	FILE *ufp;

	int total_seat,mobile,total_amount;
	char name[20];

	
	char ch; //used in display all movies
	char movie_code[20]; //for searching

	// disply all moives by default for movie code
	fp = fopen("C:/Users/RITICHINTAPALLI/Desktop/mpro/data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{	
		//system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);
		
	}
	fclose(fp);
	
	//display ends
	printf("\n For Book ticket Choice Movie(Enter Movie Code First Latter Of Movie)\n");
	printf("\n Enter movie code :");
	scanf("%s",movie_code);
	//system("clear");
	fp = fopen("C:/Users/RITICHINTAPALLI/Desktop/mpro/data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{	
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %s %d",b.code,b.name,b.date,&b.cost);
			if(strcmp(b.code,movie_code) == 0)
			{	
				//printf("%s / %s / %s / %d\n",b.code,b.name,b.date,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\tCode ::%s",b.code);
				printf("\n\t\tMovie name ::%s",b.name);
				printf("\n\t\tdate name ::%s",b.date);
				printf("\n\t\tPrice of ticket::%d",b.cost);
			}
		}
		
	}
	printf("\n* Fill Deatails  *");
	printf("\n your name :");
	scanf("%s",name);
	printf("\n mobile number :");
	scanf("%d",&mobile);
	printf("\n Total number of tickets :");
	scanf("%d",&total_seat);
	
	
	total_amount = b.cost * total_seat;
	
	printf("\n ENJOY MOVIE \n");
	printf("\n\t\tname : %s",name);
	printf("\n\t\tmobile Number : %d",mobile);
	printf("\n\t\tmovie name : %s",b.name);
	printf("\n\t\tTotal seats : %d",total_seat);
	printf("\n\t\tcost per ticket : %d",b.cost);
	printf("\n\t\tTotal Amount : %d",total_amount);
	
	
	ufp=fopen("C:/Users/RITICHINTAPALLI/Desktop/mpro/data.txt","a");
	if(ufp == NULL)
	{
		printf("FIle not Found");
	}
	else
	{
		fprintf(ufp,"%s %d %d %d %s %d \n",name,mobile,total_seat,total_amount,b.name,b.cost);
		printf("\n Record insert Sucessfull to the old record file");
	}
		printf("\n");
	fclose(ufp);
	fclose(fp);

}
//for view all user transections
void old_record()
{
	char ch;
	FILE *fp;

	//system("clear");
	
	fp = fopen("C:/Users/RITICHINTAPALLI/Desktop/mpro/data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{	
		//system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);
		
	}
	fclose(fp);


}

