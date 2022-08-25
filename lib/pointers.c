//
// Created by Josean Camarena on 07/07/22.
// Implemented by: Alberto Rentería
//

#include "pointers.h"

//Funcion swap para los algoritmos de ordenacion
void swap(int *a, int *b)
{
    int pivote = *a;
    *a = *b;
    *b = pivote;
}

int bubble_sort(int *collection, int count)
{
    int swap_count = 0;
    for (int i = 0; i < count; i++)
    {
        for (int k = 0; k < (count - 1); k++)
        {
            if (*(collection+k) > *(collection+k+1))
            {
                swap((collection+k), (collection+k+1));
                swap_count++;
            }
        }
    }

    return swap_count;
}

void insertion_sort(int *collection, int count)
{
    int swap_count = 0;
    for (int i = 1; i < count; i++)
    {
        int *to_place = collection + i;
        int k = 1;
        while (*to_place < *(to_place-1) && (to_place-1) >= collection)
        {
            swap(to_place, (to_place-k));
            to_place--;
            swap_count++;
        }
    }
}

void reverse(int *collection, int count)
{
    int prom = count/2;
    int i, j;
    for (i = 0, j = count - 1; i < prom; i++, j--)
    {
        swap(collection + i,collection + j);
    }

}

int calulate_frequency(int *collection, int count, int target)
{
    int fqy_count = 0;
    for (int i = 0; i < count; i++)
    {
        if (*(collection+i) == target)
        {
            fqy_count++;
        }
    }
    return fqy_count;
}
