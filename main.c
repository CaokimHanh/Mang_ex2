#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ary[10];
	int i, high, total;
	for (i=0; i<10; i++)
	
	{ printf("\nEnter value: %d: ", i+1);
	scanf("%d", &ary[i]);
	}
	high = ary[0];
	for (i=1; i<10; i++)
	{
if (ary[i]>high)
high = ary[i];
	}
	printf("\nGia tri lon nhat: %d", high);
	
	for(i=0, total=0; i<10; i++)
	total = total+ary[i];
	printf("\nTrung binh cong : %d", total/i);
	
	return 0;
}
