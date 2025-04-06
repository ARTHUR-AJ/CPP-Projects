#include <iostream>

using namespace std;

int main(){
    srand(time(0));
    int randomNumber = (rand()%11);
    cout<<randomNumber<<endl;

  switch(randomNumber){
     case 0:cout<<"Your subscription has expired"<<endl;break;

    case 1: 
        cout<<"Your subscription expires within a day!"<<endl;
        cout<<"Renew now and save 20%!"<<endl;
    break;
    case 2:;
    case 3:;
    case 4:;
    case 5:
        cout<<"Your subscription expires in "<<randomNumber<<" days!"<<endl;
        cout<<"Renew now and save 20%!"<<endl;
    break;
    case 6:;
    case 7:;
    case 8:;
    case 9:;
    case 10:
        cout<<"Your subscription will expire soon. Renew now!"<<endl;
     break;
     default:
        cout<<"You have an active subscription"<<endl;
     break;
  }

return 0;
}