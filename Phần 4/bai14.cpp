//Bui Quang Huy 20183764
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "1111100000";
    int len = s.length();
    int n = 2;
    while(n > 1){
        for(int i = 0; i < len - 1; i++){
            char tmp = s[i];
            s[i] = s[i + 1];
            s[i + 1] = tmp; 
        }
        n--;
    }
    
    cout << s << endl;
}