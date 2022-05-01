#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, l, contador = 1, maxl = 1, m, n, tmp1, tmp2, plc = 0;

    cin >> k >> l;
    if (k > l) {
        tmp1 = k;
        tmp2 = l;
        m = k;
        k = l;
        l = m;
        plc = 1;
    }
    n = k;
    
    for (int i = k; i <= l; i++) {
        n = i;
        while (n != 1)
        {
            if (n == 0) {
                break;
            }

            if (n % 2 == 1) {
                n = n * 3 + 1;
            } else {
                n /= 2;
            }
            contador += 1;
        }
        if (contador > maxl) {
            maxl = contador;
        }
        contador = 1;
    }
    if (plc = 1) {
        cout << tmp1 << " " << tmp2  << " " << maxl << endl;
    } else {
            cout << k << " " << l << " " << maxl << endl;
    }
}