#include <stdio.h>
#define SIZE 7

//int i, arr[SIZE] = {12,34,1,45,32,55,44};
int main()
{
int i, arr[SIZE] = {12,34,1,45,32,55,44};
int item;
printf("Enter item to search: \n");
scanf("%d", &item);
for (i=0; i<7; i++){
	if(item==arr[i]){
		printf("%d found at %d position\n", item, i+1);
	}
	else{
		break;

	}

}
}
