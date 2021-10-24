//Bui Quang Huy Huy 20183764
#include<iostream>
using namespace std;
#define N 6

bool checkNgto(int a){
    if (a == 1) return false;
    if (a == 2) return true;
    for(int i = 2; i < a; i++){
        if (a % i == 0) return false;
    }
    return true;
}
int main(){
    int a[N] = {1, 3, 6, 2, 4, 9};
    for(int i = 0; i < N; i++){
        if(checkNgto(a[i]))
         cout << a[i] << " ";
    }
    cout << endl;
}