//Bui Quang Huy 20183764
#include<iostream>
using namespace std;

bool checkHopSp(int a){
    if (a == 2) return false;
    for(int i = 2; i < a; i++){
        if (a % i == 0) return true;
    }
    return false;
}

int main(){
    for(int i = 2; i < 100; i++){
        if (checkHopSp(i)) cout << i << " ";
    }
    cout << endl;
}