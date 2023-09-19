#include<iostream>
using namespace std;
class shape
{
private:
    /* data */
    double width;
    double height;
public:
    double getwidth(double width){
        return this->width;
    }
    double getheight(double height){
        return this->height;
    }
    void setwidth(double width){
        this->width=width;
    }
    void setheight(double height){
        this->height=height;
    }
    double getM(){
        return this->width*this->height;
    }
    double getC(){
        return (this->width+this->height)*2;
    }
};
int main(){
    shape s;
    double width,height;
    cout<<"请输入宽高\n";
    cin>>width>>height;
    s.setheight(height);
    s.setwidth(width);
    cout<<"M:"<<s.getM()<<endl;
    cout<<"C:"<<s.getC()<<endl;
    return 0;
}