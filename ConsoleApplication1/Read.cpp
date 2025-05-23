#include "Read.h"
#include<iostream>

void read(const char* filename)
{
	FILE* fp;

	fopen_s(&fp, filename, "r");

	char buffer[20];

	if (fp!=nullptr)
	{
		fgets(buffer,20,fp);

		fclose(fp);

		std::cout << buffer;
	}
	else
	{
		std::cout << "ERROR";
	}

}
