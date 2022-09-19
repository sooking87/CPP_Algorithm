#include <iostream>
#include <vector>

int main()
{
    // vector �ݺ��� iter ����
    std::vector<int>::iterator iter;

    // iter �ʱ�ȭ
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    iter = v.begin();

    // ���� ����
    std::cout << iter[1] << std::endl;

    // ���� ���
    iter += 5;
    std::cout << *iter << std::endl;

    // vector ������
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << "&it: " << &it << std::endl;
        std::cout << "*it: " << *it << std::endl;
    }

    for (std::vector<int>::size_type i = 0; i < v.size(); i++)
    {
        std::cout << "vec�� " << i + 1 << " ��° ���� :: " << v[i] << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << "vec�� " << i + 1 << " ��° ���� :: " << v[i] << std::endl;
    }
}