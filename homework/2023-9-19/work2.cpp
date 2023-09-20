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
    //-------------
    //+
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
    //-----------
    //-
    Rect operator-(Rect &other)
    {
        Rect temp;
        temp.height = height-other.height;
        temp.width = width-other.width;
        return temp;
    }
    Rect operator-(int num)
    {
        Rect temp;
        temp.height =  height-num;
        temp.width =  width-num;
        return temp;
    }
    //--------------
    void show()
    {
        cout <<this<< ":height:" << height << "\twidth:" << width << endl;
    }
    friend Rect operator+(int num,Rect &rect);
    friend Rect operator-(int num,Rect &rect);
};

Rect::Rect(/* args */ double height, double width) : height(height), width(width)
{
    //cout << this << ":构造" << endl;
}

Rect::~Rect()
{
    //cout << this << ":析构" << endl;
}

Rect operator+(int num,Rect &rect)
{
    Rect temp;
    temp.height = num + rect.height;
    temp.width = num + rect.width;
    return temp;
}
Rect operator-(int num,Rect &rect)
{
    Rect temp;
    temp.height = num - rect.height;
    temp.width = num - rect.width;
    return temp;
}
int main()
{
    Rect r1(10, 20);
    Rect r2(15, 25);
    Rect r3 = 10-r1-10+r2;
    //分段计算，每段两个变量，返回一个对象，由该对象的成员函数或友元函数继续计算
    Rect r4=r3+10+8-9+r2-r1;
    r3.show();
    r4.show();
    return 0;
}