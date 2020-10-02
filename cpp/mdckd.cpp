#include <iostream>
using namespace std;

class shopitem
{

    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void show()
    {

        cout << "the id of item is " << id << endl;
        cout << "the price of item is " << price << endl;
    }
};

int main(){
     int size = 3;
    shopitem* ptr= new shopitem[size];



    return 0;
}