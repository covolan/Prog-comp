#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, contador, soma_ab;

    while (cin >> a >> b) {     
        soma_ab = a + b;
        contador = 1;

        while (soma_ab >= 10) {
            soma_ab /= 10;
            contador ++;
        }
        cout << contador << endl;
    }
}