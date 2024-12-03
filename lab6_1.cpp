#include<iostream>
using namespace std;

int main(){
    int num;
    int e = 0;
    int o = 0;
    
    while (true) {
    cout << "Enter an integer: ";
    cin >> num;
    
    if(num == 0){
        break;
    }
    
    if(num %2 == 0){
        e++;
    }else{
        o++;
    }
}

    cout << "#Even numbers = " << e << endl;
    cout << "#Odd numbers = " << o << endl;
    
    return 0;
}