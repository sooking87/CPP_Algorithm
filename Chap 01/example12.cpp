#include <iostream>
#include <vector>

int main()
{
    // vector 반복자 iter 선언
    std::vector<int>::iterator iter;

    // iter 초기화
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    iter = v.begin();

    // 임의 접근
    std::cout << iter[1] << std::endl;

    // 연산 사용
    iter += 5;
    std::cout << *iter << std::endl;

    // vector 순방향
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << "&it: " << &it << std::endl;
        std::cout << "*it: " << *it << std::endl;
    }

    for (std::vector<int>::size_type i = 0; i < v.size(); i++)
    {
        std::cout << "vec의 " << i + 1 << " 번째 원소 :: " << v[i] << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << "vec의 " << i + 1 << " 번째 원소 :: " << v[i] << std::endl;
    }
}