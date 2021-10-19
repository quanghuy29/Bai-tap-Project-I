//Bui Quang Huy 20183764
#include<iostream>
using namespace std;

int tong(int a){
    int S = 0;
    for(int i = 1; i <= a; i++){
        S += i;
    }
    return S;
}

int main(){
    int N = 20;
    float S = 0;
    for(int i = 1; i <= N; i++){
        S += (float)1/tong(i);
    }
    cout << S << endl;
}