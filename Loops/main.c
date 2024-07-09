#include <stdio.h>

int main()
{
  printf("Hello World\n");
    
  char name[100];
  for(int i = 0; i < 10; i++)
  {
    printf("%d\t",i);
  }
  printf("\n\n");  
  
  printf("Enter your name:\t");
  scanf("%s",name);
  printf("Hi %s\n",name);
  return 0;

}
