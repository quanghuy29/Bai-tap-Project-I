//Bui Quang Huy Huy 20183764
#include<iostream>
using namespace std;
#define N 6
int main(){
    int a[N] = {9, 3, 6, 2, 9, 2};
    int amax = -1;
    for(int i = 0; i < N; i++){
        amax = max(amax, a[i]);
    }
    cout << amax << endl;
    for(int i = 0; i < N; i++)
        if (amax == a[i])
            cout << i + 1 << " ";
    cout << endl;
}