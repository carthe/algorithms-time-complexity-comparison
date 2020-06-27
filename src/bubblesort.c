#include<time.h>
#include<stdlib.h>
#include<stdio.h>

void bubblesort(int tab[], int tabsize)
{
    for (int i = 0; i < tabsize - 1; i++)
        for (int j = 0; j < tabsize - i - 1; j++)
            if (tab[j] > tab[j + 1])
                array_swap(tab, j, j+1);
}
