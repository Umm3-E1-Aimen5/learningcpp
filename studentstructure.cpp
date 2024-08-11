#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct student{
	int ID;
	string Name;
	int Age;
	float G;
};
student addStudent(student );
void printDetail(student );
void displayRecord(vector<student>);
void searchStudent(vector<student>,int);
void averageGrade(vector<student>);
void oldestOrYoungest(vector<student>);
int main(){
	vector<student> v1;
    int num;
	for(int i = 0; i>=0; i++){
		cout<<"press 1 for add student"<<endl<<"press 2 for display record of students"<<endl<<"press 3 for search student"<<endl;
		cout<<"press 4 for average Grade of  students"<<endl<<"press 5 for find oldest or youngest student"<<endl<<"press 6 for exit"<<endl;
		cin>>num;
		if(num == 1){
			student s;
			s = addStudent(s);
			v1.push_back(s);

		}else if(num == 2){
			displayRecord(v1);
		}else if(num == 3){
            int ID;
			cout<<"Enter ID "<<endl;
			cin>>ID;
			searchStudent(v1,ID);
		}else if(num == 4){
            averageGrade(v1);

		}else if(num == 5){
            oldestOrYoungest(v1);

		}else if(num == 6){
			return 0;
		}
	}
	
	
}
student addStudent(student s){
    cout<<"Enter Id"<<endl;
	cin>>s.ID;
	cout<<endl;	
	cout<<"Enter Name"<<endl;
	cin>>s.Name;
	cout<<"Enter Age"<<endl;
	cin>>s.Age;
	cout<<"Enter Grade"<<endl;
	cin>>s.G;
	return s;
}
void printDetail(student s){
	cout<<"\n display data"<<endl;
	cout<<"ID is = "<<s.ID<<endl;
	cout<<"Name is "<<s.Name<<endl;
	cout<<"Age is "<<s.Age<<endl;
	cout<<"Grade is  "<<s.G<<endl;
}
void displayRecord(vector<student> v1){
	for(int i =0; i<v1.size(); i++){
		student t = v1.at(i);
		printDetail(t);
	}
}
void searchStudent(vector<student> v1,int ID){
	int flag = -1;
	student t ;
	for(int i = 0; i<v1.size(); i++){
		 t = v1.at(i);
		if(t.ID == ID){
            flag = i;
			break;
		}
	}
	if(flag == -1){
		cout<<ID  <<"This type of id student does not exist"<<endl;
	}else{
		printDetail(t);
	}
}
void averageGrade(vector<student> v1){
	float G = 0.0;
	int count = v1.size();
	float Avg;
	student t;
	for(int i = 0; i<v1.size(); i++){
		t = v1.at(i);
		G = G + t.G;
	}
	Avg = G / count;
	cout<< " This is average grade of all students  "<< Avg<<endl;
}
void oldestOrYoungest(vector<student> v2){
	int i = 0;
	int oldest = v2.at(i).Age;
	int youngest = v2.at(i).Age;
	student t;
	for( i = 0; i<v2.size(); i++){
		t = v2.at(i);
		if( t.Age > oldest){
			oldest = t.Age;
		}else if(t.Age < youngest){
			youngest = t.Age;
		}
	}
	cout<< "Oldest student is  "<<oldest<<endl;
	cout<< "Youngest student is  "<<youngest<<endl;
}
