#include <stdio.h>
#define ROW 3
#define COL 4
int main()
{
int mat[ROW][COL], i,j;
printf("Enter the elements of matrix(%d x %d): \n", ROW, COL);
for(i=0 ; i<ROW; i++){
	for(j=0; j<COL; j++){
		scanf("%d",&mat[i][j]);

	}
}
printf("The matrix is: \n");

for(i=0; i<ROW; i++){
	for(j=0; j<COL; j++)
		printf("%5d", mat[i][j]);
				printf("\n");
}
printf("\n");
}
