//Bui Quang Huy 20183764
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Bui         Quang      Huy";
    int len = str.length();
    for (int i = len; i > 0; i--){
        if(str[i] == ' ' && str[i - 1] == ' '){
            str.erase(str.begin() + i);
        }
    }
    cout << str << endl;
}