#include <stdio.h>
#define ROW 3
#define COL 3
void scanarr(int arr[ROW][COL]);
void printarr(int arr[ROW][COL]);
int transpose(int arr[ROW][COL], int arr1[ROW][COL]);
int add(int arr[ROW][COL], int sum[ROW][COL]);

int main()
{
	int arr1[ROW][COL], arr2[ROW][COL],arr3[ROW][COL],arr4[ROW][COL],i,j;
	printf("Enter array 1: \n");
	scanarr(arr1);
	printf("Entered array is: \n");

	printarr(arr1);



	printf("\n");

//	printf("Enter array 2: \n");
//	scanarr(arr2);


	/*for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			arr2[j][i]=arr1[i][j];
		}
	}*/

	transpose(arr1, arr2);
	transpose(arr2, arr3);


	printf("Transposed array is \n");

	printarr(arr2);

	//printarr(arr1);

printf(" \n");

//	printarr(arr3);

printf("Addition of arrays is\n");

add(arr1,arr4);


	printf(" \n");
	printarr(arr4);

	

}

//--------------------------------------------------------------------------
void scanarr(int arr[ROW][COL])
{
	int i, j;

for(i=0; i<ROW; i++){
	for(j=0; j<COL; j++){
		scanf("%d", &arr[i][j]);
	}
}

}

//----------------------------------------------------------------------------
void printarr(int arr[ROW][COL]){
	int i,j;
for(i=0; i<ROW; i++){
	for(j=0; j<COL; j++){
		printf("%5d", arr[i][j]);
	}
printf("\n");
}
}


//--------------------------------------------------------------------------
int transpose(int arr[ROW][COL], int arr1[ROW][COL]){
	int i,j;
	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			arr1[j][i]=arr[i][j];
		}
	}


}
			
int add(int arr[ROW][COL],int sum[ROW][COL]){
	int i,j;
	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			sum[i][j]=arr[i][j]+arr[j][i];
		}
	}
}



