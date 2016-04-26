#include <stdio.h>

int main()

{
   
   float nota1, nota2;
   float media;
   
   printf("\nEntre com nota1\n");
   scanf("%f",&nota1);
   
   printf("\nEntre com nota2\n");
   scanf("%f",&nota2);
   
   media = (nota1+nota2)/2;
   
   if (media<= 5.0)
   {
       printf("\nReprovado!!");
       
   }
     
     else if (media < 7)
    {
        printf("\n Recuperacao!!\n");
        
    } 
     
     else
     {
         printf("\nAprovado!!\n");
     }
     
     
     return 0;
}