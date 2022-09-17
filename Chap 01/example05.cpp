#include <iostream>
#include <array>

template <size_t N>
void print(const std::array<int, N> &arr)
{
    for (auto ele : arr)
    {
        std::cout << ele << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::array<int, 4> arr1 = {1, 2, 3, 4};
    std::array<int, 10> arr2 = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'l'};

    print(arr1);
    print(arr2);
}
