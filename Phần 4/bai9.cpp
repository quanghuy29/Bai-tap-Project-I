//Bui Quang Huy 20183764
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "bui quang huy";
    int i = 2, j = 10;
    char tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
    cout << s << endl;
}