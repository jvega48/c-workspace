#include<stdio.h>
int num, temp, tempTwo = 10000, i;

int main(void) {

	printf("Enter a 5 digit number: ");
	scanf_s("%d", &num);

	for (i = 0; i < 5; i++) {
		temp = num % tempTwo;
		num = num / tempTwo;
		printf("This is the number individualy: %d \n", num);
		num = temp;
		tempTwo = tempTwo / 10;
	}

	system("pause");

}