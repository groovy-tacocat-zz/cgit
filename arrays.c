#include<stdio.h>

int main()
{
    int c, i, wordLength, printNum, val;

    int lengthArray[10];

    wordLength = 0;
    val = 0;

    for(i = 0; i < 10; ++i)
    {
        lengthArray[i] = 0;
    }

    while((c = getchar()) != EOF)
    {
        while((c = getchar()) != ' ' || (c = getchar()) != '\n')
        {
            ++wordLength;
        }

        ++lengthArray[wordLength];

        wordLength = 0;
    }

    
    for(i = 0; i < 10; ++i)
    {
        for(printNum = 0; printNum < lengthArray[i]; ++printNum)
        {
            if(lengthArray[i] > 0)
            {
                printf(" ");
            }
        }
        
        printf(" |Frequency:%2d Number of Letters:%d\n", lengthArray[i], i);
    }


    return 0;
}
