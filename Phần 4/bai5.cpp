//Bui Quang Huy 20183764
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "000101010001110010";
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if(str[i] == '1') str[i] = '0';
        else str[i] = '1';
        cout << str[i];
    }
    cout << "\n";
}