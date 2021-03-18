#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);

    char a[n][1000],p[1000];

    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }

    for(i=1;i<n;i++)
    {
        if(strcmp(a[i-1],a[i])>0)
        {
            strcpy(p,a[i]);
            strcpy(a[i],a[i-1]);
            strcpy(a[i-1],p);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",a[i]);
    }
}
