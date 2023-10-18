#include <iostream>

using namespace std;

int main()
{
    int n1=0,n2=0,soma_divisores=0,divisor=1;
    cout<<"Numeros Perfeitos\n";
    cout<<"Digite o inicio do intervalo\n";
    cin>>n1;
    cout<<"Digite o fim do intervalo\n";
    cin>>n2;
    
    while (n1<n2)
    {
     soma_divisores=0;
     
     while (divisor<n1)
     {
      if (n1%divisor==0)
      {
       soma_divisores=soma_divisores+divisor;
      }
      divisor=divisor+1;
     }
     
     if (soma_divisores==n1)
     {
      cout<<"Eh perfeito!"<<n1<<"\n";
     }
     else
     {
      cout<<"Nao eh perfeito!\n";
     }
     
     n1=n1+1;
     divisor=1;
    }
    return 0;
}
