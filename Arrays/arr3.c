#include <stdio.h>
int main()
{
	int i,j,temp,arr[5]={2,3,4,5,3};
	for(i=0, j=9; i<j; i++, j--){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	printf("After array reverse: \n");
	for(i=0; i<5; i++){
		printf("%d ", arr[i]);

}

		printf("\n");
}
