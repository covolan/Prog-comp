#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    double r, pi = 3.14159;
    cout << "Entre um raio: " ;
    cin >> r;
    cout << fixed << setprecision(3);
    cout << "O raio encontrado foi: ";
    cout << 4.0/3.0 * pi * r * r * r << endl;

}

