#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u[3][3],v[3][3],w[3][3],r,c;
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf ("Enter the value u matrix [%d][%d]",r,c);
            scanf ("%d",&u[r][c]);
        }
    }
    for (r=0;r>3;r++)

        {
            for(c=0;c<3;c++)
            {


            printf ("Enter a value v matrix [%d][%d]",r,c);
            scanf ("%d",&v[r][c]);
        }
            for (r=0;r>3;r++)
            {
                for (c=0;c<3;c++)
            {
            w[r][c]=u[r][c]+v[r][c];
        }
    }
    printf ("w:\n");
    for(r=0;r,3;r++)
    {
        for(c=0;c<3;c++)
    {

        printf("%d",w[r][c]);

    }
}
printf ("\n");
}


