#include <iostream>
#include <array>

using namespace std;

int main(){
    string arr[] = {"B123", "C234", "A345", "C15","B177","G3003","C235","B179"}; 
    int count = 0;
    
    for(int i = 0; i<=7;i++){
        if(arr[i][0] == 'B'){
            count++;
    }
}

string newArr[count];
count = 0;
for(int i = 0; i<=7;i++){
    string element = arr[i];
    if(arr[i][0] == 'B'){
        newArr[count] = arr[i];
        count++;
    }
}
    for (int i = 0; i < count; i++){
    cout<<newArr[i]<<endl;
    }

    return 0;
}