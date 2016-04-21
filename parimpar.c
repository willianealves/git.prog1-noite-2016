#include <stdio.h>

int main()

{
    int num , resto;
    
    printf("\n Entre com numero inteiro");
    scanf("%d", &num);
    
    resto=num %2;
    
    if(resto == 1)
    
{    
  printf("\n Este numero eh impar");
  
}
else
{
    printf("\Este numero eh par");
    
}
    
    
   return 0; 
}