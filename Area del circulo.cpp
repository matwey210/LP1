#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int areacirculo;
    double radio;
    cout<<"Ingrese el area del ciculo:"<<endl;
    cin>>radio;
    areacirculo=(3.1416*pow(radio,2));
    cout<<"El area del circulo es:"<<areacirculo<<endl;
    return 0;
}
