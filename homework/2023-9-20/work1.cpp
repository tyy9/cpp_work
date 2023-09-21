#include <iostream>
#include <vector>
#include <memory>

using namespace std;
class Student;
vector<shared_ptr<Student>> record_ve;
class Student
{
private:
    /* data */
    string name;
    string record;

public:
    Student(/* args */ string name, string record);
    ~Student();
    void show()
    {
        cout<<"--------------------"<<endl;
        cout << "name:" << name << "\trecord:" << record << endl;
        cout<<"--------------------"<<endl;
    }
    string getRecord()
    {
        return this->record;
    }
};

Student::Student(/* args */ string name, string record) : name(name), record(record)
{
}

Student::~Student()
{
}

void StudentDataShow()
{
    for (auto s : record_ve)
    {
        s->show();
    }
}
void StudentCreate()
{
    string name, record;
    cout << "请输入学生的姓名与考勤情况" << endl;
    cin >> name >> record;
    shared_ptr<Student> stu = make_shared<Student>(name, record);
    record_ve.push_back(stu);
}
int CheckStudentRecord()
{
    // vector<shared_ptr<Student>>::iterator it=record_ve.begin();
    for (shared_ptr<Student> stu : record_ve)
    {
        string record;
        record = stu->getRecord();
        int A_Flag=0,L_Flag = 0;
        int i = 0;
        cout<<"学生信息:"<<endl;
        stu->show();
        while (i < record.length())
        {
            // 先查看是否有缺勤
            if (record.find_first_of('A') >= 0)
            {
                cout<<"该学生有缺勤情况"<<endl;
                if (record.find_first_of('A') != record.find_last_of('A'))
                {
                    A_Flag=1;
                    cout<<"该学生有多次缺勤,不及格"<<endl;  
                    break;
                }
            }
            //判断是否有连续迟到
            if(record.at(i)=='L')
            {   
                //cout<<"1"<<endl;
                L_Flag++;
                if(L_Flag>2){
                    cout<<"该学生连续迟到两次，不及格"<<endl;
                   break;
                }
            }
            i++;
        }
        if(!A_Flag&&!L_Flag){
            cout<<"该学生合格"<<endl;
        }
    }
}
int main()
{

    int selected;
    while (1)
    {
        cout << "按1继续创建学生对象,按2查看学生的考勤情况,按3退出" << endl;
        cin >> selected;
        switch (selected)
        {
        case 1:
            StudentCreate();
            StudentDataShow();
            break;
        case 2:
            CheckStudentRecord();
            break;
        case 3:
            cout<<"退出"<<endl;
            return 0;
        default:
            break;;
        }
        /* code */
    }
    return 0;
}
