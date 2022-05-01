#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h, w, tmp = 0;
    cin >> h >> w;
    char grid[h * w];

    for (int i = 0; i < (h * w); i++) {
        cin >> grid[i];
    }

    for (int i = 0; i < (h * w); i++) {
        if (tmp == w) {
            cout << endl;
            tmp = 0;
        }
        cout << grid[i];
        tmp += 1;   
    }
    cout << endl;

}