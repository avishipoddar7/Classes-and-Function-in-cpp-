//exp11 a 
// cpp classes and object 
//Student details 


#include<iostream>
#include <string>

using namespace std ; 

    class Student {
        public:
        string name ;
        string branch ;
        string subject ;
        string year;
        float result ;

    };
    int main(){

        Student s1 ;

        s1.name="Avishi ";
        s1.branch="ET&C" ;
        s1.subject ="C++";
        s1.year="2nd year ";
        s1.result=8.5;

        cout<<s1.name<<endl<<s1.branch<<endl<<s1.subject<<endl<<s1.year<<endl<<s1.result<<endl; 


return 0 ;

}