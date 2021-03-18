#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);

    char a[n][1000],p[1000],c,b[n],s;

    for(i=0; i<n; i++)
    {
        scanf("%s",a[i]);
        b[i] = a[i][0];
        c = toupper(a[i][0]);
        a[i][0] = c;

    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(strcmp(a[j],a[j+1])<0)
            {
                strcpy(p,a[j+1]);
                strcpy(a[j+1],a[j]);
                strcpy(a[j],p);
                s = b[j+1];
                b[j+1] = b[j];
                b[j] = s;
            }
        }
    }
    for(i=n-1;i>=0;i--)
    {
        a[i][0] = b[i];
        printf("%s\n",a[i]);
    }


    return 0;

}
