#include <stdio.h>

int main()
{
	/** newline = \n
	 *  tab =t
	 * 	blanks = \0
	 * 
	 * **/ 

	int c = 0;
	int nl = 0;
	int tab = 0; 
	int blanks = 0;
	while((c = getchar()) != EOF){
		if(c == '\n'){
			++nl;
		}
		else if(c == '\t'){
			++tab;
		}
		else if(c == ' '){
			++blanks;
		}
	}

	
	printf("%3s %6s %9s\n", "Blanks", "Tabs", "Newlines");
	printf("%3d %6d %9d\n", blanks, tab, nl);

}