#include<stdio.h>

int main()
{
    /* Exercise 1.8
       Write a program to count blanks tabs and newlines
    int c, nl, bl, t;

    nl = 0;
    bl = 0;
    t = 0;

    while((c = getchar()) != EOF)
    {
        if(c == '\n')
        {
            ++nl;
        }
        else if(c == '\t')
        {
            ++t;
        }
        else if(c == ' ')
        {
            ++bl;
        }
    }

    printf("newlines: %-3d\ntabs: %-3d\nblanks: %-3d\n", nl, t, bl);
    */

    /*Exercise 1.9
      write a program to copy its input to its output, replacing each string of one or more blanks by a single blank
     
     Look at your program as a machine that moves between different states as it iterates over the input.

     It reads the input one character at a time. If it sees anything other than a blank, it just prints the character it sees. If it sees a blank, it shifts to a different state. In that state, it prints one blank, and then doesn't print blanks if it sees them. Then, it continues reading the input, but ignores all blanks it sees--until it hits a character that isn't a blank, at which point it shifts back to the first state.
     
     */
    int c, bl;

    bl = 0;

    while((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            putchar(c);

            while((c = getchar()) == ' ')
            {
                    c = getchar();
            }

        }

        putchar(c);
    }

    return 0;
}
