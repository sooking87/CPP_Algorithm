#include <iostream>
#include <vector>

void print(std::vector<int> v)
{
    for (auto ele : v)
    {
        std::cout << ele << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    print(vec);

    vec.emplace_back(10);
    print(vec);

    vec.emplace(++vec.begin(), 20);
    print(vec);
}