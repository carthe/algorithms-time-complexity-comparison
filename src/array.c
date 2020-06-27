#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void array_print(int tab[], int tabsize) {   
	printf("tab = [");
	for (int i = 0; i < tabsize - 1; i++)
		printf("%d, ", tab[i]);
	printf("%d]\n", tab[tabsize - 1]);
}

void array_reverse(int tab[], int tabsize) {
    int tab_temp[tabsize];

    for(int i = 0; i < tabsize; i++){
        tab_temp[tabsize - 1 - i] = tab[i];
    }

    for(int i = 0; i < tabsize; i++){
        tab[i] = tab_temp[i];
    }
}

void array_swap(int tab[], int a, int b) {
    if (a == b) {
        return;
    }
    int temp = tab[a];
    tab[a] = tab[b];
    tab[b] = temp;
}

void array_copy(int source[], int destination[], int tabsize) {
    for(int i=0; i < tabsize; i++)
        destination[i] = source[i];
}


