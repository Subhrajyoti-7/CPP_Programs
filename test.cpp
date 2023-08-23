#include <iostream>
using namespace std;
int main()
{
    int num;
    int count;
    int count1;
    cout << "enter a number : ";
    cin >> num;
    int arr[num];
    int freq[num];
    int k = 0;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        count = 0;
        for (int j = 0; j < num; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }

        for (int i = 0; i < k; i++)
        {
            cout << freq[i] << " ";
        }
    }
}