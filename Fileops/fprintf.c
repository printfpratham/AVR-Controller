#include <stdio.h>
struct student{
	char name[10];
	int marks;
};

int main()
{
	
	struct student stu;
	int n,i;
	FILE *fp;
	printf("Enter number of data: ");
	scanf("%d", &n);
	fp = fopen("stu.dat","wb");
	for(i=0; i<n; i++){
		printf("Enter name and marks\n");
		scanf("%s %d",stu.name,&stu.marks);
		fprintf(fp,"Name is %s\n Marks is %d\n",stu.name,stu.marks);
	}
		fclose(fp);
}
		






