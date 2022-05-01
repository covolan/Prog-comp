#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    float ii = 0;
    int j[3] = {1, 2, 3}, cont = 0;
    for (int i = 0; i < 33; i++)
    {
        cout << "I=" << ii << " " << "J=" << j[cont] + ii << endl;
        cont += 1;
        if (cont == 3) {
            cont = 0;
            ii += 0.2;
        }
    }
    
    return 0;
}

