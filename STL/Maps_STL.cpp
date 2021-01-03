#include <iostream>
#include <map>                  
#include <string>

using namespace std;

int main()
{

    map<string, int> marks;
    marks["harry"] = 45;
    marks["mangal"] = 35;
    marks["aditya"] = 355;
    marks.insert({{"bhai", 56},{"abe jaa",78}}); // insert function of map

    map<string, int>::iterator iter;
    for (iter = marks.begin(); iter != marks.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }

    cout << "the size is: " << marks.size(); // size function 
    return 0;
}
