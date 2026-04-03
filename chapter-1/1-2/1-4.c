#include <stdio.h>

int main()
{
	float fahr = 0;
	float celsius = 0;

	float lower = 0;
	float upper = 300;
	int step = 20;

	printf("%4s %6s\n", "C", "F");

	while(celsius <= upper){
	fahr = (celsius * (9.0/5.0)) + 32;
	printf("%4.1f %6.0f\n", celsius, fahr);
	celsius = celsius + step;
	}
}