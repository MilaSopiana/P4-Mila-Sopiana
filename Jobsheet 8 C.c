#include <stdio.h>
int main ()
{
int x[9],i;
printf("NIM : F1B019090\n");
for(i=0;i<=1;i++)
{
printf("Masukkan Nilai %i : ",i+1);
scanf("%i",&x[i]);
}
printf("\n");
for(i=0;i<=1;i++)
{
printf("Nim ke%i = %i\n",i+1,x[i]);
}
printf("\n");

return 0;
}
