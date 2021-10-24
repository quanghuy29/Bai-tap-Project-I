//Bui Quang Huy 20183764
#include<iostream>
using namespace std;
#define N 6
int main(){
    int a[N] = {2, 3, 6, 2, 4, 2};
    int amin = 1e9;
    for(int i = 0; i < N; i++){
        amin = min(amin, a[i]);
    }
    cout << amin << endl;
    for(int i = 0; i < N; i++)
        if (amin == a[i])
            cout << i + 1 << " ";
    cout << endl;
}