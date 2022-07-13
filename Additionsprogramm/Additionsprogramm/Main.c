//**************************************************************************
//**************************************************************************
//**
//**	Projekt: Additionsprogramm	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 16.11.2021 19:51:00
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	int i_Summand1, i_Summand2, i_Ergebnis; //Deklaration
	//Initilalisierung
	i_Summand1 = 0;
	i_Summand2 = 0;
	i_Ergebnis = 0;


	//Code
	printf("Ein einfaches Additionsprogramm\n");
	printf("*******************************\n");

	printf("Bitte Summand 1 eingeben:\n");
	scanf("%i", &i_Summand1);
	printf("Bitte Summand 2 eingeben:\n");
	scanf("%i", &i_Summand2);

	//Ergebnis berechnen
	i_Ergebnis = i_Summand1 + i_Summand2;

	//Ausgabe des Ergebnisses
	printf("Das Ergebnis ist: %i", i_Ergebnis);


	getchar();
	fflush(stdin);
	getchar();
	return 0;
}