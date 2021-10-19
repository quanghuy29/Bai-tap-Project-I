//Bui Quang Huy 20183764
#include<iostream>
using namespace std;

int giaithua(int a){
    int P = 1;
    for(int i = 1; i <= a; i++){
        P = P * i;
    }
    return P;
}

int main(){
    int N = 5;
    float S = 0;
    for(int i = 1; i <= N; i++){
        S += (float)1/giaithua(i);
    }
    cout << S << endl;
}