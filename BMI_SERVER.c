/*
Authors :
Member Name 			Roll Number
Yaser Imtiyaz Ahmed Shaikh	2060
Seema Santosh Naik		2039
Edphil Burce Cardozo		2068
Date From : 21/4/2021
Date To : 
Program : BMR And BMI Calculator
Current File : BMI_SERVER.c
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Prototypes.h"

	
int BMI_Server(I array[],int count)
{
	if(array[count].Gender == 1)
		{
			*(array[count].Gen)="Male";
			
			//Height In Meter and Weight In KG
			if(array[count].choice==1)
			{
				//calculations
				array[count].bmi = array[count].kg / ( array[count].meter *array[count].meter);
			}
	
			//Height In FEET-INCH and Weight In POUNDS
			else if(array[count].choice==2)
			{
				//calculations
				array[count].bmi = 703 * array[count].pound / ( array[count].inch * array[count].inch) ;

			}

			//Height In FEET-INCH and Weight In KG
			else if(array[count].choice==3)
			{
				//calculations
				array[count].bmi = array[count].kg / array[count].inch * array[count].inch * 0.0254;
			}

			//Height In Meter and Weight In POUNDS
			else if(array[count].choice==4)
			{
				//calculations
				array[count].bmi = array[count].pound * 0.454 / array[count].meter * array[count].meter;
			}
			else
			{
				printf("\033[1;31mInvalid Choice For Measurements : \033[0m");
				exit(0);
			}
			
			//category
			//UnderWeight
			if(array[count].bmi<18.5)
			{
				*(array[count].category)="UnderWeight";	
				printf("\n\nThe Result is : %s",*(array[count].category));		//Output OF Program
			}

			//NormalWeight
			else if(array[count].bmi<18.5 && array[count].bmi>24.9)
			{
				*(array[count].category)="NormalWeight";
				printf("\n\nThe Result is : %s",*(array[count].category));		//Output OF Program
			}

			//OverWeight
			else if(array[count].bmi<25.0 && array[count].bmi>29.9)
			{
				*(array[count].category)="OverWeight";
				printf("\n\nThe Result is : %s",*(array[count].category));		//Output OF Program
			}

			//Obese Class I
			else if(array[count].bmi<30.0 && array[count].bmi>34.9)
			{
				*(array[count].category)="Obese Class I";
				printf("\n\nThe Result is : %s",*(array[count].category));		//Output OF Program
			}

			//Obese Class II
			else if(array[count].bmi<35.0 && array[count].bmi>39.9)
			{
				*(array[count].category)="Obese Class II";
				printf("\n\nThe Result is : %s",*(array[count].category));		//Output OF Program
			}

			//Obese Class III
			else if(array[count].bmi>=40.0)
			{
				*(array[count].category)="Obese Class III";
				printf("\n\nThe Result is : %s",*(array[count].category));		//Output OF Program
			}

			//Invalid
			else
			{
				printf("\033[1;31mInvalid Choice : \033[0m");
			}
									
		}
		else if(array[count].Gender==2)
		{
			*(array[count].Gen)="Female";
			
			//Height In Meter and Weight In KG
			if(array[count].choice==1)
			{
				//calculations
				array[count].bmi = array[count].kg / ( array[count].meter * array[count].meter);
			}
	
			//Height In FEET-INCH and Weight In POUNDS
			else if(array[count].choice==2)
			{
				//calculations
				array[count].bmi = 703 * array[count].pound / ( array[count].inch * array[count].inch) ;

			}

			//Height In FEET-INCH and Weight In KG
			else if(array[count].choice==3)
			{
				//calculations
				array[count].bmi = array[count].kg / array[count].inch *array[count].inch * 0.0254;
			}

			//Height In Meter and Weight In POUNDS
			else if(array[count].choice==4)
			{
				//calculations
				array[count].bmi = array[count].pound * 0.454 / array[count].meter * array[count].meter;
			}
			else
			{
				printf("\033[1;31mInvalid Choice For Measurements : \033[0m");
				exit(0);
			}

			//category
			//UnderWeight
			if(array[count].bmi<18.5)
			{
				*(array[count].category)="UnderWeight";	
				printf("\n\nThe Result is : %s",*(array[count].category));		//Output OF Program
			}

			//NormalWeight
			else if(array[count].bmi<18.5 && array[count].bmi>24.9)
			{
				*(array[count].category)="NormalWeight";
				printf("\n\nThe Result is : %s",*(array[count].category));		//Output OF Program
			}

			//OverWeight
			else if(array[count].bmi<25.0 && array[count].bmi>29.9)
			{
				*(array[count].category)="OverWeight";
				printf("\n\nThe Result is : %s",*(array[count].category));		//Output OF Program
			}

			//Obese Class I
			else if(array[count].bmi<30.0 && array[count].bmi>34.9)
			{
				*(array[count].category)="Obese Class I";
				printf("\n\nThe Result is : %s",*(array[count].category));		//Output OF Program
			}

			//Obese Class II
			else if(array[count].bmi<35.0 && array[count].bmi>39.9)
			{
				*(array[count].category)="Obese Class II";
				printf("\n\nThe Result is : %s",*(array[count].category));		//Output OF Program
			}

			//Obese Class III
			else if(array[count].bmi>=40.0)
			{
				*(array[count].category)="Obese Class III";
				printf("\n\nThe Result is : %s",*(array[count].category));		//Output OF Program
			}

			//Invalid Choice
			else
			{
				printf("\033[1;31mInvalid Choice : \033[0m");
			}
		}

		//Generating A Report
		if(array[count].Decision==1)
		{
			FILE *fptr;
			fptr = fopen("BMI_Report.txt","w");
			if(fptr == NULL)
			{
				printf("\033[1;31mError!\033[0m");   
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
			fprintf(fptr,"%s","BMI REPORT : ");
			fprintf(fptr,"%s","\n");
			fprintf(fptr,"%s","Name : ");
			fprintf(fptr,"%s",array[count].Name);
			fprintf(fptr,"%s","\n");
			fprintf(fptr,"%s","Gender : ");
			fprintf(fptr,"%s",*(array[count].Gen));
			fprintf(fptr,"%s","\n");
			fprintf(fptr,"%s","BMI : ");
			fprintf(fptr,"%f",array[count].bmi);
			fprintf(fptr,"%s","\n");
			fprintf(fptr,"%s","Category : ");
			fprintf(fptr,"%s",*(array[count].category));
			fprintf(fptr,"%s","\n");
			fprintf(fptr,"%s","Date and Time of Report : ");
			fprintf(fptr,"%s",DateTime);
			fclose(fptr);
			
		}
		return array[count].bmi;
		return count;
	}
