#include<iostream>
// using string;
using namespace std;
class Car{
    private:
    string brand;
    string type;
    int year;
    string color;
    public:
    Car(string b, string t){
    this->brand = b;
        this->type = t;
        cout<<"hello";
    }
    Car(string b, string t,int y){
        this->brand = b;
        this->type = t;
        this->year = y;
                cout<<"World";

    }
    Car(string b, string t,int y,string c){
        this->brand = b;
        this->type = t;
        this->year = y;
        this->color = c;
                cout<<"Aimen";

    }
    
    void printdetails(){
        cout<<"\n Brand is "<< this->brand;
        cout<<"\n type is "<< this->type;
        if(this->year==0){
            cout<<"\n year is unknown: ";
        }else{     cout<<"\n year is "<< this->year;
        }
        if(this->color==""){
            cout<<"\n color is unknown: ";
        }else{     cout<<"\n color is "<< this->color;
        }
    }
};
int main(){
    Car Car2 = Car("Honda","Civic",2015);
    Car Car3 = Car("Ford","Mustang",2020,"Red");
    Car Car1 = Car("Toyota","Corolla");

    cout<<"\n First car detail:";
    Car1.printdetails();

    cout<<"\n second car detail:";

    Car2.printdetails();

    cout<<"\n Third car detail:";

    Car3.printdetails();
}