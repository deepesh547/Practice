#include<stdio.h>
int main() {
	printf("Hello World!\n");
	printf("The sum is %d",add(1,2));
	swap(&a, &b);
	return 0;
	
 }

int add(int a,int b)
{
	return (a+b);
}

int swap(int *a, int *b) {
	*a = *a + *b;
	*b = *a -*b;
	*a = *a - *b;
}
