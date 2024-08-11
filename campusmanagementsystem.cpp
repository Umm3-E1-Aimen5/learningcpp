#include<iostream>
using namespace std;
struct student{
    int id;
    char name[10];
    int age;
    char major[10];
};
void addstudent(student s[], int c){
         cout<<"\n enter id: ";
            cin>>s[c].id;
            cout<<"\n enter name: ";
            cin>>(s+c)->name;
            cout<<"\n enter age: ";
            cin>>(s+c)->age;
            cout<<"\n enter major: ";
            cin>>(s+c)->major;
}
void displaystudent(student s[] , int c , int id){
    for(int i = 0; i<c; i++){
         if(s[i].id == id){
            cout<<"\n name is:  "<< s[i].name;
            cout<<"\n age is:  "<<s[i].age;
            cout<<"\n major is:  "<<s[i].major;
        }
    }
}
void listallstudent(student s[],int l){
    for(int i =0; i<l; i++){
        cout<<"\n id is:  "<<s[i].id;
        cout<<"\n name is:  "<< s[i].name;
        cout<<"\n age is:  "<<s[i].age;
        cout<<"\n major is:  "<<s[i].major;
    }
}
void updatestudentdetail(student* s, int c,int id){
    for(int i = 0; i<c; i++){
        if((s+i)->id == id){
            cout<<"\n enter id: ";
            cin>>(s+i)->id;
            cout<<"\n enter name: ";
            cin>>(s+i)->name;
            cout<<"\n enter age: ";
            cin>>(s+i)->age;
            cout<<"\n enter major: ";
            cin>>(s+i)->major;
        }

    }
}
void deletestudentdetail(student* s,int l, int id){
    for(int i = 0; i<l; i++){
        if((s+i)->id == id){
            continue;
        }
        cout<<"\n  id is: "<<(s+i)->id;
            cout<<"\n name is: "<<(s+i)->name;
            cout<<"\n age is: "<<(s+i)->age;
            cout<<"\n major is: "<<(s+i)->major;
    }
}
struct course{
    int course_id;
    char course_name[50];
    int credits;
};
void addcourse(course c[], int a){
     cout<<"\n enter course_id: ";
     cin>>(c+a)->course_id;
     cout<<"\n enter course_name: ";
     cin>>(c+a)->course_name;
     cout<<"\n enter credits: ";
     cin>>(c+a)->credits;
}
void displaycourse(course* c, int l, int id){
    for(int i = 0; i<l; i++){
        if((c+i)->course_id == id){
            cout<<"\n course_id is "<<(c+i)->course_id;
            cout<<"\n course_name is  "<<(c+i)->course_name;
            cout<<"\n course credits are  "<<(c+i)->credits;
        }
    }
}
void listallcourses(course c[], int a){
    for(int i = 0; i<a; i++){
        cout<<"\n course_id is "<<c[i].course_id;
        cout<<"\n course_name is:  "<<c[i].course_name;
        cout<<"\n course credits are:  "<<c[i].credits;
    }
}
void updateCourseDetail(course* c, int l, int id){
    for(int i = 0; i<l; i++){
        if((c+i)->course_id == id){
            cout<<"\n enter course id: ";
            cin>>(c+i)->course_id;
            cout<<"\n enter course name: ";
            cin>>(c+i)->course_name;
            cout<<"\n course credits: ";
            cin>>(c+i)->credits;
        }
    }
}
void deleteCourse(course* c, int l, int id){
    for(int i =0; i<l; i++){
        if((c+i)->course_id == id){
            continue;
        }
        cout<<"\n course id is: "<<(c+i)->course_id;
        cout<<"\n course name is:  "<<(c+i)->course_name;
        cout<<"\n course credits are: "<<(c+i)->credits;
    }
}
void enrollStudent(student s[], int stc, course c[], int coc){
    int id;
    cout<<"\n enter course id: ";
    cin>>id;
      for(int i = 0; i<coc; i++){
        if(c[i].course_id == id){
            // addstudent(s,stc);
            cout<<"\n add new student in this course: ";
            cout<<"\n enter id of student: ";
            cin>>(s+stc)->id;
            cout<<"\n enter name of student is: ";
            cin>>(s+stc)->name;
            cout<<"\n enter ageof student is: ";
            cin>>(s+stc)->age;
            cout<<"\n enter major: ";
            cin>>(s+stc)->major;
        }

      }
}
void listCoursesByStudentid(student s[], int stc,course c[],int coc){
    int id;
    cout<<"\n enter id: ";
    cin>>id;
    for(int i =0; i<stc; i++){
        if(s[i].id == id){
            // listallcourses(c,coc);
             cout<<"\n course_id is "<<c[i].course_id;
             cout<<"\n course_name is:  "<<c[i].course_name;
             cout<<"\n course credits are:  "<<c[i].credits;
        }
    }

}
void listStudentByCourseid(student s[], int stc,course c[],int coc){
    int id;
    cout<<"\n enter id: ";
    cin>>id;
    for(int i =0; i<coc; i++){
        if(c[i].course_id == id){
            // listallstudent(s,stc);
             cout<<"\n id is:  "<<s[i].id;
             cout<<"\n name is:  "<< s[i].name;
             cout<<"\n age is:  "<<s[i].age;
             cout<<"\n major is:  "<<s[i].major;
        }
    }
}
int main(){
    student s[100];
    int num;
    int studentcount = 0 ;
    course c[50];
    int coursecount = 0;
    
    for(int i=0; i>=0; i++){
                                cout<<"\n Student Management: ";
        cout<<"\n 1. for add student: "<<"\n 2. for display student details by id: "<<"\n 3. for list all student: ";
        cout<<"\n 4. for update student detail by id: "<<"\n 5. for delete a student by id: ";

                                cout<<"\n Course Management: ";

        cout<<"\n 6. for add a new course: "<<"\n 7. for display course detail by id: "<<"\n 8. list all courses: ";
        cout<<"\n 9. for update course detail by id: "<<"\n 0. delete a course by id:\n ";

                                cout<<"\n Manage Enrollment:";

        cout<<"\n 10. Enroll student in course: "<<"\n 11. list courses by student id: "<<"\n 12. list students by course id:";
        cout<<"\n 13.for exit:";
        cin>>num;
        if(num == 1){
            cout<<"\n Add a new student: ";
            addstudent(s,studentcount);
            studentcount = studentcount+1;
            
        }else if(num == 2){
            int id;
            cout<<"\n display student detail: ";
            cout<<"\n enter id: ";
            cin>>id;
            displaystudent(s,studentcount ,id);

        }else if(num == 3){
            cout<<"\n list all student: ";
            listallstudent(s,studentcount);
        }else if(num == 4){
            int id;
            cout<<"\n update student detail: ";
            cout<<"\n enter id: ";
            cin>>id;
            updatestudentdetail(s,studentcount,id);
        }else if(num == 5){
            int id;
            cout<<"\n delete student detail: ";
            cout<<"\n enter id: ";
            cin>>id;
            deletestudentdetail(s,studentcount,id);
        }else if(num == 6){
            cout<<"\n Add a new course: ";
            addcourse(c,coursecount);
            coursecount = coursecount +1;

        }else if(num == 7){
            int id;
            cout<<"\n Display course by id: ";
            cout<<"\n enter course id: ";
            cin>>id;
            displaycourse(c, coursecount, id);

        }else if(num == 8){
            cout<<"\n List all courses: ";
            listallcourses(c,coursecount);

        }else if(num == 9){
            cout<<"\n Update course detail by id: ";
            int id; 
            cout<<"\n enter course id: ";
            cin>>id;
            updateCourseDetail(c , coursecount, id);

        }else if(num == 0){
            cout<<"\n Delete a course by id: ";
            int id;
            cout<<"\n enter id: ";
            cin>>id;
            deleteCourse(c, coursecount, id);
        }else if(num == 10){
            cout<<"\n Enroll a New student: ";
            enrollStudent(s, studentcount, c, coursecount);
        }else if(num ==11){
           cout<<"\n List courses by student id: ";
            listCoursesByStudentid(s,studentcount,c,coursecount);
        }else if(num  = 12){
            cout<<"\n List student by Course id: ";
            listStudentByCourseid(s,studentcount,c,coursecount);
        }else if(num == 13){
            return 0;
        }
    }
}