//Bui Quang Huy 20183764
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Bui Quang Huy";
    int len = str.length();
    for(int i = len - 1; i >= 0; i--)
        cout << str[i];
    cout << "\n";
}