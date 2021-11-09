//Bui Quang Huy 20183764
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "hoc";
    string s2 = "hoc tai truong dai hoc bach khoa ha noi";
    int len1 = s1.length();
    int len2 = s2.length();
    int cnt = 0;
    for(int i = 0; i < len2; i++){
        if(s2.find(s1, i) != -1){
            cnt++;
            i = s2.find(s1, i);
        }
    }
    cout << cnt << endl;
}