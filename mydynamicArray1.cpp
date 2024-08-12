#include<iostream>
using namespace std;
class myArray{
    private:
    int arrsize = 5;
    int *p = new int[this->arrsize];
    int i = 0; // i=6
    void doubleSize(){
        int *t = p;
        // this->arrsize = a;
        p = new int[this->arrsize];
        for(int i= 0; i<this->arrsize/2; i++){
        *(p+i) = *(t+i);
             
        }
        delete[] t;
    }
    public:
    void push_back(int n){
        if(i>=this->arrsize){
             this->arrsize = this->arrsize*2;
            this->doubleSize();
        }
        *(p+i) = n;

        this->i += 1;
    }
    void printallvalues(){
         for(int i = 0; i<=this->arrsize; i++){
            cout<<"\n *(p+"<<i<<") = "<<*(p+i);
         }
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
    int num =1;
    for(int i =0; i<=95; i++){
        aa.push_back(num);
        num +=1;
    }
    aa.printallvalues();
    
    // cout<<aa.at(10);
    cout<<"\nhello";
    // cout<<"\n"<<aa.size();

}