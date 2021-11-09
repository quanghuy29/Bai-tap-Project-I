//Bui Quang Huy 20183764
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Bui Quang David";
    int len = str.length();
    for(int i = len - 1; i >= 0; i--){
        if(str[i] == ' '){
            for(int j = i + 1; j < len; j++)
                cout << str[j];
            cout << "\n";
            break;
        }
    }
}