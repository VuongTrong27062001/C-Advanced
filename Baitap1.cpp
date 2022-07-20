#include <stdio.h>
#include <stdint.h>

uint8_t compare2array(char mang1[], char mang2[])
{
    int i,j;
    i =0; j=0;
    while(mang1[i]!='\0')
    {
        i++;
    }
    while(mang2[j]!='\0')
    {
        j++;
    }
    printf("i:%d j:%d",i,j);
    if ( i ==j )
        return 1;
    else
        return 0;
}
int main()
{
    
    char chuoi1[] = "Vuong Duc Trong";
    char chuoi2[] = "Vuong Duc Trong";
    int sosanh = compare2array(chuoi1,chuoi2);
    if (sosanh==1)
    {
        printf("Chuoi 1 bang chuoi 2");
    }
    else
    {
        printf("Chuoi 1 khac chuoi 2");
    }
    return 0;
}