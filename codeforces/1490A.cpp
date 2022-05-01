#include<bits/stdc++.h>

using namespace std;

int main () {
    int t, n, tmp_ma, tmp_mi, qnt_add = 0, qt = 1;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        int arr[n];

        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        qnt_add = 0;

        for (int j = 0; j < n - 1; j++) {
            tmp_ma = max(arr[j], arr[j+1]);
            tmp_mi = min(arr[j], arr[j+1]);
            qt = 1;
            while (qt != 0) {
                if (tmp_ma / tmp_mi > 2) {
                    tmp_ma = ((tmp_ma + tmp_mi) / 2 )+ (tmp_ma % tmp_mi != 0);
                    qnt_add++;
                } else {
                    qt = 0;
                }
            }
        }

        cout << qnt_add << endl;

    }

}