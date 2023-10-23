//Reverse Order Using a Pointer:
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr + 4;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *ptr);
        ptr--;
    }
    printf("\n");

}


