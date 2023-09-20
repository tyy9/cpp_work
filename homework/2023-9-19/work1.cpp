#include <iostream>
using namespace std;

class Rect
{
private:
    /* data */
    double height;
    double width;

public:
    Rect(/* args */ double height = 0, double width = 0);
    ~Rect();
    Rect operator+(Rect &other)
    {
        Rect temp;
        temp.height = other.height + height;
        temp.width = other.width + width;
        return temp;
    }
    Rect operator+(int num)
    {
        Rect temp;
        temp.height = num + height;
        temp.width = num + width;
        return temp;
    }
    void show()
    {
        cout <<this<< ":height:" << height << "\twidth:" << width << endl;
    }
    friend Rect operator+(int num,Rect &rect);
};

Rect::Rect(/* args */ double height, double width) : height(height), width(width)
{
    cout << this << ":构造" << endl;
}

Rect::~Rect()
{
    cout << this << ":析构" << endl;
}

Rect operator+(int num,Rect &rect)
{
    Rect temp;
    temp.height = num + rect.height;
    temp.width = num + rect.width;
    return temp;
}
int main()
{
    Rect r1(10, 20);
    Rect r2(15, 25);
    Rect r3 = r1 + r2;
    Rect r4=r1+5;
    Rect r5=5+r1;
    r3.show();
    r4.show();
    r5.show();
    return 0;
}