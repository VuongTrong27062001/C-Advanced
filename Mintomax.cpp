#include <stdio.h>

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
void Mintomax(int array[],int n)
{
    int i,j;
    for (i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                swap(array[j],array[j+1]);
            }
        }
    }
}
int main()
{
    int array[]={1,5,8,12,0,7,4,3};
    int i, n = sizeof(array)/sizeof(array[0]);
    Mintomax(array,n);
    printf("Mang sap xep: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}