//Bui Quang Huy 20183764
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s2 = "Em  thich hoc";
    string s1 = "khong";
    s2.insert(3, s1);
    cout << s2 << endl;
}