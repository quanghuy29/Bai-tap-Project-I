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

int tonggt(int a){
    int S = 0;
    for(int i = 1; i <= a; i++){
        S += giaithua(i);
    }
    return S;
}

int main(){
    int N = 5;
    float S = 0;
    for(int i = 1; i <= N; i++){
        S += (float)1/tonggt(i);
    }
    cout << S << endl;
}