#include <iostream>
#include <memory>
#include<list>
#include <vector>
using namespace std;
static int num = 0, sum = 0;
class Student
{
private:
    /* data */
    int id;
    string name;
    double sort;

public:
    Student(/* args */);
    void setdata(int id, string &name, double sort);
    void disp();
    void avg();
    ~Student();
};
void Student::avg()
{
    cout << "avg:" << sum / num << endl;
}
void Student::setdata(int id, string &name, double sort)
{
    this->id = id;
    // this->name.assign(name);
    this->name=name;//属于string的复制构造函数
    this->sort = sort;
    sum += sort;
}
void Student::disp()
{
    cout << "id:" << this->id << "\tname:" << this->name << "\tsort:" << this->sort << endl;
}
Student::Student(/* args */)
{
    cout << "对象创建:" << this << endl;
    num++;
}

Student::~Student()
{
    cout << "对象析构，释放资源:" << this << endl;
    //delete this;
}
int main()
{
    int id;
    string name;
    double sort;
    int selected;
    int i=0;
    //先创建一个对象集合
    //vector<shared_ptr<Student>> stu_list;//数组
    list<shared_ptr<Student>> stu_list;//链表
    while (1)
    {
       //将新创建的对象加入到对象集合中
        shared_ptr<Student> stu=make_shared<Student>();
        cout << "请输入id,name,sort" << endl;
        cin >> id >> name >> sort;
        stu->setdata(id, name, sort);
        stu->disp();
        stu->avg();
        name.clear();
        //将新创建的对象加入到对象集合中
        stu_list.push_back(stu);
        cout << "num:" << num << endl;
        cout << "按1继续创建对象，按任意键退出" << endl;
        cin>>selected;
        if(selected==1){
            continue;
        }else{
            break;
        }
    }
    return 0;
}
