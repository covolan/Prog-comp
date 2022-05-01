#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i, j, k = 0, tmp = 0;

    cin >> i >> j;

    if (i > j) {
        tmp = j;
        j = i;
        i = tmp;    
    }

    for (int m = i; m < j + 1; m++) {
        if ((i % 13) != 0) {
            k += i;
        }
        i += 1;
    }
     
     cout << k;

    return 0;
}



