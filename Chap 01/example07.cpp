#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    std::cout << arr.front() << std::endl;
    std::cout << arr.back() << std::endl;
    std::cout << (arr.data() + 1) << " = " << (*(arr.data() + 1)) << std::endl;
}