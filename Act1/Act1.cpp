#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
char tolower(char*p);
char toupper(char*p);


int main()
{
	char* p, str[100];
	p = str;
	scanf("%[^\n]s", str);
	while (*p != '\0') {
		if (*p >= 'a' && *p <= 'z')
		{
			printf("%c", toupper(*p));
		}
		else if (*p >= 'A' && *p <= 'Z')
		{
			printf("%c", tolower(*p));
		}
		p++;
	}
	return 0;
}

char toupper(char* p)
{
	*p -= 32;
	return *p;
}

char tolower(char* p)
{
	*p += 32;
	return *p;
}
