#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252 > nul");
    int num1, num2;
    cout << "Digite o primeiro n�mero: ";
    cin >> num1;
    cout << "Digite o segundo n�mero: ";
    cin >> num2;
    if (num1 > num2) 
    {
        if (num1 % num2 == 0)
        {
            cout << "O n�mero "<< num1 <<" � m�ltiplo de " << num2;
        }
        else 
        {
            cout << "O n�mero " << num1 << " n�o � m�ltiplo de " << num2;
        }
    }
    else 
    {
        if (num2 % num1 == 0)
        {
            cout << "O n�mero " << num2 << " � m�ltiplo de " << num1;
        }
        else
        {
            cout << "O n�mero " << num2 << " n�o � m�ltiplo de " << num1;
        }
    }
}


