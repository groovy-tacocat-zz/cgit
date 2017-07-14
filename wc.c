#include<stdio.h>

#define IN 1
#define OUT 0

int main()
{

    //Exercise 1.12
    //Write a program that prints its input one word per line
    int c, state;

    state = OUT;

    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if(state == OUT)
        {
            state = IN;
            while(state == IN)
            {
                putchar(c);
                c = getchar();
                if(c == ' ' || c == '\n' || c == '\t')
                {
                    state = OUT;
                }
            }
            printf("\n");
        }
    }

    return 0;
}
