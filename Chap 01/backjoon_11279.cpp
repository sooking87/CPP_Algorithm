#include <iostream>
#include <queue>
#include <vector>
#include <functional> // greater, less

int main()
{
    std::cin.sync_with_stdio(0);
    std::cin.tie(0);

    int n;
    std::cin >> n;

    std::priority_queue<int> nums;

    for (int i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;

        if (temp == 0)
        {
            if (nums.empty())
            {
                std::cout << 0 << "\n";
            }
            else
            {
                std::cout << nums.top() << "\n";
                nums.pop();
            }
        }
        else
        {
            nums.push(temp);
        }
    }
}