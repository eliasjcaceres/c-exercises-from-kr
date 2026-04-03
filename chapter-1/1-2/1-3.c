#include <stdio.h>

int main()
{
	float fahr = 0;
	float celsius = 0;

	float lower = 0;
	float upper = 300;
	int step = 20;

	printf("%3s %6s\n", "F", "C");

	while(fahr <= upper){
	celsius = (5.0/9.0) * (fahr-32.0);
	printf("%3.0f %6.1f\n", fahr, celsius);
	fahr = fahr + step;
	}
}