run:	Introduction.o BMR_BMI_Client.o BMR_BMI_Client_Function.o BMR_SERVER.o BMI_SERVER.o 
	gcc -o	run Introduction.o BMR_BMI_Client.o BMR_BMI_Client_Function.o BMR_SERVER.o BMI_SERVER.o 
Introduction.o: Introduction.c Prototypes.h
	gcc -c Introduction.c
BMR_BMI_Client.o:	BMR_BMI_Client.c Prototypes.h
	gcc -c BMR_BMI_Client.c
BMR_BMI_Client_Function.o:	BMR_BMI_Client_Function.c Prototypes.h
	gcc -c BMR_BMI_Client_Function.c
BMR_SERVER.exe:	BMR_SERVER.c Prototypes.h
	gcc -c BMR_SERVER.c
BMI_SERVER.exe:	BMI_SERVER.c Prototypes.h
	gcc -c BMI_SERVER.c
