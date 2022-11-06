#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
    int player[n],player2[n],top_lead=0,lead1,lead2,winner=0,score;
     for(int i=0;i<n;i++)
    {
        scanf("%d %d\n",&player[i],&player2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        lead1=0;
        lead2 = 0;
        score=0;
        for (int j = 0; j < i+1; j++)
        {
            lead1 = lead1+player[j];
        }
        
        for (int j = 0; j < i+1; j++)
        {
            lead2= lead2+player2[j];
        }
        if (lead1>lead2)
        {
            score = lead1-lead2;
            if(score>top_lead)
            {
                top_lead=score;
                winner=1;
            }
        }
        
        else if (lead2>lead1)
        {
            score = lead2-lead1;
            if(score>top_lead)
            {
                top_lead=score;
                winner=2;
            }
        }

    }
    
    if(winner==1)
    {
        printf("1 %d",top_lead);
    }
    else
    {
        printf("2 %d",top_lead);
    }
    
	return 0;
}