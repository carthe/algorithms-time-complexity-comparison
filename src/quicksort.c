#include<time.h>
#include<stdlib.h>
#include<stdio.h>

//fukncja partition
int partition(int tab[], int p, int r){
   int median;
   median = (p + r) / 2;
	array_swap(tab, median, r);

   int pivot = tab[r];
   int smaller = p;

   for(int j = p; j <= r-1; j++){
      if(tab[j] <= pivot){
         array_swap(tab, smaller, j);
         smaller++;
      }
   }
   array_swap(tab, smaller, r);
   return smaller;
}

//funkcja quicksort
void quicksort(int tab[], int p, int r){
   if(p<r){
      int q=partition(tab, p, r);
      quicksort(tab, p, q-1);
      quicksort(tab, q + 1, r);
   }
}