#include<iostream>
using namespace std;
class Rectangle{
    private:
    float length = 2.2;
    float width = 1.2;
    public:
        float getlengthofRec(){
              return this->length;
        }
        float getwidthofRec(){
              return this->width;
        }
        void setlengthandwidthofRec(float l, float w){
            this->length = l;
            this->width = w;
        }
        float claculate_areaof_rectangle(){
            return length * width;
        }
        float claculate_perimeter_Rectangle(){
            return 2*(length + width);
        }

};
class Circle{
    private:
    float radius = 2.1;
    float pi = 3.14;
    public:
        float getradiusofCircle(){
              return this->radius;
        };
        float getpiofCircle(){
              return this->pi;
        };
        void setradiusofCircle(float r){
            this->radius = r;
        }
        float claculate_areaof_circle(){
            return pi * radius * radius;
        }
        float claculate_perimeter_Circle(){
            return 2*pi*radius;
        }

};
class Square{
    private:
    float side = 3.0;
    public:
        float getsideofsquare(){
              return this->side;
        };
        void setsideofsquare(float s){
             this->side = s;
        };
        float claculate_areaof_square(){
            return side * side;
        }
        float claculate_perimeter_square(){
            return 4*side;
        }

};
int main(){
    Rectangle r1;
    r1.getlengthofRec();
    r1.getwidthofRec();
    cout<<"\n r1.claculate area of rectangle from getters: =  "<<r1.claculate_areaof_rectangle();
    cout<<"\n r1.claculate perimeter of rectangle from getters: =  "<<r1.claculate_perimeter_Rectangle();

    r1.setlengthandwidthofRec(2.5,2.1);
    cout<<"\n r1.claculate area of rectangle from setters: =  "<<r1.claculate_areaof_rectangle();
    cout<<"\n r1.claculate perimeter of rectangle from setters: =  "<<r1.claculate_perimeter_Rectangle();

    Circle c1;
    c1.getradiusofCircle();
    cout<<"\n c1.claculate area of circle from getters: =  "<<c1.claculate_areaof_circle();
    cout<<"\n c1.claculate perimeter of circle from getters: =  "<<c1.claculate_perimeter_Circle();

    c1.setradiusofCircle(2.5);
    cout<<"\n c1.claculate area of circle from getters: =  "<<c1.claculate_areaof_circle();
    cout<<"\n c1.claculate perimeter of circle from setters: =  "<<c1.claculate_perimeter_Circle();

    Square sq1;
    sq1.getsideofsquare();
    cout<<"\n sq1.claculate area of square from getters: =  "<<sq1.claculate_areaof_square();
    cout<<"\n sq1.claculate perimeter of circle from getters: =  "<<sq1.claculate_perimeter_square();
    sq1.setsideofsquare(2.2);
    cout<<"\n sq1.claculate area of square from setters: =  "<<sq1.claculate_areaof_square();
    cout<<"\n sq1.claculate perimeter of circle from setters: =  "<<sq1.claculate_perimeter_square();
}