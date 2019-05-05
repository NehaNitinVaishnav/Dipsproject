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

dips 
neha shubham Vaishnav
