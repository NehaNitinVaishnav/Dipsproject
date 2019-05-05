#include <stdio.h>
void table(int n);
int table_no(int n, int c);
int main(void)
{
	int no,ans, i;
	printf("\n enter no :: ");
	scanf("%d", &no);

	table(no);

	printf("\n table of %d in main \n", no);
	for(i=1; i<10; i++)
	{
		printf("\n %d * %d = %d", no, i, table_no(no, i));
	}
	return 0;
}
void table(int n)
{
	int counter;
	printf("\n table of %d in function table \n", n);
	for(counter=1; counter<=10; counter++)
	{
		printf("%3d*%3d=%3d\n", n, counter, n*counter);
	}
	return;
}
int table_no(int n, int c)
{
	int temp=n*c;
	return temp;
}
