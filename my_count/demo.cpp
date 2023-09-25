#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int youxiu;
int hege;
int bujige;
bool check(const int&x){
    if(x>90&&x<=100){
        cout<<"youxiu"<<endl;
        youxiu++;    
    }else if(x>60&&x<90){
        cout<<"hege"<<endl;
        hege++;
    }else if(x>=0&&x<60){
        cout<<"bujige"<<endl;
        bujige++;
    }
}
int main(){
    int a[]={80,65,94,89,94,74,56};
    vector<int> v(a,a+7);
    count_if(v.begin(),v.end(),check);
    cout<<"优秀:"<<youxiu<<"\t合格:"<<hege<<"\t不及格:"<<bujige<<endl;
    return 0;
}