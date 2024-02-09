#include<stdio.h>
void magicmat(int n, int matrix[n][n]);
void printmat(int n, int marix[n][n]);

//----------------------------------------------------------------------------------------
void magicmat(int n, int matrix[n][n]){
	for(int i=0; i<n; i++){
		for(int j; j<0; j++){
			matrix[i][j]=0;
		}
	}
int i = n/2;
int j = n-1;

for(int num= 1; num<=n*n;){
	if(i== -1 && j == n){
		j = n-2;
		i=0;
	}
	else{
		if(j==n)
			j=0;
		if(i<0)
			i=n-1;
	}

	if(matrix[i][j] != 0){
		j-=2;
		i++;
		continue;
	}
	else{
		matrix[i][j] = num++;
	}

	j++;
	i++;
}
}

void printmat(int n, int matrix[n][n]){
	printf("Magic Square of order %d: \n", n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%5d", matrix[i][j]);
		}
		printf("\n");
	}
}

//------------------------------------------------------------

int main()
{
int n;
printf("Enter the order of matrix: ");
scanf("%d", &n);

if(n%2==0){
	printf("Matrix order must be odd\n");

	return 1;
}

int matrix[n][n];

magicmat(n,matrix);
printmat(n,matrix);

return 0;
}






