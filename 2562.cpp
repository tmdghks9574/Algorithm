#include<iostream>

int arr[10];

int main()
{
    for(int i = 1; i <= 9; i++)
        std::cin >> arr[i];

    int max = arr[1];
    int j = 1;

    for(int i = 2; i <= 9; i++)
    {
        if(arr[i] > max)
        {
            j = i;
            max = arr[i];
        }
    }
    std::cout << max << std::endl << j << std::endl;
}
