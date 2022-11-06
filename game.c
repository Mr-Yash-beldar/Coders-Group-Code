#include <stdio.h>
void main()
{

    int players[5][2] = {{1, 2},{3, 4},{5,6},{7,8},{9,10}};
    int news[5][2];
    int j, i;
      int plus = 0;
        int add = 0;
    for (i = 0; i < 5; i++)
    {
      
        // score=0;
        for (j = 0; j < 2; j++)
        {
            printf("%d   ", players[i][j]);
        }
       printf("\n");
    }
    printf("\n\n");
    for (i = 0; i < 5; i++)
    {
       

        for (j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                plus = plus + players[i][j];
                news[i][j] = plus;
            }
            else
            {
                add = add + players[i][j];
                news[i][j] = add;
            }
        }
      
    }
        for (i = 0; i < 5; i++)
    {
      
        
        for (j = 0; j < 2; j++)
        {
            printf("%d  ",news[i][j]);
        }
        printf("\n");
    }
}
