#include <iostream>
using namespace std;

class mangal
{

protected:
    string title;
    float rating;
     float r;
public:
    mangal(){}
    mangal(string s, float r)
    {

        title = s;
        rating = r;
    }

    virtual void display() {}
};

class mangalvideo : public mangal
{

    float videolength;

public:
// int r;
    mangalvideo(string s, float rating, float vl) : mangal(s, r)
    {

        videolength = vl;
    }

    void display()
    {

        cout<<rating<<endl;
        cout<<title<<endl;
        cout<<videolength<<endl;

    }
};

class mangaltext: public mangal{
      int words;

      public:
    mangaltext(){}
    mangaltext(string s, float rating, int ws) : mangal(s, r){

        words = ws;

    }
   void display()
    {

        cout<<rating<<endl;
        cout<<title<<endl;
        cout<<words<<endl;

    }



};
int main(){
    string title;
    float rating;
    int words;
    int videolength;

    title = "hello mangal";
    rating=4.5;
    words=200;
    videolength=25;
     
     mangaltext obj1(title, words, rating);
     obj1.display();



    return 0;
}