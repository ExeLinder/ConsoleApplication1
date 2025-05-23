#include "Write.h"
#include<iostream>


void write(const char* filename, const char* str)
{
	FILE* fp;

	fopen_s(&fp, filename, "w");

	if (fp != nullptr)
	{
		fputs(str, fp);

		std::cout << "OK";

		fclose(fp);
	}
	else
	{
		std::cout << "ERROR";
	}
}
