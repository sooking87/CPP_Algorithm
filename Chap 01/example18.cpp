#include <iostream>
#include <forward_list>

bool del_less_five(const int value)
{
    return (value < 5);
}
void print(std::forward_list<int> myList)
{
    for (int ele : myList)
    {
        std::cout << ele << " ";
    }
    std::cout << std::endl;
}
int main()
{
    std::forward_list<int> fwd_list = {1, 2, 3, 4, 5, 6, 7, 8, 9, 7, 7, 1, 1, 2, 5};

    fwd_list.remove(7);
    std::cout << "7 Á¦°Å: ";
    print(fwd_list);

    fwd_list.remove_if(del_less_five);
    std::cout << "remove_if(): ";
    print(fwd_list);
}