#include<iostream>

using namespace std;
/*int fibo(int n) {
    if (n == 0) 
        return 1;
     else if (n == 1) 
        return 0;
     else 
        return fibo(n-1) + fibo(n-2);    
}

int fibo2(int n) {
    if (n == 0) 
       return 0;
    else if (n == 1)
       return 1;
    else 
       return fibo2(n-1) + fibo2(n-2);
    
}*/
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
		int *arr = new int[k];
		int *arr2 = new int[k];
		arr[0] = 1;
		arr2[0] = 0;
		arr[1] = 0;
		arr2[1] = 1;
		if(k < 2)
			cout << arr[k] << " " << arr2[k] << endl;
		else{
		for(int i = 2; i <= k; i++)
		{
			arr[i] = arr[i-1] + arr[i-2];
			arr2[i] = arr2[i-1] + arr2[i-2];
		}
        cout << arr[k] << " " << arr2[k] << endl;
		delete[] arr;
		delete[] arr2;
		}
    }
}
