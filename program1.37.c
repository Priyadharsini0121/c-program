#include<stdio.h>
void main()
{
    int mark;
    printf("enter your mark:\n");
    scanf("%d",mark);
    if(mark>85&&mark<=100)
    {
        printf("grade A");
    }
    else if(mark>70&&mark<=85)
    {
        printf("grade B");
    }
    else if(mark>50&&mark<=70)
    {
        printf("grade C");
    }
    else
    {
        printf("grade fail");
    }
}
