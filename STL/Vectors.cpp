#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> vec1;
    vector<char> vec2(5);
    vector<char> vec3(vec2);
    vector<int> vec4(4, 2);
    display(vec4);
    // display(vec2.size());
    cout << vec2.size();
    int element;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "Enter the " << i << " element" << endl;

    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // display(vec1);
    return 0;
}