#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void heapify (int heap[], int heapsize, int i)
{
   int largest;
   int l = 2 * (i + 1) - 1;
   int r = 2 * (i + 1);
   if(l <= heapsize - 1 && heap[l] > heap[i])
      largest = l;
   else largest = i;

   if(r <= heapsize - 1 && heap[r] > heap[largest])
         largest = r;

   if(largest != i){
      array_swap(heap, largest, i);
      heapify(heap, heapsize, largest);
      }
}

void heapbuild(int tab[], int tabsize)
{
   for (int i = tabsize/2; i >= 0 ; i--)
      heapify(tab, tabsize, i);
}

void heapsort(int heap[], int heapsize)
{
   heapbuild(heap, heapsize);
   for (int i=heapsize ; i > 1;i--)
   {
      array_swap(heap, 0, heapsize - 1);
      heapify(heap, heapsize - 1, 0);
      heapsize--;
   }
}