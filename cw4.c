#include <stdio.h>

int main()
{
     int ss;
     int max=0;
    int min=100000000;
    int inpt, n=0;
    float sum=0;
    while(1)
    {
        scanf("%d", &inpt);
        if(inpt==-1){
            break;
        }
        if(inpt<min)
            {
            min=inpt;
        }
        if(inpt>max)
        {
            max=inpt;
        }
        sum+= inpt;

        n++;

    }
    printf("%d\n", min);
    printf("%d\n", max);
    printf("%.2f", (float)(sum/n));


    return 0;
}
