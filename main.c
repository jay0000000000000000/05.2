#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int input;
  
  printf("input an integar:");
  scanf("%d", &input);
  
  if (input<0)
      input = -input;
  
  printf("absolute value is %i\n", input);
       
  system("PAUSE");	
  return 0;
}

    
