#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int answer = 23;
   int num;
   int trial = 0;
   
   do
   {
       //1. input
       printf("Guess a number:");
       scanf("%d", &num);
       
       //2. decision (low/high) (wrong answer)
       if (num > 23)
          printf("high!");
       else if (num < 23)
          printf("low!");
    
       trial = trial + 1;
    }
       while( (num > 23 || num < 23) );
       {
              if(num = 23);
       }
          printf("congratulation!\n");
       //3. loop condition : answer is equal to num??

       
    system("PAUSE");	
    return 0;
}

    
