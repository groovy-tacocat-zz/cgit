#include<stdio.h>

#define MAXLINE 1000

int getLine(char s[], int lim);
void copy(char to[], char from[]);
void reverse(char r[]);

int main()
{
    int len;
    char line[MAXLINE];
    char rev[MAXLINE];

    while((len = getLine(line, MAXLINE)) > 0)
    {
//        copy(rev, line);
//        reverse(rev);
        reverse(line);
    }
 
    return 0;
}

int getLine(char s[], int lim)
{
    int c, i;

    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }

    if(c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}


void copy(char to[], char from[])
{
    int i;

    i = 0;
    
    while((to[i] = from[i]) != '\0')
    {
        ++i;
    }

}


void reverse(char r[])
{
    int n, p, q;

    char swap;

    n = 0;

    while(r[n] != '\0')
    {
        ++n;
    }

    q = n - 2;

    for(p = 0; p < q; ++p)
    {
        swap = r[q];
        r[q] = r[p];
        r[p] = swap;

        --q;
    }

    printf("Reversed string is: %s", r);
}

/*
   Reverse was pretty hard. First couple attempts involved trying to reverse iterate a for loop and assign the string that way but couldn't get it to work. 

   second guess sort of thought of swap idiom but couldn't figure out how to execute found some help online

   also got help from ##C with the swap idiom itsself as my for loop originally was swapping everything twice and thus printing an unreversed string and then when it did start working wasn't printing correctly
   */
