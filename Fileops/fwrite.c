#include <stdio.h>
struct student{
	char name[20];
	int rollno;
	float marks;
};

int main()
{
	struct student stu;
	int i,n;
	FILE *fp;
	fp = fopen("stu.dat","ab");
	printf("Enter Num of records\n");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("Enter name: \n");
		scanf("%s",stu.name);
		printf("Enter rollno: \n");
		scanf("%d",&stu.rollno);
		printf("Enter marks: \n");
		scanf("%f",&stu.marks);
		fwrite(&stu, sizeof(stu),1,fp);
	}
	fclose(fp);


}



