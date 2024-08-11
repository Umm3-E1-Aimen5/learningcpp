#include<iostream>
using namespace std;
class myArray{
    private:
    int *p = new int[5];
    int i = 0; // i=6
    public:
    void push_back(int n){
        if(i==5){
            doubleSize();

        }
        *(p+i) = n;

        this->i += 1;
    }
    void doubleSize(){
        int *t = p;
        p = new int[10];
        for(int i= 0; i<5; i++){
        *(p+i) = *(t+i);
             
        }
        delete[] t;
    }
    int at(int b){
        return *(p+b);
    }
    int size(){
        return this->i;
    }
    
};
int main(){
    myArray aa;
        aa.push_back(8);
        aa.push_back(10);
        aa.push_back(18);
        aa.push_back(9);
        aa.push_back(19);
        aa.push_back(90);
        aa.push_back(23);
        cout<<aa.at(6);
        cout<<"\nhello";
        cout<<"\n"<<aa.size();

}