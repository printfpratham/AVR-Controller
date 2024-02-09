#include <stdio.h>

#define ROW 4
#define COL 3
void scanarr(int arr[ROW][COL])
{
	int i, j;
	for(i=0; i<ROW; i++){
		for(j=0;j<COL; j++){
			scanf("%d",&arr[i][j]);
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
	printf(" \n");

	}
	

}

//--------------------------------------------------------------------------------------

int main()

{
	int i,j;
	    
	int arr1[ROW][COL],arr2[ROW][COL],arr3[ROW][COL];
	printf("Enter array 1: \n");
	scanarr(arr1);
	//for(i=0; i<ROW; i++)
	//	for(j=0; j<COL; j++)
	//		scanf("%d",&arr1[i][j]);
	printf("Enter array 2: \n");
	scanarr(arr2);
//	for(i=0; i<ROW; i++)
//		for(j=0; j<COL; j++)
//			scanf("%d", &arr2[i][j]);


	printf("Entered arrays are: \n");

	printarray(arr1);
/*	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			printf("%5d", arr1[i][j]);
		//printf(" \n");
		}
		printf(" \n");
	}

	printf("\n");
*/
	//-------------------------------------------------------------------
	
	printf("\n");
	
	printarray(arr2);
/*	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			printf("%5d", arr2[i][j]);
		//printf("\n");
	}
	printf("\n");
	}

	printf("\n");

	//----------------------------------------------------------
*/
	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
	}

printf("Resultant array:\n");

printarray(arr3);


/*	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			printf("%5d", arr3[i][j]);
		}
		printf("\n");
	}

*/





}
