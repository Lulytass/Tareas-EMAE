#include <iostream>

using namespace std;
void tabla(int);
int main()
{
    int num;
    cout<<"ingrese un entero: ";
    cin>>num;
    tabla(num);
    return 0;
}
void tabla(int n)
{
    cout<<n<<" x "<<0<<" = "<<n*0<<endl;
    cout<<n<<" x "<<1<<" = "<<n*1<<endl;
    cout<<n<<" x "<<2<<" = "<<n*2<<endl;
    cout<<n<<" x "<<3<<" = "<<n*3<<endl;
    cout<<n<<" x "<<4<<" = "<<n*4<<endl;
    cout<<n<<" x "<<5<<" = "<<n*5<<endl;
    cout<<n<<" x "<<6<<" = "<<n*6<<endl;
    cout<<n<<" x "<<7<<" = "<<n*7<<endl;
    cout<<n<<" x "<<8<<" = "<<n*8<<endl;
    cout<<n<<" x "<<9<<" = "<<n*9<<endl;
    cout<<n<<" x "<<10<<" = "<<n*10<<endl;
}
