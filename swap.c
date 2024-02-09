#include<stdio.h>
 #define SWAP (int t , x,y) { int t; t=x, x=y, y=t; }
int main()
{
int a=3, b=4;
SWAP(int,a,b)
printf("a=%d,b=%d\n",a,b);
return 0;

}

