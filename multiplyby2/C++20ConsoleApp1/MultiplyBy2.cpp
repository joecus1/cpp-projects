#include <iostream>

int main()
{
    int x{};
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << "Double that integer is " << 2 * x << "\n";

    return 0;
}