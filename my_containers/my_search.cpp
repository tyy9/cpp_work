    #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
        int a[5]={45,68,32,14,1001};
        vector<int> v(a,a+5);
        int flag=0;
        auto it=v.begin();
        for(;it!=v.end();it++){
            if(*it==100){
                cout<<"找到了"<<endl;
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<"ok"<<endl;
        }else{
            cout<<"erro"<<endl;
        }
        return 0;
    }