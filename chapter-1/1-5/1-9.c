#include <stdio.h>

int main(){
	int c;

	while((c = getchar()) != EOF){
		if((c == ' ') && (prev == ' ')){
			;
		}
		else{
			putchar(c);
		}
		prev = c;
	}

}