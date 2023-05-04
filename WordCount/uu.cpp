#include<stdio.h>
#include <stdlib.h>

int main()
{
	int count = 0;
	int word = 0;
	char ch;
	FILE* fp;
	errno_t err;
	err = fopen_s(&fp, "D:\test.txt", "r");
	if (!fp)
	{
		printf("error!");
		exit(1);
	}
	while ((ch = getc(fp)) != EOF)
	{
		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch == ' ' || ch == '\n' || ch == '\t' || ch == ',')
		{
			count++;
		}
		if (ch == ' ' || ch == ',')
		{
			word++;
		}
	}
	printf("char is %d\n", count);
	printf("word is %d", ++word);
	fclose(fp);

}
