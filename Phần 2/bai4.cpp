//Bui Quang Huy 20183764
#include<iostream>
using namespace std;

int fib(int a){
    if (a == 1) return 1;
    if (a == 2) return 2;
    return fib(a - 1) + fib(a - 2);
}

int main(){
    int N = 6;
    cout << fib(N) << endl;
}