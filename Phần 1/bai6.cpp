//Bui Quang Huy 20183764
#include<iostream>
using namespace std;

bool isSohh(int a){
    if (a == 1) return true;
    int s = 0;
    for(int i = 1; i < a; i++){
        if (a % i == 0) s += i;
    }
    if (s == a) return true;
    else return false;
}
int main(){
    int cnt = 0;
    int a = 1;
    while(cnt < 5){
        if (isSohh(a)){
            cout << a << " ";
            cnt++;
        }
        a++;
    }
    cout << endl;
}