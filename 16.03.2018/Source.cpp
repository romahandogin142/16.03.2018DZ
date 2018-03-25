#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include <Windows.h>
#include <string>
#include "Header.h"

using namespace std;
unsigned short int nz;

int i, j;

#define MAX 50
#define MIN 12

enum city
{
	Almaty, Astana
};

struct address
{
	city city;
	char region[MAX];
	char streetName[MAX];
	int house;
	int app;
	int zip;
};

struct student {
	char fname[MAX];char lname[MAX];char dateofberth[MIN];int Age;struct address address;city city;
};

void printStudentInfo(struct student * student)
{
	printf("Info o studente: \n");
	printf("--> %s %s \n",student->fname, student->lname);
	printf("\n---------------------------------\n");
}

void printStudentInfo(struct student * student,int count)
{
	printf("Spisok postupivshih: \n");
	printf("\n---------------------------------\n");
	printf("Itogo: %d postupivshih\n\n\n", count);
}

void sl(int age)
{
	if (age > 18)
	{
		printf("Vy slishkom molody\n");
	}
}

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, ".1251");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	while (true)
	{
		cout << "Введите номер задания (0 - что бы выйти) : ";
		cin >> nz;
		cin.get();

		if (nz == 0)
		{
			break;
			system("exit");
		}

		else if (nz == 1)
		{
			system("cls");
			struct student konstantin {
				"Kostya", "Klyukin", "20.01.1996", 22
			};

			student ivan{
				"Ivan","Mahlay"
			};

			printf("Student #1 %c %s - %s\n", konstantin.fname[1], konstantin.lname, konstantin.dateofberth);
			printf("Student #2 %s %s\n", ivan.fname, ivan.lname);


		}

		else if (nz == 2)
		{
			system("cls");
			struct student students[1];

			students[1].address.region, "Alm.obl";

			int count = 0;
			int index;
			printf("Vvedite imya 1-go studenta\n");
			while (count < 2 &&
				gets_s(students[count].fname) != '\0'&&
				students[count].fname[0] != NULL)
			{
				printf("Vvedite failiyu studenta\n");
				gets_s(students[count].lname);

				printf("Vvedite vozrast\n");
				scanf("%d", &students[count].Age);

				while (getchar() != '\n')
					continue;

				count++;

				if (count < 2)
					system("cls");
				printf("Vvedite imya %d studenta\n", count + 1);

			}
			system("cls");
			printf("\n\n---------------------------------\n\n");
			if (count > 0)
			{
				printf("Spisok postupivshih: \n");
				for (int i = 0; i < 2; i++)
				{
					printStudentInfo(&students[i]);
					/*printf("--> #%d. %s %s \n", i + 1, students[i].fname, students[i].lname);*/
				}
				printf("\n---------------------------------\n");
				printf("Itogo: %d postupivshih\n\n\n", count);
			}
		}

		else if (nz == 3)
		{

		}

		else
		{
			printf("Такого задания нет!");
			exit(EXIT_FAILURE);
		}
	}
}
