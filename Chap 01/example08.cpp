#include <iostream>
#include <vector>

int main()
{
    // 크기가 0인 벡터 선언
    std::vector<int> vec1;

    // 지정한 초깃값으로 이루어진 크기가 5인 벡터 선언
    std::vector<int> vec2 = {1, 2, 3, 4, 5};

    // 크기가 10인 벡터 선언
    std::vector<int> vec3(10);

    // 크기가 10이고, 모든 원소가 5로 초기화된 벡터 선언
    std::vector<int> vec4(10, 5);
}