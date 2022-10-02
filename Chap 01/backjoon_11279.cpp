#include <iostream>
#include <queue>
#include <vector>
#include <functional> // greater, less

int main()
{
    int n;
    std::cin >> n;

    std::priority_queue<int> nums;
    std::vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;

        if (temp == 0)
        {
            if (nums.empty())
            {
                // ans.push_back(0);
                std::cout << 0 << std::endl;
            }
            else
            {
                // ans.push_back(nums.top());
                std::cout << nums.top() << std::endl;
                nums.pop();
            }
        }
        else
        {
            nums.push(temp);
        }
    }

    // for (auto i : ans)
    // {
    //     std::cout << i << std::endl;
    // }
}