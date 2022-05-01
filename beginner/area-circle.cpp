#include <iostream>
#include <cmath>
#include <iomanip>

int main(int argc, char const *argv[])
{
    float x, y = 3.14159;

    std::cin >> x;
    std::cout << std::fixed << std::setprecision(4);
    std::cout << y * x * x << std::endl;

    return 0;
}

