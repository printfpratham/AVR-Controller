#include <stdio.h>
int main()
{
	int ch;
	FILE *fp;
	fp = fopen("file.txt", "wb");
	printf("Enter text : \n");
	while((ch=getchar()) != EOF){
		fputc(ch,fp);
		//ch++;
		
	}
		//fputc(ch,fp);
	fclose(fp);
}

