#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r1,c1,r2,c2;
    printf("Input the rows and columns of first matrix:");
    scanf("%d %d",&r1,&c1);
    printf("Input the rows and columns of second matrix:");
    scanf("%d %d",&r2,&c2);
    int array1[r1][c1];
    int array2[r2][c2];
    int array3[r1][c2];


    printf("Input the elements in the first matrix:");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&array1[i][j]);

        }

    }
    printf("Input the elements in the second matrix:");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&array2[i][j]);

        }

    }
    printf("The first matrix is:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("   %d",array1[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is:\n");
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            printf("  %d",array2[i][j]);
        }
        printf("\n");

    }

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            array3[i][j]=0;
        }

    }


    for(int vr1=0; vr1<r1; vr1++)
    {
        for(int v1=0; v1<c1; v1++)
        {
            for(int vc2=0; vc2<c2; vc2++ )
                array3[vr1][vc2]+=array1[vr1][v1]*array2[v1][vc2];
        }


    }


    printf("The multiplication of two matrices is:\n");
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            printf("  %d",array3[i][j]);
        }
        printf("\n");

    }
}
