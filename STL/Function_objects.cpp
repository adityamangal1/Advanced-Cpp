// To sort array 
#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{

    int arr[] = {1, 46, 71, 0, 44};
    sort(arr, arr + 5, greater<int>());
    cout << "The result array is: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}