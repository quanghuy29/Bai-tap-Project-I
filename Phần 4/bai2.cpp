//Bui Quang Huy 20183764
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Bui abc Quag abcabc huy bqh";
    int len = str.length(), cnt = 0;
    for(int i = 0; i < len -  3; i++){
        if(str[i] == 'a' && str[i + 1] == 'b' && str[i + 2] == 'c')
        cnt++;
    }
    cout << cnt << "\n";
}