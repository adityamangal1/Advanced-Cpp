#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{

    list<int>::iterator itr;
    for (itr = lst.begin(); itr != lst.end(); itr++)
    {

        cout << *itr << " ";
    }
    cout << endl;
}

int main()
{

    list<int> list1;
    list<int> list2;
    list1.push_back(443);
    list1.push_back(4);
    // list1.pop_back();     // popping element from back
    // list1.pop_front();   // poppping element form front
    // list1.remove(4);         // removes the mentioned element
    // list1.sort();             // sorting the list
    // list1.merge(list2);          // merging the two lists
    list1.reverse();          // reversing the list
    list2.push_back(24);
    list2.push_back(2);
    display(list1);
    // display(list2);

    // list<int>::iterator iter;
    // list<int> :: iterator iter;
    // iter = list1.begin();

    return 0;
}