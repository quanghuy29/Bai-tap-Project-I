//Bui Quang Huy 20183764
#include<iostream>
using namespace std;
#define N 10
int main(){
    int a[N] = {9, 2, 3, 4, 2, 4, 9, 9, 9, 10};
    int f[N];
    for(int i = 0; i < N; i++)
        f[i] = 1;
    int res = 1;
    for(int i = 0; i < N - 1; i++){
        if(a[i] < a[i + 1]) {
            f[i + 1] = f[i] + 1;
            res = max(res, f[i + 1]);
        }
        else f[i + 1] = 1;
    }
    for(int i = 0; i < N; i++)
        if(f[i] == res){
            for(int j = i - res + 1; j <= i; j++)
                cout << a[j] << " ";
            cout <<  endl;
            break;
        }
}