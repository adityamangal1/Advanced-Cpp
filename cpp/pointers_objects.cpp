#include <iostream>
using namespace std;

class CWH
{

protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {

        title = s;
        rating = r;
    }

    virtual void display() {}
};

class CWHvideo: public CWH
{

    float videolength;

     public:
    CWHvideo(string s, float r, float vl): CWH(s, r)
    {

        videolength = vl;
    }
    void display(){
        cout<<rating<<endl;
        cout<<title<<endl;
        cout<<videolength<<endl;
    }
};
class CWHtest: public CWH{

    int words;
    public:
    CWHtext(string s, float r, int wd): CWH(s, r){

        words = wd;

    }
    void display(){
        cout<<rating<<endl;
        cout<<title<<endl;
        cout<<words<<endl;
    }
};

int main()
{

    return 0;
}