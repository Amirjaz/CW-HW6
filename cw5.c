#include <stdio.h>

int main()
         {
               long long square;
      long long i=0;
      scanf("%lli", &square);
       while(i<=1000000){
            if(square==(i*i)){

        printf("YES", square);
       return 0;
       }

       i++;
       }
       printf("NO", square);
         }
