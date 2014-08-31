#include "decimalToHex.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *decimalToHex(unsigned long long number)
{
	unsigned long long module;
	char *hex = malloc(sizeof(char));
	int i=-1;

	do
	{
		module=number%16;
		number/=16;
		i++;
		switch(module)
        {
            case 10:
            	hex[i]='A';
              break;
            case 11:
            	hex[i]='B';
              break;
            case 12:
            	hex[i]='C';
              break;
            case 13:
            	hex[i]='D';
              break;
            case 14:
            	hex[i]='E';
              break;
            case 15:
            	hex[i]='F';
              break;
            default:
            	hex[i]=module+'0';
              break;
        }
	}while(number >16);
	hex[++i]=number+'0';
	return hex;
}

void reverseString(char *string)
{
	int i=0;
	int sizestring=strlen(string);
	char save;

	for (i=0;i<--sizestring;i++)
	{
		save=string[sizestring];
		string[sizestring]=string[i];
		string[i]=save;
	}
}
