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
    for(int i = 1000; i <= 2000; i++){
        if (checkNgto(i)) cout << i << " ";
    }
    cout << endl;
}