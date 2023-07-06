#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void bubble_sort(int *a, int n);
void display(int a[], int n);
_Bool is_sorted(int a[], int n);

void bubble_sort(int *a, int n)
{
    _Bool swapped = 0;

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;
            }
        }

        if (swapped == 0)
            break;
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
        printf("%d\n", a[i]);

        if (a[i] > a[i + 1])
            return 0;
    }
    return 1;
}

int main()
{
    int a[] = {20, 0, 12, 2, 7, -1, 1};
    int size = 7;

    bubble_sort(&a, size);
    display(a, size);

    assert(is_sorted(a, size) == 1);

    return EXIT_SUCCESS;
}