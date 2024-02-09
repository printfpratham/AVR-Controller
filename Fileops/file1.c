#include <stdio.h>
int main()
{
	int n;
	FILE *fp;
	fp = fopen("file1.dat","wb");
	for(n=1;n<30;n++)
		putw(n,fp);
	fclose(fp);
	fp = fopen("file1.dat", "rb");
	while((n=getw(fp)) != EOF)
		printf("%d\t",n);
	fclose(fp);
}


