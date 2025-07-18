#include <stdio.h>

int main() {
    int i,j,k;


    for(k=1; k<6; k++)
        {
            printf("\n\nNumber %d:",k);


    for (i=1; i< 11; i++)
    {
        printf(" \n| ");
        for(j=10; j>0; j--)
        {

            printf("%d ",j);

        }
        
        printf("|");
    }



        }

}