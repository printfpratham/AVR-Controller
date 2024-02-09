#include<stdio.h>
int main()
{
	char far *scr;
	scr = 0xB8000000;
	*scr = 'A';
}
