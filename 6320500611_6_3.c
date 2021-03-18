#include <stdio.h>
int main()
{
    int n,q,i,x=0,z,j,maxx,k=0;
    char od;

    scanf("%d %d",&n,&q);

    int a[n],max[q];

    for(i=0; i<n; i++)
    {
        a[i] = 0;
    }

    do
    {
        scanf(" %c %d %d",&od,&i,&z);
        if(od == 'U')
        {
            a[i-1] = z;
        }
        else
        {
                maxx = a[i-1];
                for(j=i;j<z;j++)
                {

                    if(maxx<a[j])
                    {
                        maxx = a[j];
                    }
                }
                max[k] = maxx;
                k++;

        }
        x++;
    }
    while(x<q);

    for(i=0;i<k;i++)
    {
        printf("%d\n",max[i]);
    }

}
