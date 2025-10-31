#include <stdio.h>

int main(void)
{
    int k;
    printf("what is the score for modern literature?");
    scanf("%d", &k);
    int j;
    printf("what is the score for ancient text?");
    scanf("%d", &j);
    int i;
    i = k + j;
    printf("the total is: %d\n", i);
    
    if(i>=40)
    {
        printf("比較的に得意な人です");    
    }
    else if(i>=20)
    {
        printf("苦手な人です");
    }
    
    else
    {
        printf("やばい人です");
    }
    
    return 0;