#pragma once 
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>



typedef struct data
{
	char answer1[200];
	char answer2[200];
	char answer3[200];
	char answer4[200];
	char rightanswer[200];
	char question[400];
}component;

typedef struct spisok{
	component a;
	struct spisok *next;
	struct spisok *prev;
}list;

struct randomizer{
	int rndm_num;
	int num;
};

typedef struct option
{
	int sec;
	int min;
	int qvstns;
	char password[30];
	char login[30];
}optns;

static ref class Header
{
public:
	static System::String^ username;
};

