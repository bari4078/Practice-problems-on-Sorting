#include <stdio.h>
#include <string.h>
int main()
{
    char str[200],out[200];
    scanf("%s",str);
    int n=strlen(str),out_size;
    int i,j;
    for(i=0;i<n;i++)
    {
        out[out_size++] = str[i];
        j=i+1;
        int count=1;
        while(str[j] == str[i])
        {
            count++;
            j++;
        }
        out[out_size++] = count+'0';
        i=j-1;
    }
    out[out_size]='\0';
    printf("%s\n",out);
    if(out_size>n) printf("%s",str);
    return 0;
}