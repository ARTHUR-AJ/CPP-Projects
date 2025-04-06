#include <iostream>

using namespace std;

int main(){
    srand(time(0));
    int randomNumber = (rand()%11);
 

  if(randomNumber==0){
        cout<<"Your subscription has expired"<<endl;
    }
    else if(randomNumber==1){
        cout<<"Your subscription expires within a day!"<<endl;
        cout<<"Renew now and save 20%!"<<endl;
    }
    else if(randomNumber<=5){
        cout<<"Your subscription expires in "<<randomNumber<<" days!"<<endl;
        cout<<"Renew now and save 20%!"<<endl;
    }
    else if(randomNumber<10){
        cout<<"Your subscription will expire soon. Renew now!"<<endl;
     }
     else{
        cout<<"You have an active subscription"<<endl;
     }


    return 0;
}