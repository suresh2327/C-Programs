#include <stdio.h>
int mini(arr, a);
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = mini(arr, a);
    printf("%d", min);bcs 
    d
    
}
int mini(int arr[], int a)
{
    int sl = arr[0];
    for (int i = 1; i < a; i++)
    {
        if (arr[i] < sl)
        {
            sl = arr[i];
        }
    }
    return sl;
}