#include<iostream>

using namespace std;
void Eratos(int n)
{
	bool* PrimeArray;
    int cnt = 0;
	if(n==1)
    {
        cout << "1\n";
        return;
    }
	PrimeArray=new bool[2*n+1];
	for(int i=1; i<=2*n; i++) 
        PrimeArray[i]=true;
	for(int i=2; (i*i)<=2*n; i++)
	{
		if(PrimeArray[i])
		{
			for(int j=i*i; j<=2*n; j+=i) 
            {
                PrimeArray[j]=false;
            }
		}
	}
    for(int i = n+1; i <= 2*n; i++)
    {
        if(PrimeArray[i] == true)
            cnt++;
    }
    cout << cnt << endl;
}
int main()
{
	int n;
	while(1)
	{
		cin >> n;
		if(n == 0)
			break;
		else
            Eratos(n);
    }
}
