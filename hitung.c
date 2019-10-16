#include <stdio.h>
#include <string.h>

int main()
{
	char ch;
	char file[100];
	int i;
	int hitung = 1;

	scanf("%s", file);
	
	FILE *fsumber;
	fsumber = fopen(file, "r");

	if(fsumber == NULL)
	{
		printf("Maaf, file kosong.");
	}
	else
	{
		ch = fgetc(fsumber);
		
		while(ch != EOF)
		{
			if(ch == ' ' || ch == '\n')
			{
				hitung++;
			}
			
			ch = fgetc(fsumber);
		}

		printf("Kata yang terdapat dalam file %s sebanyak: %d\n", file, hitung);
	}

	fclose(fsumber);
	
	return 0;
}

