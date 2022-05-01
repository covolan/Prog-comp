#include <iostream>

int main(int argc, char const *argv[])
{
    int hi, mi, hf, mf, h1, m1;

    std::cin >> hi >> mi >> hf >> mf;

    if (hi > hf) {
        h1 = hi - hf;
        m1 = mi - mf;
    }
    else if (hf > hi) {
        h1 = hf - hi;
        m1 = mf - mi;
    }

    if (m1 < 0) {
        m1 = m1 + 60;
        h1 = h1 - 1;
    }
    if (m1 == 0 && h1 == 0) {
        h1 = 24;
    }

    std::cout << "O JOGO DUROU " << h1 <<  " HORA(S) E " << m1 << " MINUTO(S)\n";

    return 0;
}

