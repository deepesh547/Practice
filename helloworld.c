#include<stdio.h>
int main() {
	int a=1,b=2;
	printf("Hello World!\n");
	printf("The sum is %d\n",add(1,2));
	swap(&a, &b);
	printf("The diff is %d\n",sub(2,1));
	printf("The multiplication is %d\n",multi(2,1));
	printf("the division is %d", divide(a, b));
	return 0;
	
	
 }
int modulus(int a, int b){
	if(b==0)
		return 0;
	return a%b;
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
int sub(int a ,int b)
{
	return (a-b);
}
int multi(int a ,int b)
{
	return(a*b);
}
// a/b
int  divide(int a, int b) {
	if (b != 0) {
		return a/b;
	} else {
		printf("unable to divide!")
	}
}
