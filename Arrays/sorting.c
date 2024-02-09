#include <stdio.h>
void swap(int arr[], int a, int b)
{
	int temp=arr[a];
	arr[a]=arr[b];
	arr[b]=temp;
}

void bubble(int arr[], int size)
{
	for(int i=0; i<size-1; i++)
		for(int j =0;j<size-i-1; j++)
			if(arr[j] > arr[j+1])
				swap(arr,j,j+1);



}

void printarray(int arr[], int size)
{
	for(int i=0; i<size; i++)
		printf("%d ", arr[i]);
	printf("\n");


}

int main()
{
int n;
int number[n];

printf("Enter the array size: \n");
scanf("%d",&n);

printf("Enter the array values: \n");

for(int i=0; i<n; i++){
	scanf("%d", &number[i]);
}

//int size = sizeof(number) / sizeof(number[0]);

int size = n;

printf("Original array: \n");
printarray(number, size);

bubble(number,size);

printf("Sorted arrays: \n");
printarray(number, size);
return 0;
}
