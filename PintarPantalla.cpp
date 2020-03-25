#include <iostream>
#include <cstring>
#include <cstdio>
#include "rlutil.h"



using namespace rlutil;




void pintarPantalla()
{
	int x = 6;
	int y = 4;


	for(int i=0;i<8;i++)
	{

		locate(x, y);
		setColor(LIGHTBLUE);
		printf("D&D stats");


		int fue = rand() % 15;
		locate(x, y + 1);
		setColor(YELLOW);
		printf("FUE: ");
		setColor(WHITE);
		printf("%d", fue);

		int des = rand() % 15;
		locate(x, y + 2);
		setColor(YELLOW);
		printf("DES: ");
		setColor(WHITE);
		printf("%d", des);

		int con = rand() % 15;
		locate(x, y + 3);
		setColor(YELLOW);
		printf("CON: ");
		setColor(WHITE);
		printf("%d", con);

		int inte = rand() % 15;
		locate(x, y + 4);
		setColor(YELLOW);
		printf("INT: ");
		setColor(WHITE);
		printf("%d", inte);


		int sab = rand() % 15;
		locate(x, y + 5);
		setColor(YELLOW);
		printf("SAB: ");
		setColor(WHITE);
		printf("%d", sab);


		int car = rand() % 15;
		locate(x, y + 6);
		setColor(YELLOW);
		printf("CAR: ");
		setColor(WHITE);
		printf("%d", car);

		x = x + 15;

	}
	// CARACTERES 

	int x2 = 5;
	int y2 = 3;
	for (int i = 0; i < 8; i++)
	{
		locate(x2, y2);
		setColor(GREEN);
		printf("%c", 201);
		int incrementoX = 1;
		int incrementoY = 1;

		for(int i=0;i<9;i++)
		{
			locate(x2 + incrementoX, y2);
			setColor(GREEN);
			printf("%c", 205);
			incrementoX++;
		}
		
		locate(x2+10, y2);
		setColor(GREEN);
		printf("%c", 187);

		for (int i = 0; i < 7; i++)
		{
			locate(x2, y2+incrementoY);
			setColor(GREEN);
			printf("%c", 186);
			incrementoY++;
		}
		locate(x2, y2+8);
		setColor(GREEN);
		printf("%c", 200);

		incrementoX = 1;
		for (int i = 0; i < 9; i++)
		{
			locate(x2 + incrementoX, y2+8);
			setColor(GREEN);
			printf("%c", 205);
			incrementoX++;
		}

		locate(x2 + 10, y2+8);
		setColor(GREEN);
		printf("%c", 188);

		incrementoY = 1;
		for (int i = 0; i < 7; i++)
		{
			locate(x2+10, y2 + incrementoY);
			setColor(GREEN);
			printf("%c", 186);
			incrementoY++;
		}
		x2 = x2 + 15;
	}

	

		scanf("f");
}
	



int main(int argx, char** argv)
{
	pintarPantalla();
}

