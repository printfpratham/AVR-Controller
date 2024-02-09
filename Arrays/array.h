#include <stdio.h>
//#define ROW 3
//#define COL 4
int ROW, COL;
int arr[ROW]:wq

int arr[ROW][COL]=int arr1[ROW][COL]=int arr2[ROW][COL]= int arr3[ROW][COL]=0
void scanarr(int arr[ROW][COL])
{
	int i,j;
	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			scanf("%d", &arr[i][j]);
		}
	}
}


void printarray(int arr[ROW][COL])
{
	int i,j;
	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
}


void addarr(int arr1[ROW][COL], int arr2[ROW][COL])
{
	int i,j, arr3[ROW][COL];
	for(i=0; i<ROW; i++){
		for(j=0; j<COL;j++){
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	printarray(arr3);
}




