#include <stdio.h>
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
void Maxtomin(int array[],int n)
{
    int i,j,key;
    for (i=0;i<n;i++)
    {
        key = array[i];
        for(j=i+1;j<n;j++)
        {
           if(array[j]>key)
           {
            swap(array[i],array[j]);
            key=array[i];
           } 
        }
    }
}
int main()
{
    int array[]={1,5,8,12,0,7,4,3};
    int i, n = sizeof(array)/sizeof(array[0]);
    Maxtomin(array,n);
    printf("Mang sap xep: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}