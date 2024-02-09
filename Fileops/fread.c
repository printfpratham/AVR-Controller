#include <stdio.h>
struct student{
	char name[20];
	int rollno;
	float marks;
};



int main()
{
	struct student stu;

	FILE *fp;
	fp = fopen("stu.dat","rb");
	printf("\nName\t Rollno\t Marks\n");
	while(fread(&stu,sizeof(stu),1,fp) == 1)
	{
		printf("\n%s\t %d\t %f\n",stu.name,stu.rollno,stu.marks);
		//printf("%d\t\n",stu.rollno);
		//printf("%f\t\n",stu.marks);
	}
	fclose(fp);
}

