#include <iostream>

using namespace std;

double square(double length);
double rectangle(double length, double width);
double triangle(double base, double height);

int main(){
    int selection;
    double width;
    double length;
    bool control = true;
    

    do{
    cout<<"Please select the area of the shape to calculate"<<endl;
    cout<<"1. Square"<<endl;
    cout<<"2. Rectangle"<<endl;
    cout<<"3. Triangle"<<endl;
    cout<<"4. Quit Program"<<endl; 
    cout<<endl;

    cout<<"Enter selection: "<<endl;
    cin>>selection;
    switch (selection)
    {
    case 1: 
     cout<<"Enter length"<<endl;
     cin>>length;
     square(length);
    break;
    case 2: 
     cout<<"Enter length"<<endl;
     cin>>length;
     cout<<"Enter width"<<endl;
     cin>>width;
     rectangle(length,width);
    break;
    case 3: 
    cout<<"Enter base"<<endl;
    cin>>length;
    cout<<"Enter height"<<endl;
    cin>>width;
    triangle(length,width);
    break;
    case 4: 
        control = false;
    break;
    
    default:cout<<"Your input was: 5 which is an invalid input\nplease enter a valid input!!!"<<endl;
        break;
    }
    }while(control);
    return 0;
}

double square(double length){
    double area = length * length;
    cout<<"The area of a square of size "<<length;
    cout<<" is equal to "<<area;
}
double rectangle(double length, double width){
    double area = length * length;
    cout<<"The area of a rectangle of size "<<length<<" x "<<width<<" is equal to "<<area;
}
double triangle(double base, double height) { 
 double area = base * height;
cout<<"The area of a base "<<base<<" and height "<<height<<" is equal to "<<area;
}