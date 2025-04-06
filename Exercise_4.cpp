#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main(){
    string num;
    cout<<"Enter an integer value between 5 and 10"<<endl;
    cin>>num;
    do{
        try
        {
            if(stoi(num) >=5 && stoi(num)<=10){
                cout<<"Your input value("<<num<<") has been accepted."<<endl;
                break;
            }
            else{
                cout<<"You entered "<<num<<". Please enter a number between 5 and 10"<<endl;
                cin>>num;
            }
            
        }
        catch(...)
        {
            cout<<"Sorry, you entered an invalid number, please try again"<<endl;
            cin>>num;
        }
        
    }while(true);


    return 0;
}