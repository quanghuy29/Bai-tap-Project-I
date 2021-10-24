//Bui Quang Huy 20183764
#include<iostream>
using namespace std;
#define N 6
int main(){
    int a[N] = {9, 3, 6, 20, 7, 3};
    int cnt[N];
    for (int i = 0; i < N; i++)
    {
        cnt[i] = 1;
    }
    
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            if(a[i] == a[j] && i != j) cnt[i]++;
    }
    int min = 1e9;
    for(int i = 0; i < N; i++)
    {
        if(cnt[i] == 1 && a[i] <= min) min = a[i];
    }
    if (min == 1e9) cout << "Khong tim duoc!\n";
    else cout << min << "\n";
}
