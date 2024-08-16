/*
Authors :
Member Name 								Roll Number
Yaser Imtiyaz Ahmed Shaikh	2060
Seema Santosh Naik					2039
Edphil Burce Cardozo				2068
Date From : 21/4/2021
Date To : 
Program : BMR And BMI Calculator
Current File : BMR_BMI_Client.c
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "Prototypes.h"
#include <sys/wait.h>
int max_count=10;
int rtn;


//Main Menu
void Menu(int x)
{
	I I_I[max_count];
	R R_R[max_count];
	int bmr_clc=0;
	int bmr_cls=0;
	int bmi_clc=0;
	int bmi_cls=0;

	//Switch the modes
	switch(x)
	{
		case 1:
		bmr_clc=BMR_Client(R_R,bmr_clc);
		bmr_cls=BMR_Server(R_R,bmr_cls);
		break;

		case 2:
		bmi_clc=BMI_Client(I_I,bmi_clc);
		bmi_cls=BMI_Server(I_I,bmi_cls);
		break;

		case 3:
		printf("Exiting :");
		exit(0);
		break;

		default :
		printf("\033[1;31mInvalid Choice : \033[0m");
	}
}


//validation For Integer
void empty_stdin (void) /* simple helper-function to empty stdin */
{
    int c = getchar();
	while (c != '\n' && c != EOF)
        c = getchar();
}