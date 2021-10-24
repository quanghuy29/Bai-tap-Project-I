//Bui Quang Huy 20183764
#include<iostream>
using namespace std;
#define N 6
int main(){
    int a[N] = {9, 0, 6, 20, 0, 3};
    bool mark[N];
    memset(mark, false, sizeof mark);
    for (int i = 0; i < N; i++)
    {
        if(a[i] == 0) mark[i] = true;
    }
    for (int i = 0; i < N; i++)
    {
        if(!mark[i]) cout << a[i] << " ";
    }
    cout << "\n";
}