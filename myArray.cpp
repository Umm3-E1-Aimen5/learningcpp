#include<iostream>
using namespace std;
class MyArray{
    private:
    int a[20];
    int i = 0;
    public:
    int getArraysize(){
        return this->i;
    }
    void push_back(int n){
        cout<<"\n good:";
       this->a[this->i] = n;
        cout<<"\n bad:";

        this->i += 1;
    }
    int at(int b){
        return this->a[b];
    }

};
int main(){
    MyArray ar;
    cout<<"\n size of array: "<<ar.getArraysize();
    ar.push_back(1);
    cout<<"\n hello:";
    cout<<"\n size of array: "<<ar.getArraysize();
    ar.push_back(30);
    cout<<"\n world:";
    ar.push_back(200);
    cout<<"\n hell:";
    cout<<"\n size of array: "<<ar.getArraysize();
    cout<<"\n number is: "<<ar.at(1);


}
