#include <stdio.h>
void imprime()
{ 
  printf("Imprimiendo un message\n"); 
}
int  main()
{
  void (*ptr_funct)(void)=imprime;
  ptr_funct(); //Llama a imprime
  return 0;
 }