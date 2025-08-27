//exp11d
//calculator 


#include<iostream>
using namespace std ; 

class Calculator{
    public: 
    int num1,num2 ;
    int add (){return num1 + num2;}
    int subtract(){return num1-num2;}
    int multiply(){return num1*num2;}
    int divide(){
        if(num2 !=0)
        return num1/num2;
        else{cout<<"Divion by 0 : Error ";}
        return 0; 
        }
};

int main(){

    Calculator cal ; 
    cout<<"Enter the first number : ";
    cin>>cal.num1;
    cout<<"Enter the second number : ";
    cin>>cal.num2;
    
    int operation ;{ 
    cout<<"Enter the operation to be performed "<<endl<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl;
    cin>>operation;

    switch(operation){
        case 1 : 
        cout<<"Addition is : "<<cal.add()<<endl;
        break;
        
        case 2 : 
        cout<<"Subtration is : "<<cal.subtract()<<endl;
        break;

        case 3 : 
        cout<<"Multiplication is : "<<cal.multiply()<<endl;
        break;

        case 4 :
        cout<<"Division is : "<<cal.divide()<<endl;
        break;

        default:
            cout << "Invalid choice. Please try again.\n";
    }
    while (operation !=4); 
    return 0;
    }



    return 0 ; 

}

/*
  Output 

Enter the first number : 5
Enter the second number : 6
Enter the operation to be performed 
1.Addition
2.Subtraction
3.Multiplication
4.Division
1
Addition is : 11

*/