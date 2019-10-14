
//Page102 in Kerningan!


#include <stdio.h>
#include <string.h> //библиотека для строк

void string_copy(char*, char*);

int main()
{
	char *pmessage;
	char amessage[] = "String"; //Обьявление строки
	int pmessage2 = "000000";
	pmessage = "String";
	printf("TEST");
	while (*(pmessage2++)= *(pmessage++))
	{		
		printf("Copying....\n");
	}
	string_copy (pmessage2, pmessage);
	//strcpy (pmessage2, pmessage);
	printf("%s\n",pmessage2);
	return 0;
}


void string_copy(char* s, char *t)
{
	while (*s++ = t++)
		{
		printf("1\n");
		}
}
