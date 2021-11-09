//Bui Quang Huy 20183764
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Bui Quang Huy";
    int len = str.length();
    for (int i = 0; i < len; i++){
        if(str[i] == ' '){
            for(int j = 0; j <= i; j++)
                cout << str[j];
            cout << "\n";
            break;
        }
    }
}