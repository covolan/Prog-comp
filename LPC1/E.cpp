#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, e_primo, contador = 0, num = 2, prox, tmp = 0;

    cin >> n;
    int reqn[n], req[n];

    for (int i = 0; i < n; i++) {
        cin >> req[i];
    }

    copy(req, req +n, reqn);
    sort(reqn, reqn + n, greater<>());

    int primes[reqn[0]];

    while (contador < reqn[0]) {
        
        e_primo = 0;
        for (int i = 2; i < int(sqrt(num)) + 1; i++) {
            if ((num % i) == 0) {
                e_primo = 1;
            }
        }

        if (e_primo == 0) {
            primes[tmp] = num;
            contador++;
            tmp++;
        }

        num++;
    }

    for (int i = 0; i < n; i++) {
        cout << primes[req[i] - 1] << endl;
    }
    
    // for (int i = 0; i < n; i++) {
    //     cout << req[i] << " " << reqn[i] << endl;
    // }

}