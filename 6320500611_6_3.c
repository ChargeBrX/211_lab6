#include <stdio.h>
int main()
{
    int n,q,i,x=0,z,j,maxx,k=0;
    char od;

    scanf("%d %d",&n,&q);

    int a[n],max[q];

    for(i=0; i<n; i++)
    {
        a[n] = 0;
    }

    do
    {
        scanf(" %c %d %d",&od,&i,&z);
        if(od == 'U')
        {
            a[i-1] = z;
            printf("%d\n",a[i-1]);
        }
        else
        {
                printf("%d %d %d\n",i-1,i,z-1);
                maxx = a[i-1];
                for(j=i;j<z-1;j++)
                {
                    if(maxx<a[j])
                    {
                        maxx = a[j];
                    }
                }
                max[k] = maxx;
                printf("%d\n",max[k]);
                k++;

        }
        x++;
    }
    while(x<q);

}
