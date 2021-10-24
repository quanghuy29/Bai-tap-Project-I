//Bui Quang Huy 20183764
#include<iostream>
using namespace std;
#define N 6
bool checkHopSp(int a){
    if (a == 1) return false;
    if (a == 2) return false;
    for(int i = 2; i < a; i++){
        if (a % i == 0) return true;
    }
    return false;
}
bool checkNgto(int a){
    if (a == 1) return false;
    if (a == 2) return true;
    for(int i = 2; i < a; i++){
        if (a % i == 0) return false;
    }
    return true;
}
int main(){
    int a[N] = {9, 3, 6, 2, 9, 2};
    int nt = 0, hs = 0;
    for(int i = 0; i < N; i++){
        if (checkNgto(a[i])) nt++;
        else if (checkHopSp(a[i])) hs++;
    }
    cout << "So so nguyen to: " << nt << endl;
    cout << "So so hop so: " << hs << endl;
}