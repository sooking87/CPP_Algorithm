#include <iostream>
#include <array>

void printValue(const std::array<int, 5> arr)
{
    std::cout << "printValue" << std::endl;
    for (auto ele : arr)
    {
        std::cout << ele << ", ";
    }
    std::cout << std::endl;
}

// 포인터 활용
void printRef(const std::array<int, 5> *arr)
{
    std::cout << "printRef" << std::endl;
    for (auto ele : *arr)
    {
        std::cout << ele << ", ";
    }
    std::cout << std::endl;
}

// 참조자 활용
void printRef2(const std::array<int, 5> arr)
{
    std::cout << "printRef2" << std::endl;
    for (auto ele : arr)
    {
        std::cout << ele << ", ";
    }
    std::cout << std::endl;
}
int main()
{
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    printValue(arr);
    printRef(&arr);
    printRef2(arr);
}