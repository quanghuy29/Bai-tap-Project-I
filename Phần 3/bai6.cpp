//Bui Quang Huy 20183764
#include<iostream>
using namespace std;
#define N 6
int main(){
    int a[N] = {9, 3, 6, 2, 9, 2};
    bool mark[N];
    memset(mark, false, sizeof mark);
    for(int i = 0; i < N - 1; i++){
        for(int j = i + 1; j < N; j++){
            if ((mark[j] == false) && (a[i] % a[j] == 0) & (a[i] != a[j])){
                cout << a[j] << " ";
                mark[j] = true;
            }
        } 
    }
    cout << "\n";
}