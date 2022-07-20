#include <stdio.h>
#include <stdint.h>
#include <String.h>
int remake_atoi(char *str)
{
    int val=0;
    int i;
    for(i=0;;i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            val=val*10 + (str[i]-48);
        }
        else
        {
            break;
        }
    }
    return val;
}
int main(int argc, char const *argv[])
{
    char String[20]="27062001";
    printf("%d",remake_atoi(String));
    return 0;
}