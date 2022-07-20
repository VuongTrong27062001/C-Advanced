#include <stdio.h>
int FindMax(int array[],int n)
{
    int i,max;
    max = array[0];
    
    for(i=0;i<n;i++)
    {
        if(array[i]>=max)
        {
            max = array[i];
        }
    }
    return max;
}
int FindMin(int array[],int n)
{
    int i,min;
    min = array[0];
    
    for(i=0;i<n;i++)
    {
        if(array[i]<=min)
        {
            min = array[i];
        }
    }
    return min;
}
int main()
{
    int array[] = {1,5,2,0,3,4,8,7,102,19,6};
    int n = sizeof(array)/sizeof(array[0]);
    int max = FindMax(array,n);
    int min = FindMin(array,n);
    printf("So lon nhat : %d\n ", max);
    printf("So be nhat : %d\n ", min);
}