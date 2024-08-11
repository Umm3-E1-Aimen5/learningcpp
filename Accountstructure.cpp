#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
struct Account{
    char Name[100];
    char AccountNo[100];
    int Balance;

};
char existAccount(char a[], char b[]){
    int l = sizeof(a)/sizeof(a[0]);
    for(int i=0; i<l;i++){
        b[i] = a[i];
    }
}
void openAccount(Account* a,int c){
    cout<<"\n open Account:";
    cout<<"\n Enter Account Holder Name:";
    cin>>(a+c)->Name;
    cout<<"\n Enter Account number:";
    cin>>(a+c)->AccountNo;
    cout<<"\n Enter Balance:";
    cin>>(a+c)->Balance;
}
void depositMoney(Account* a, char search[], int c){
    int amount;
    int flag = -1;
    for(int i=0; i<=c; i++){
        int A = strcmp((a+i)->AccountNo,search);
        if(A==0){
            flag=i;
            break;
        }
    }
    if(flag==-1){
        cout<<"\n this account does not exist:";
    }else{
        cout<<"\n this account exist at "<<flag;
        cout<<"\n Enter deposit amount:";
        cin>>amount;
        (a+flag)->Balance = (a+flag)->Balance +amount;
    }

}
void withdrawMoney(Account* a,char search[], int c){
    int amount;
    int flag = -1;
    for(int i=0; i<=c; i++){
        int A = strcmp((a+i)->AccountNo,search);
        if(A==0){
            flag=i;
            break;
        }
        if(flag==-1){
            cout<<"\n this account doest not exist:";
        }else{
            cout<<"\n this account exist at ="<<flag;
            cout<<"\n enter withdraw money:";
            cin>>amount;
            cout<<"(a+flag)->Balance = "<<(a+flag)->Balance;
            cout<<"\n"<<(a+flag)->Balance <<"=" <<(a+flag)->Balance -amount;
        }
    }
}
void checkBalance(Account* a,char search[], int c){
    int flag = -1;
    for(int i=0; i<=c; i++){
        int A = strcmp((a+i)->AccountNo,search);
        if(A==0){
            flag=i;
            break;
        }
        if(flag==-1){
            cout<<"\n this account doest not exist:";
        }else{
            cout<<"\n this account exist at ="<<flag;
            cout<<"\n(a+flag)->Balance = "<<(a+flag)->Balance;
        }
    }
}
void writeToFile(Account a[],int c){
    ofstream myFile("Accounts.csv", ofstream::out);
    myFile<<"\n Name"<<","<<"\n AccountNo"<<","<<"\nBalance";
    for(int i=0;i<=c; i++){
        myFile<<a[i].Name<<","<<a[i].AccountNo<<","<<a[i].Balance;
    }
    myFile.close();
}
int main(){
    Account first,second;
    existAccount("Aimen",first.Name);
    existAccount("3337",first.AccountNo);
    first.Balance = 6000;
    existAccount("Fatima", second.Name);
    existAccount("7728",second.AccountNo);
    second.Balance = 4000;
    Account a[100] ={first,second};
    int s=1;
    int num;
    char b[50];
    for(int i=0; i>=0; i++){
        cout<<"\n press 1 for open an account:"<<"\n press 2 for deposit money:"<<"\npress 3 for withdraw money:";
        cout<<"\n press 4 for check balance:"<<"\n press 5 for exit:";
        cin>>num;
        if(num==1){
            s = s+1;
            openAccount(a,s);

        }else if(num==2){
            cout<<"\n enter Account number:";
            cin>>b;
            depositMoney(a,b,s);

        }else if(num==3){
            cout<<"\n enter Account number:";
            cin>>b;
            withdrawMoney(a,b,s);

        }else if(num==4){
            cout<<"\n enter Account number:";
            cin>>b;
            checkBalance(a,b,s);

        }else if(num==5){
            writeToFile(a,s);
            return 0;

        }
    }


}