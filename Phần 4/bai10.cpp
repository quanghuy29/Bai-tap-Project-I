//Bui Quang Huy 20183764
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s[] = {"hi", "xin chao","how are you","im fine", "thank you","and you","me too"};
    int len = sizeof(s) / sizeof(string);
    int smax = -1;
    for(int i = 0; i < len; i++){
        int size = s[i].length();
        if(size > smax) {
            smax = size;
        }
    }
    for(int i = 0; i < len; i++)
        if(s[i].length() == smax) cout << s[i] << "\n";
}