#include <iostream>
#include <array>

template <size_t N>
void print(std::array<int, N> &arr)
{
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        auto element = (*it);
        std::cout << "it: " << it << " ";
        std::cout << "*it: " << element << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    print(arr);
    std::cout << arr.at(0) << std::endl;
    std::cout << arr[0] << std::endl;
    std::cout << arr.begin() << std::endl;
}