#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;
    std::queue<int> q;
    // index를 큐에 넣어서 반복문을 통해서 100 이상인지 아닌지 비교해야되는 인덱스를 결정
    for (int i = 0; i < progresses.size(); i++)
    {
        q.push(i);
    }

    while (!q.empty())
    {
        int cnt = 0;
        for (int i = 0; i < progresses.size(); i++)
        {
            progresses[i] += speeds[i];
        }

        while ((!q.empty()) && progresses[q.front()] >= 100)
        {
            cnt++;
            q.pop();
        }

        if (cnt != 0)
            answer.push_back(cnt);
    }
    return answer;
}
int main()
{
    solution({93, 30, 55}, {1, 30, 5});
}