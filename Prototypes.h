#ifndef _MY_BMRI_LIB_  // TO prevent multiple inclusions of the header file
#define _MY_BMRI_LIB_ 
//User Defined File
extern int max_count;

struct BMII
{
	int Gender;
	char Name[20];
	int choice;
	float meter;
	float kg;
	float inch;
	float pound;
	float bmi;
	int Decision;
	char *Gen[20];
	char *category[20];
};

struct BMRR
{
	int Gender;
	char Name[20];
	float inch;
	float kg;
	int years;
	int lose_kg;
	int Activity;
	int Decision;
	float k;
	char *Gen[20];
	float p;
	char *Activy[20];
	int cal;
	int calories;
};

typedef struct BMII I;
typedef struct BMRR R;

//Function Prototypes
void Menu(int x);
int BMI_Client(I array[],int count);
int BMI_Server(I array[],int count);
int BMR_Client(R array[],int count);
int BMR_Server(R array[],int count);
void empty_stdin (void);
#endif 