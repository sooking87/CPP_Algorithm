#include <iostream>
#include <map>

using namespace std;

void print(map<pair<string, string>, int> &m)
{
    for (auto it : m)
    {
        cout << it.first.first << ": " << it.first.second << ", " << it.second << endl;
    }
}
int main()
{
    int n;
    int cnt = 0;
    cin >> n;
    map<pair<string, string>, int> city_list;

    for (int i = 0; i < n; i++)
    {
        string city, special;
        cin >> city >> special;

        city = city.substr(0, 2);
        if (special == city)
        {
            continue;
        }

        city_list[{special, city}]++;
        // city, special 쌍이 cnt += 을했을 때, count가 된다는 것은 이미 그 전에 값이 있었다는 의미이다.
        cnt += city_list[{city, special}];
        cout << "cnt: " << cnt << endl;
        print(city_list);
    }
    cout << "cnt: " << cnt << endl;
}