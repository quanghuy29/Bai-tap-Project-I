//Bui Quang Huy 20183764
#include<iostream>
using namespace std;

bool isSoNguyenTo(int a){
    if (a == 2) return true;
    for(int i = 2; i < a; i++){
        if(a % i == 0) return false;
    }
    return true;
}

int main(){
    int N = 9;
    while(!isSoNguyenTo(N)){
        for(int i = 2; i <= N; i++){
            if(N % i == 0 && isSoNguyenTo(i)) {
                cout << i << " * ";
                N = N / i;
                break;
            }       
        }
    }
    cout << N << endl;
}