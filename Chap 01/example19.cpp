#include <iostream>
#include <list>

// ���� ���߿��� ����Ʈ ��� ����
struct doubly_linked_list_node
{
    int data;
    doubly_linked_list_node *next;
    doubly_linked_list_node *prev;
};

void print(std::list<int> list)
{
    for (auto it = list.begin(); it != list.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
int main()
{
    std::list<int> list1 = {1, 2, 3, 4, 5};
    list1.push_back(6);
    list1.insert(list1.begin(), 0);
    // list1.pust_front(0);
    list1.insert(list1.end(), 7);
    // list1.push_back(7);

    std::cout << "���� �߰�: " << std::endl;
    print(list1);

    std::cout << "���� ����: " << std::endl;
    list1.pop_back();
    print(list1);
    list1.pop_front();
    print(list1);
}
