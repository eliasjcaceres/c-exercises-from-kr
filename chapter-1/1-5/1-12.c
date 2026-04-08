#include <stdio.h>

#define IN 1
#define OUT 0

int main(){

    int prevEmpty = 0;
    int c = 0;
    int state = OUT;

    while((c = getchar()) != EOF){

        if((c == ' ' || c == '\n' || c == '\t') && prevEmpty == 0){
            prevEmpty = 1;
            state = OUT;
            putchar('\n');
        }

        else if((c == ' ' || c == '\n' || c == '\t') && prevEmpty == 1){
            state = OUT;
        }

        else if(state == IN){
            putchar(c);
        }

        else if (state == OUT){
            state = IN;
            prevEmpty = 0;
            putchar(c);
        }

    }

}