#include<bits/stdc++.h>

using namespace std;

// bool comp (int a, int b) {
//     return (a < b);
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, emp[3], aux;
    int* tmp1;
    int* tmp2;

    cin >> t;

    for (int i = 0; i < t; i++){
        cin >> emp[0] >> emp[1] >> emp[2];
        tmp1 = max_element(emp, emp + 3);
        tmp2 = min_element(emp, emp + 3);
        aux = 0;
        for (int j = 0; j < 3; j++) {
            if (emp[j] == *tmp1) {
                emp[j] = 0;
            }
            else if (emp[j] == *tmp2)
            {
                emp[j] = 0;
            }
        }

        for (int j = 0; j < 3; j++) {
            if (emp[j] != 0) {
                cout << "Case " << i + 1 << ": " << emp[j] << endl;
            }
        }

    }

}