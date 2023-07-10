#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void insertion_sort(int *a, int n);
void display(int a[], int n);
_Bool is_sorted(int a[], int n);

void insertion_sort(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i;

        while (j > 0 && a[j - 1] > temp)
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = temp;
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

    insertion_sort(&a, size);
    display(a, size);

    assert(is_sorted(a, size) == 1);

    return EXIT_SUCCESS;
}