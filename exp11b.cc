//exp11 b 
//Car details 

#include<iostream>
#include<iostream> 

using namespace std ; 
class Car {
    public:
    string brand ;
    int year ; 
};

int main(){
    int i ;
    int n ; 
    cout<<"Enter the number of vehicle to be entered in the system"<<endl;
    cin>>n; 
    
    Car vehicle[n];
    for(i=1;i<=n;i++){
        cout<<"Enter Brand name : "<<i<<": "<<endl;
        cin>>vehicle[i].brand;
        cout<<"Enter year of manufacturing ; "<<i<<" : "<<endl;
        cin>>vehicle[i].year;
    }

    return 0;
}

/*
    Output 

Enter the number of vehicle to be entered in the system
3
Enter Brand name : 1: 
Kia
Enter year of manufacturing ; 1 : 
2012
Enter Brand name : 2: 
Honda 
Enter year of manufacturing ; 2 : 
2023
Enter Brand name : 3: 
Porshe
Enter year of manufacturing ; 3 : 
2024 

*/

