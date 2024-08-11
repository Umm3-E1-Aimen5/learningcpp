#include<iostream>
#include<cmath>
using namespace std;
void print(int s){
    cout<<"s = "<<s;
}
int addNumbers(int n1,int n2 ){
    int sum = n1+n2;
    print(sum);
}
int subtractNumbers(int n1,int n2){
    int sub = n1-n2;
    print(sub);
}
int multiplicationNumbers(int n1,int n2){
    int multiply = n1 * n2;
    print(multiply);
}
int divideNumbers(int n1,int n2){
    int div = n1/n2;
        print(div);
}
bool primeNumber(int n){
    int count=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        return true;
    }else{
        return false;
    }

}
int factorial(int b){
    if(b>1){
        return b * factorial( b - 1 );
    }else{
        return 1;
    }
}
int power(int b,int exp){
    if(exp != 0){
        return b * power(b,exp-1);
    }else{
        return 1;
    }
}
void fibonacci(int n){
    int f0 = 0,f1 = 1,fs = 0;
    fs = f0 + f1;
    cout<< f0<<" "<< f1 << " ";
    for(fs = 1; fs<=n; fs = f0 + f1)
    {
        cout<<fs<<" ";
        f0 = f1;
        f1 = fs;
    }
}
int pressKey(){
    int n;
        cout<<"\n press 1 for addition of numbers: "<<"\n press 2 for subtraction of numbers:"<<"\n press 3 for multiplication of numbers:";
        cout<<"\n press 4 for division of numbers: "<<"\n press 5 for check prime numbers:"<<"\n press 6 for factorial of  a numbers:";
        cout<<"\n press 7 for fibonacci sequence of numbers: "<<"\n press 8 for power of  a numbers:"<<"\n press 9 for sqrt of a numbers:";
        cout<<"\n enter 0 for Exit ";
        cin>>n;
        return n;

}
int main(){
    int num;
    int n1,n2;

    for(int i = 1; i>0; i++){
        num = pressKey();
        cout<<"\n num  is = "<< num;
        if(num == 1){
        cout<<"\n Addition of Numbers:";
        cout<<"\n enter any number:";
        cin>>n1;
        cout<<"\n enter any number:";
        cin>>n2;
        addNumbers(n1,n2);
    }else if(num == 2){
        cout<<"\n subtraction of Numbers:";
        cout<<"\n enter any number:";
        cin>>n1;
        cout<<"\n enter any number:";
        cin>>n2;
        subtractNumbers(n1,n2);
    }else if(num == 3){
        cout<<"\n Multiplications of Numbers:";
        cout<<"\n enter any number:";
        cin>>n1;
        cout<<"\n enter any number:";
        cin>>n2;
        multiplicationNumbers(n1,n2);

    }else if(num == 4){
        cout<<"\n Division of Numbers:";
        cout<<"\n enter any number:";
        cin>>n1;
        cout<<"\n enter any number:";
        cin>>n2;
        if(n2>0 || n2<0){
            divideNumbers(n1,n2);
        }else{
            cout<<"\n This division is impossible:";
        }

    }else if(num == 5){
        cout<<"\n check prime number:";
        cout<<"\n enter any number:";
        cin>>n1;
         bool A = primeNumber(n1);
         if(A == true){
            cout<< n1 << " is a prime number:";
         }else{
            cout<< n1 << " is not a prime number:";
         }

    }else if(num == 6){
        cout<<"\n find factorial of a number:";
        cout<<"\n enter any number:";
        cin>>n1;
        int A = factorial(n1);
        cout<<" Factorial of "<<n1 <<" is "<<A;

    }else if(num == 7){
        cout<<"\n find Fibonacci sequence of a number:";
        cout<<"\n enter any number:";
        cin>>n1;
        fibonacci(n1);
    }else if(num == 8){
        int e;
        cout<<"\n find power of a number:";
        cout<<"\n enter any number:";
        cin>>n1;
        cout<<"\n enter exponent number:";
        cin>>e;
        int P= power(n1,e);
        cout<<" power of "<<n1 <<" is "<<P;

    }else if(num == 9){
        cout<<"\n find square root of a number:";
        cout<<"\n enter any number:";
        cin>>n1;
        float sq = sqrt(n1);
        cout<<" square root of "<<n1 <<" is "<<sq;
    }else if(num == 0){
        return 0;
    }

    }

    
}