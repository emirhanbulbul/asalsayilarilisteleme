#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int i,j;
int sayac=0;
for(i=5;i<100;i++)
{
	for(j=i;j>1;j--)
	{
	if(i%j==0)
	{
		sayac=sayac+1;
	}
	}
	if(sayac==1)
	{
		printf("%d\n",i);
	}
	sayac=0;
}
	return 0;
}
