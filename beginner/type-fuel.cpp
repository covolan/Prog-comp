#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i=0, al = 0, ga = 0, di = 0;
    
    while (i != 4)
    {
        cin >> i;
        if (i == 1) {
            al += 1;
            i = 0;
        }
        else if (i == 2)
        {
            ga += 1;
            i = 0;
        }
        else if (i == 3)
        {
            di += 1;
            i = 0;
        }
        
    }
    
    cout << "MUITO OBRIGADO" << endl << "Alcool: " << al << endl;
    cout << "Gasolina: " << ga << endl << "Diesel: " << di << endl;

    return 0;
}


