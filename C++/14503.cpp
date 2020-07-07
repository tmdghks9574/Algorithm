#include <bits/stdc++.h>

using namespace std;

#define MAX_SIZE 51
#define map Map
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

int back_dx[4] = { 1,0,-1,0 };
int back_dy[4] = { 0,-1,0,1 };

int ans;
int Map[MAX_SIZE][MAX_SIZE];
int n, m;
int r, c, d;

void Dfs(int x, int y, int dir)
{
    if (map[x][y] == 1)
        return;
    if (map[x][y] == 0)
    {
        map[x][y] = 2;
        ans++;
    }

    for (int k = 0; k < 4; k++)
    {
        int next_dir = dir-1 < 0 ? 3 : dir-1;
        int next_x = x + dx[next_dir], next_y = y + dy[next_dir];

        if (map[next_x][next_y] == 0)
        {
            Dfs(next_x, next_y, next_dir);
            return;
        }
        else
            dir = next_dir;
    }

    int next_x = x + back_dx[dir], next_y = y + back_dy[dir];
    Dfs(next_x, next_y, dir);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    cin >> r >> c >> d;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> map[i][j];

    Dfs(r, c, d);
    cout << ans << "\n";
}