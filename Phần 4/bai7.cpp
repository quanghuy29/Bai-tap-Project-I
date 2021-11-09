//Bui Quang Huy 20183764
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Hoc luc 13h00 tai phong TC301";
    int len = str.length();
    for(int i = 0; i < len; i++){
        if(str[i] >= '0' && str[i] <= '9') str[i] = '$';
        cout <<str[i];
    }
    cout << "\n";
}