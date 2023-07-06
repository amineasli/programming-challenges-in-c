#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void selection_sort(int *a, int n);
void display(int a[], int n);
_Bool is_sorted(int a[], int n);

void selection_sort(int *a, int n)
{
    int min;

    for (int i = 0; i < n - 1; i++)
    {
        min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        if (min != i) 
        {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}

_Bool is_sorted(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            return 0;
    }

    return 1;
}

int main()
{
    int a[] = {20, 0, 12, 2, 7, -1, 1};
    int size = 7;

    selection_sort(&a, size);
    display(a, size);

    assert(is_sorted(a, size) == 1);

    return EXIT_SUCCESS;
}