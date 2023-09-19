#include <iostream>
using namespace std;
class Cdate
{
private:
    /* data */
    int year;
    int month;
    int day;

public:
    Cdate(/* args */ int year, int month, int day);
    void show();
    ~Cdate();
};

Cdate::Cdate(/* args */ int year, int month, int day) : year(year), month(month), day(day)
{
}

Cdate::~Cdate()
{
}

void Cdate::show()
{
    int limit = 0, cout_day = 0;
    if (month == 2)
    {
        limit = 29;
        cout_day=day+2;
        if (day + 2 > limit)
        {
            cout_day = day + 2 - limit;
            month++;
            cout << year << "-" << month << "-" << cout_day << endl;
            return;
        }
        cout << year << "-" << month << "-" << cout_day << endl;
        return;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        limit = 30;
        cout_day=day+2;
        if (day + 2 > limit)
        {
            cout_day = day + 2 - limit;
            month++;
            if (month > 12)
            {
                month = 1;
                year++;
            }
            cout << year << "-" << month << "-" << cout_day << endl;
            return;
        }
        cout << year << "-" << month << "-" << cout_day << endl;
        return;
    }
    else
    {
        limit = 31;
        cout_day=day+2;
        if (day + 2 > limit)
        {
            cout_day = day + 2 - limit;
            month++;
            if (month > 12)
            {
                month = 1;
                year++;
            }
            cout << year << "-" << month << "-" << cout_day << endl;
            return;
        }
        cout << year << "-" << month << "-" << cout_day << endl;
        return;
    }
}

int main(){
    int year;
    int month;
    int day;
    cout<<"请输入年月日"<<endl;
    cin>>year>>month>>day;
    Cdate d(year,month,day);
    d.show();
}