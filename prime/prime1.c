#include<stdio.h>
int main()
{
  int i,num;
  printf("ENTER THE NUMBER:\n");
  scanf("%d",&num);
  for(i=2;i<num;i++)
    {
      if(num%i==0)
        break;
    }
  if(num==i)
    printf("PRIME\n");
  else
    puts("NOT PRIME");
  
  
}

