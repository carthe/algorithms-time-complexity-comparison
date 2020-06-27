#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include "array.c"
#include "heapsort.c"
#include "quicksort.c"
#include "bubblesort.c"

int main(int argc, char *argv[]){
    printf("\n** Sorting algorithms comparator **\n");

    //parse argument
    int tabsize = atoi(argv[1]);
	int array[tabsize];

    clock_t clock_begin;
    clock_t clock_end;
    double elapsedtime;

    //populate array
    srand( time( NULL ) );
	for (int i=0; i < tabsize; i++)
	    array[i] = rand() % tabsize;

    int array_h[tabsize];
    array_copy(array, array_h, tabsize);
    int array_q[tabsize];
    array_copy(array, array_q, tabsize);
    int array_b[tabsize];
    array_copy(array, array_b, tabsize);
    
    //
    //  HEAPSORT
    //
    clock_begin = clock();
    heapsort(array_h, tabsize);
    clock_end = clock();

    elapsedtime = (double)(clock_end - clock_begin) / CLOCKS_PER_SEC;
    printf("Sorted in %f seconds using heapsort on random array\n", elapsedtime);
    

    clock_begin = clock();
    heapsort(array_h, tabsize);
    clock_end = clock();

    elapsedtime = (double)(clock_end - clock_begin) / CLOCKS_PER_SEC;
    printf("Sorted in %f seconds using heapsort on sorted array\n", elapsedtime);

    //reverse array
    array_reverse(array_h, tabsize);

    clock_begin = clock();
    heapsort(array_h, tabsize);
    clock_end = clock();

    elapsedtime = (double)(clock_end - clock_begin) / CLOCKS_PER_SEC;
    printf("Sorted in %f seconds using heapsort on reversed array\n", elapsedtime);
    
    printf_s("\n");

    //
    //  QUICKSORT
    //
    clock_begin = clock();
    quicksort(array_q, 0, tabsize-1);
    clock_end = clock();

    elapsedtime = (double)(clock_end - clock_begin) / CLOCKS_PER_SEC;
    printf("Sorted in %f seconds using quicksort on random array\n", elapsedtime);
    

    clock_begin = clock();
    quicksort(array_q, 0, tabsize-1);
    clock_end = clock();

    elapsedtime = (double)(clock_end - clock_begin) / CLOCKS_PER_SEC;
    printf("Sorted in %f seconds using quicksort on sorted array\n", elapsedtime);

    //reverse array
    array_reverse(array_q, tabsize);

    clock_begin = clock();
    quicksort(array_q, 0, tabsize-1);
    clock_end = clock();

    elapsedtime = (double)(clock_end - clock_begin) / CLOCKS_PER_SEC;
    printf("Sorted in %f seconds using quicksort on reversed array\n", elapsedtime);
    
    printf_s("\n");

    //
    //  BUBBLESORT
    //
    clock_begin = clock();
    bubblesort(array_b, tabsize);
    clock_end = clock();

    elapsedtime = (double)(clock_end - clock_begin) / CLOCKS_PER_SEC;
    printf("Sorted in %f seconds using bubblesort on random array\n", elapsedtime);
    

    clock_begin = clock();
    bubblesort(array_b, tabsize);
    clock_end = clock();

    elapsedtime = (double)(clock_end - clock_begin) / CLOCKS_PER_SEC;
    printf("Sorted in %f seconds using bubblesort on sorted array\n", elapsedtime);

    //reverse array
    array_reverse(array_b, tabsize);

    clock_begin = clock();
    bubblesort(array_b, tabsize);
    clock_end = clock();

    elapsedtime = (double)(clock_end - clock_begin) / CLOCKS_PER_SEC;
    printf("Sorted in %f seconds using bubblesort on reversed array\n", elapsedtime);
    
    printf_s("\n");



    return 0;
}