/*
Authors :
Member Name 								Roll Number
Yaser Imtiyaz Ahmed Shaikh	2060
Seema Santosh Naik					2039
Edphil Burce Cardozo				2068
Date From : 21/4/2021
Date To : 
Program : BMR And BMI Calculator
Current File : BMR_SERVER.c
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Prototypes.h"


int BMR_Server(R array[],int count)
{
	//Calculation Based On Gender : Male
	if(array[count].Gender == 1)
		{
			array[count].k=88.362 + (13.397 * array[count].kg) + (4.799 * (2.54 * array[count].inch)) - (5.677 * array[count].years);
			*(array[count].Gen)="Male";
			
			//Activity
			//Sedentary
			if(array[count].Activity==1)
			{
				array[count].p=array[count].k * 1.2;
				*(array[count].Activy)="Sedentary";
			}

			//Light
			else if(array[count].Activity==2)
			{
				array[count].p=array[count].k * 1.375;
				*(array[count].Activy)="Light";
			}
			
			//Moderate
			else if(array[count].Activity==3)
			{
				array[count].p=array[count].k * 1.55;
				*(array[count].Activy)="Moderate";
			}

			//Active
			else if(array[count].Activity==4)
			{
				array[count].p=array[count].k * 725;
				*(array[count].Activy)="Active";
			}

			//Invalid
			else
			{
				
				printf("\033[0;31mInvalid Choice For Activity Factor : \033[0m");
				exit(0);
			}
			
			//To Lose In Kg
			array[count].cal=(array[count].p)-(array[count].lose_kg * 7700);
			printf("\n\nAccording to %s Activity You Must Loose %d Calories : ",*(array[count].Activy),array[count].cal);	//Output Of Program			
		}

		//Calculation Based On Gender : Female
		else if(array[count].Gender==2)
		{
			array[count].k=447.593 + (9.247 * array[count].kg) + (3.098 * (2.54 * array[count].inch)) - (4.330 * array[count].years);
			*(array[count].Gen)="Female";
			
			//Activity
			//Sedentary
			if(array[count].Activity==1)
			{
				array[count].p=array[count].k * 1.2;
				*(array[count].Activy)="Sedentary";
			}

			//Light
			else if(array[count].Activity==2)
			{
				array[count].p=array[count].k * 1.375;
				*(array[count].Activy)="Light";

			}

			//Moderate
			else if(array[count].Activity==3)
			{
				array[count].p=array[count].k * 1.55;
				*(array[count].Activy)="Moderate";
			}

			//Active
			else if(array[count].Activity==4)
			{
				array[count].p=array[count].k * 725;
				*(array[count].Activy)="Active";
			}

			//Invalid 
			else
			{
				printf("\033[0;31mInvalid Choice For Activity Factor : \033[0m");
				exit(0);
			}

			//To Lose In Kg
			array[count].cal=(array[count].p)-(array[count].lose_kg * 7700);
			printf("\n\nAccording to %s Activity You Must Loose %d Calories : ",*(array[count].Activy),array[count].cal);	//Output Of Program
		
		}
			
		//Generating A Report
		if(array[count].Decision==1)
		{
			FILE *fptr;
			fptr = fopen("BMR_Report.txt","w");
			if(fptr == NULL)
			{
				printf("\033[0;31mError!\033[0m");   
				exit(1);             
			}

			//Time Function
			time_t t ;
			struct tm *tmp ;
			char DateTime[100];
			time( &t );
			tmp = localtime( &t );
			strftime(DateTime, sizeof(DateTime), "%x : %I:%M%p", tmp);

			//Data is Written To File
			fprintf(fptr,"%s","BMR REPORT : ");
			fprintf(fptr,"%s","\n");
			fprintf(fptr,"%s","Name : ");
			fprintf(fptr,"%s",array[count].Name);
			fprintf(fptr,"%s","\n");
			fprintf(fptr,"%s","Gender : ");
			fprintf(fptr,"%s",*(array[count].Gen));
			fprintf(fptr,"%s","\n");
			fprintf(fptr,"%s","Inch : ");
			fprintf(fptr,"%f",array[count].inch);
			fprintf(fptr,"%s","\n");
			fprintf(fptr,"%s","KG : ");
			fprintf(fptr,"%f",array[count].kg);
			fprintf(fptr,"%s","\n");
			fprintf(fptr,"%s","Year : ");
			fprintf(fptr,"%d",array[count].years);
			fprintf(fptr,"%s","\n");
			fprintf(fptr,"%s","Activity Factor : ");
			fprintf(fptr,"%s","\n");
			fprintf(fptr,"%s",*(array[count].Activy));
			fprintf(fptr,"%s"," : ");
			fprintf(fptr,"%f",array[count].p);
			fprintf(fptr,"%s","\n");
			fprintf(fptr,"%s","The Weight To Loose : ");
			fprintf(fptr,"%d",array[count].lose_kg);
			fprintf(fptr,"%s","\n");
			fprintf(fptr,"%s","Calories To Loose : ");
			fprintf(fptr,"%d",array[count].cal);
			fprintf(fptr,"%s","\n");
			fprintf(fptr,"%s","Date and Time of Report : ");
			fprintf(fptr,"%s",DateTime);
			fclose(fptr);
			
		}
		return array[count].cal;
		return count;
}

