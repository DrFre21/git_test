#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	while (i<20)
	{
		printf("%d\r\n",i++);
		sleep(1);
	}
}
