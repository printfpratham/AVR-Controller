#include <stdio.h>
#define SIZE 4

int main()
{
int arr[SIZE], i, even=0,odd=0;
printf("Enter numbers in array: \n");
for(i=0; i<SIZE; i++){
	scanf("%d", &arr[i]);
if (arr[i]%2 ==0){
	even++;
}
else{
	odd++;
}
}
printf("Even numbers are: %d\n, odd numbers are: %d\n", even,odd);
}
