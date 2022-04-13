#include <iostream>
using namespace std;
int main()
{
    char y;
    int N, i, j;
    do
    {
        cout << "Enter the size of array : ";
        cin >> N;
        int arr[N] = {};
        cout << "Enter the elements of the array : ";
        for (i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int x;
        cout << "Enter the element you want to search : ";
        cin >> x;
        for (j = 0; j < N; j++)
        {
            if (arr[j] == x)
            {
                cout << x << " present at index : " << j << endl;
                break;
            }
        }
        if (j == N)
        {
            cout << x << " is not present in the array" << endl;
        }
        cout << "perform again.....press y for yes" << endl;
        cin >> y;
    } while (y == 'y');
    return 0;
}
