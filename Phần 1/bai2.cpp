//Bui Quang Huy 20183764
#include<iostream>
using namespace std;

bool checkNgto(int a){
    if (a == 2) return true;
    for(int i = 2; i < a; i++){
        if (a % i == 0) return false;
    }
    return true;
}

int main(){
    int cnt = 0;
    int a = 2;
    while (cnt < 20){
        if (checkNgto(a)) {
            cout << a << " ";
            cnt++;
        }
        a++;
    }
    cout << endl;
}