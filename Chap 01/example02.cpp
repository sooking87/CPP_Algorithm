#include <iostream>
#include <array>

int main()
{
    std::array<int, 4> arr3 = {1, 2, 3, 4};

    try
    {
        std::cout << arr3.at(3) << std::endl;
        std::cout << arr3.at(4) << std::endl;
    }
    catch (const std::out_of_range &e)
    {
        std::cerr << e.what() << std::endl;
    }
}