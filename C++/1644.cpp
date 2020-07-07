#include<bits/stdc++.h>
using namespace std;

int n;
bool arr[4000002];

void Eratos(){
    if(n <= 1)
        return;

    for(int i = 2; i <= n + 1; i++)
        arr[i] = true;

    for(int i = 2; i * i <= n; i++)
        if(arr[i])
            for(int j = i * 2; j <= n; j += i)
                arr[j] = false;

}
int main()
{
    cin >> n;
    Eratos();

    int p = 2; int q = 2;
    int sum = 0; int cnt = 0;
    while(q <= n + 1){
        if(sum >= n){
            sum -= p;
            while(arr[p + 1] == 0 && p <= n + 1)
                p++;
            p++;
        } 
        else if(q == n + 1)
            break;
        else{
            sum += q;
            while(arr[q + 1] == 0 && q <= n + 1)
                q++;
            q++;
        }
        if(sum == n)
            cnt += 1;
    }
    cout << cnt << endl;
}
