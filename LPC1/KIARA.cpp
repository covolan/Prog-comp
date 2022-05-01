#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, contador = 0;

    cin >> n;
    string word[n];

    for (int i = 0; i < n; i++) {
        cin >> word[i];
    }
    
    for (int i = 0; i < n; i++) {
        for(int j = 1; j < n; j++) {
            for(int t = 0; t < word[j].length(); t++) {
                if(word[i].find(word[j][t]) < word[i].length() && word[i] != word[j]) {
                    contador += 1;  
                    }
                }
            }
        }

    if (contador >= 2) {
        cout << "Y" << endl;
    }
    else if (n == 1 && word[0].length() > 0)
    {
        cout << "Y" << endl;
    }
    else {
        cout << "N" << endl;
    }


}

