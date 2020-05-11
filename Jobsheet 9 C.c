#include <stdio.h>
int main()
{
int i;
char nama[4]={'M','I','L','A'};
char nama2[5]="MILA";
printf("Array per Karakter = ");
for(i=0;i<=3;i++)
{
printf("%c",nama[i]);
}
printf("\n"); printf("Array string = %s\n\n",nama2);
return 0;
}
