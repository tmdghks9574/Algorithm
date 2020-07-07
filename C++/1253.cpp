#include<iostream>
#include<vector>
#include<map>
#include<cstdio>
#include<numeric>
#include<algorithm>
#include<cmath>
#include<stack>
#include<deque>
#include<queue>
#include<bitset>
#include<set>


using namespace std;
#define endl "\n"
#define ll long long
ll arr[2002];
int main ()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    int N;
    cin >> N;

    map<int, pair<bool, int>> visited; // {숫자, {좋은 수 여부, 현재 숫자 인덱스}}

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];

        visited[v[i]] = { false, i };
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int sum = v[i] + v[j];

            if (visited.count(sum))
            {
                // 반드시 다른 숫자의 합
                if (visited[sum].second == i || visited[sum].second == j)
                {
                    continue;
                }

                visited[sum].first = true;
            }
        }
    }

    int result = 0;

    for (int i = 0; i < N; i++)
    {
        if (visited[v[i]].first == true)
        {
            result++;
        }
    }

    cout << result << "\n";

    return 0;
}