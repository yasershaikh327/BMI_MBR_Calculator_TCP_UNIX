/*
Authors :
Member Name 								Roll Number
Yaser Imtiyaz Ahmed Shaikh	2060
Seema Santosh Naik					2039
Edphil Burce Cardozo				2068
Date From : 21/4/2021
Date To : 
Program : BMR And BMI Calculator
Current File : BMR_BMI_Client_Function.c
*/
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "Prototypes.h"


//BMR Calculator
int BMR_Client(R array[],int count)
{
	//Calculations
	//Gender
	printf("Enter the Gender 1 For Male and 2 For Female : ");
	scanf("%d",&array[count].Gender);

	//Validate
	while(array[count].Gender > 2 || array[count].Gender < 1)
	{
		printf("\033[1;31mRe-Enter the Value 1 For Male OR 2 For Female : \033[0m");
		scanf("%d",&array[count].Gender);
	}

	//Calculations Vary Based On Gender
	if(array[count].Gender==1 || array[count].Gender==2)
	{

		//Name
		printf("Enter The Name : ");
		scanf("%s",array[count].Name);		

		//Height in Inch
		printf("Enter the Inch : ");
		scanf("%f",&array[count].inch);

		//Weight in Kg
		printf("Enter the Kg : ");
		scanf("%f",&array[count].kg);

		//Age in Years
		printf("Enter the Year : ");
		scanf("%d",&array[count].years);

		//To Lose in Kg
		printf("Enter the Weight To Loose : ");
		scanf("%d",&array[count].lose_kg);

		//To Get Daily Calories
		printf("Enter the Activity Factor :");
		printf("\n1: Sedentary");
		printf("\n2: Light");
		printf("\n3: Moderate");
		printf("\n4: Active");
		printf("\nThe Choice Is : ");
		scanf("%d",&array[count].Activity);

		//Validate
		while(array[count].Activity > 4 || array[count].Activity < 1)
		{
			printf("Please Re - Enter The Value From \033[1;31m1 - 4\033[0m : ");
			scanf("%d",&array[count].Activity);
		}

		//To Generate BMR Report
		printf("\nTo Generate BMR Report Press 1 for 'Yes' else Press 0 for 'No' ");
		scanf("%d",&array[count].Decision);
		if(array[count].Decision==1)
		{
			printf("\033[1;32mReport Generated Successfully :)\033[0m");
		}
		
	}
	else
	{
		//Go Back To Main Menu
		int change;
		do
		{
			printf("\n\nChoose the Following Calculator :");
			printf("\n1: BMR");
			printf("\n2: BMI");
			printf("\n3: EXIT");
			printf("\nThe Choice Entered is : ");
			scanf("%d",&change);
			printf("\n");
			Menu(change);
		}
		while(change!=3);
	}
	return count;
}


//BMI Calculator
int BMI_Client(I array[],int count)
{
	
	//Calculations
	//Gender
	printf("Enter the Gender 1 For Male and 2 For Female : ");
	scanf("%d",&array[count].Gender);

	//Validate
	while(array[count].Gender > 2 || array[count].Gender < 1)
	{
		printf("\033[1;31mRe-Enter the Value 1 For Male OR 2 For Female : \033[0m");
		scanf("%d",&array[count].Gender);
	}

	//Calculations Based On Gender
	if(array[count].Gender==1 || array[count].Gender==2)
	{
		printf("Enter The Name : ");
		scanf("%s",array[count].Name);

		//Calculations
		printf("\nChoose the Following Measurements : ");
		printf("\n1 : Height In Meter and Weight In KG :");
		printf("\n2 : Height In FEET-INCH and Weight In POUNDS :");
		printf("\n3 : Height In FEET-INCH and Weight In KG : ");
		printf("\n4 : Height In Meter and Weight In POUNDS : ");
		scanf("%d",&array[count].choice);

		//Validate
		while(array[count].choice > 4 || array[count].choice < 1)
		{
			printf("Re-Enter The Choice From \033[1;31m[1 - 4] : \033[0m");
			scanf("%d",&array[count].choice);
		}

		//Height In Meter and Weight In KG
		if(array[count].choice==1)
		{
			//Meter
			printf("Enter the Height In Meter : ");
			scanf("%f",&array[count].meter);

			//Kg
			printf("Enter the Weight In Kg : ");
			scanf("%f",&array[count].kg);
		}

		//Height In FEET-INCH and Weight In POUNDS
		else if(array[count].choice==2)
		{
			//Inch
			printf("Enter the Height In Inch : ");
			scanf("%f",&array[count].inch);

			//Pounds
			printf("Enter the Weight In Pound : ");
			scanf("%f",&array[count].pound);

		}
		
		//Height In FEET-INCH and Weight In KG
		else if(array[count].choice==3)
		{
			//Inch
			printf("Enter the Height In Inch : ");
			scanf("%f",&array[count].inch);

			//Kg
			printf("Enter the Weight In Kg : ");
			scanf("%f",&array[count].kg);

		}

		//Height In Meter and Weight In POUNDS
		else if(array[count].choice==4)
		{
			//Meter
			printf("Enter the Height In Meter : ");
			scanf("%f",&array[count].meter);

			//Pounds
			printf("Enter the Weight In Pound : ");
			scanf("%f",&array[count].pound);
		}
			
		/*else
		{
			printf("Invalid Choice For Measurements : ");
			exit(0);
		}*/


		//To Generate BMR Report
		printf("\nTo Generate BMR Report Press 1 for 'Yes' else Press 0 for 'No' ");
		scanf("%d",&array[count].Decision);
		if(array[count].Decision==1)
		{
			printf("\033[1;32mReport Generated Successfully :)\033[0m");
		}
		else
		{
			printf(" ");
		}
	}	
	else
	{

		//Go Back To Main Menu
		int change;
		do
		{
			printf("\n\nChoose the Following Calculator : ");
			printf("\n1: BMR");
			printf("\n2: BMI");
			printf("\n3: EXIT");
			printf("\nThe Choice Entered is : ");
			scanf("%d",&change);
			printf("\n");
			Menu(change);
		}
		while(change!=3);
	}
	return count;
}	