#include <iostream>
using namespace std;
int main ()
{
int x[3],i;
cout<<"NIM : F1B019090\n";
for(i=0;i<=1;i++)
{
cout<<"Masukkan nim "<<i+1<<" : ";
cin>>x[i];
}
cout<<endl;
for(i=0;i<=1;i++)
{
cout<<"Nim ke "<<i+1<<" = "<<x[i]<<endl;
} cout<<endl;

return 0;
}
