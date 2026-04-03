#include <stdio.h>

int main()
{

	printf("%3s %6s\n", "F", "C");
	for(float fahr = 300; fahr >= 0; fahr = fahr - 20){
		printf("%3.0f %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
	}

}