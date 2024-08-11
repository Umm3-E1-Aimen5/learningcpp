#include<iostream>
using namespace std;

class Rectangle{
 private:
    float width; 
    float length;
    float calculateArea(){
        return width*length;
    }
 public:
    Rectangle(){
        width = 2.3;
        length = 2;
    }
    Rectangle(float w, float l){
        width = w;
        length = l;
    }
    ~Rectangle(){
        cout<<"I am destroyed"<<endl;
     }
    float getArea(){
        return calculateArea();
    }
    void showArea(){
        cout<<"Area of Rectangle = "<< calculateArea() <<endl;
    }  
    float getLength(){
        return length;
    }     

};
class Square{
    private:
        float side;
        int* p;
        float calculateArea(){
            return side*side;
        }
    public:
    Square(){
        // this->side = side;  
        side = 12;
        p = new int(10);
    }
    Square(float s){
        side = s;
    }
    ~Square(){
        cout<<"I am destroyed"<<endl;
        delete[] p;
     }
    float getArea(){
        return calculateArea();
    }
    void showArea(){
        cout<<"Area of square = "<< calculateArea() <<endl;
    }

};
class Circle{
 private:
     float pi = 3.14;
     float radius;
     float calculateArea(){
        return pi*radius*radius;
     }

 public:
    Circle(){
         radius = 2.2;
    }
    Circle(float r){
        radius = r;
     } 
     ~Circle(){
        cout<<"I am destroyed"<<endl;
     }
     float getArea(){
        return calculateArea();
     } 
     void showArea(){
        cout<<"Area of Circle = "<<calculateArea()<<endl;
     } 


        
};
int main(){
    {
    Rectangle r, r2(10, 5);
    cout<<"This is Area of Rectangle"<<endl;
    r.showArea();
    r2.showArea();
    }
    int* p = new int(10);
    char* ss = new char(30);
    int b = *(p+1);
    int* q = &b;
    Square* ps = new Square(23);
    ps->showArea();
    // float b = s.getLength();
    // cout<<"b = "<< b<<endl;
    Square s, s2(17);
    cout<<"This is Area of Square"<<endl;
    // s.setDimentions(11);
    s.showArea();
    s2.showArea();

    Circle c(2.3), c2;
    cout<<"This is Area of Circle"<<endl;
    // c.setRadius(2.3);
    c.showArea();
    c2.showArea();




}