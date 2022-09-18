#include <iostream>  // std::cout
#include <vector>    // std::vector
#include <algorithm> // std::find

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
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::cout << "vec1 초기값: ";
    print(vec1);

    vec1.insert(vec1.begin(), 0);
    std::cout << "vec1 제일 앞에 0추가: ";
    print(vec1);

    vec1.insert(++vec1.begin(), 10);
    std::cout << "vec1 인덱스 1에 10추가: ";
    print(vec1);

    std::vector<int> vec2;
    vec2.push_back(1);
    std::cout << "vec2 빈 벡터에 1추가: ";
    print(vec2);

    vec2.push_back(2);
    std::cout << "vec2 맨 뒤에 2추가: ";
    print(vec2);

    vec2.insert(vec2.begin(), 3);
    std::cout << "vec2 맨 앞에 3추가: ";
    print(vec2);

    vec2.insert(find(vec2.begin(), vec2.end(), 1), 4); // 1앞에 4를 추가
    std::cout << "vec2 1앞에 4를 추가: ";
    print(vec2);
}