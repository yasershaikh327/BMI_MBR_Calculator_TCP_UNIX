/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <time.h>
#include<unistd.h>
#include <stdlib.h>
#include<string.h>
#include "Prototypes.h"
#define Size 50
int main()
{
   
    char *intro[100],*data1[100],*data2[100],*data3[100],*data4[100],*data5[100],*data6[100],*data7[100],*bmr[100],*bmi[100];
    int rtn;
    
    *intro="TCP Client – Server Communication Implementation For BMI and BMR Calculator";
    *bmi="ABOUT BMI";
    *data1="BMI is a measurement of a person's leanness or corpulence based on their height";
    *data2="and weight,and is intended to quantify tissue mass.It is widely used as a general";
    *data3="indicator of whether a person has a healthy body weight for their height.";
    
    *bmr="ABOUT BMR";
    *data4="Basal metabolic rate (BMR) is often used interchangeably with resting meta";
    *data5="rate (RMR). While BMR is a minimum number of calories required for basic ";
    *data6="functions at rest, RMR — also called resting energy expenditure (REE) — ";
    *data7="— is the number of calories that your body burns while it's at rest.";
    
    /* clock */
	time_t t ;
	struct tm *tmp ;
	char Date[Size];
	time( &t );
	
	tmp = localtime( &t );
	strftime(Date, sizeof(Date), "%I:%M %p", tmp);
	printf("\t\t\t\t\t\t\t\t\t\t\t \033[1;33m%s\033[0m\n", Date); 
	printf("\033[0m"); 	
	
	
	  printf("\n\n");
    printf("\t\t\033[1;32m     %s\033[0m",*intro);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\033[1;33m%s\033[0m",*bmi);
    printf("\n\t\t\t%s",*data1);
    printf("\n\t\t\t%s",*data2);
    printf("\n\t\t\t%s",*data3);
    
	
	  printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\033[1;33m%s\033[0m",*bmr);
    printf("\n\t\t\t%s",*data4);
    printf("\n\t\t\t%s",*data5);
    printf("\n\t\t\t%s",*data6);
    printf("\n\t\t\t%s",*data7);
    printf("\n\n");
    
    //System Startup
	char txt[20];
	char *f="Windows";
	printf("\t\t\tEnter the Password To Start The System : ");
	scanf("%s",txt);
	
	//Check if Password Entered is Correct or Not
	while(strcmp(txt,"windows")!=0)
	{
		printf("\t\t\033[1;31mError\033[0m : Please Re - Enter the Password To Start The System : ");
		scanf("%s",txt);
	}

	//Wait for 5 seconds before starting the system
	printf("\t\t\t\033[1;36mPlease Wait....\n");
	printf("\t\t\t\033[1;32mLogin Successful");
	printf("\033[0m");
	sleep(2);
	
  if(strcmp(txt,"windows")==0)
	{
		printf("\n\n");
		printf("MENU DRIVEN PROGRAM FOR BMR/BMI CALCULATION SYSTEM");
		
		//Choose Between BMR & BMI
		int change;
		do
		{
			printf("\n\nChoose the Following Calculator :");
			printf("\n1: BMR");
			printf("\n2: BMI");
			printf("\n3: EXIT ❌\n");
			printf("\nThe Choice Entered is : ");
			rtn=scanf("%d",&change);
			if (rtn == 0) 
			{    
				printf("\033[1;31mError : Invalid Integer Input\033[0m.\n");
				empty_stdin();
			}
			else
			printf("\n");
			Menu(change);
		}
		while(change!=3);
		return 0;
	}
}
