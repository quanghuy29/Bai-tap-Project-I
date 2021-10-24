//Bui Quang Huy 20183764
#include<iostream>
using namespace std;
#define N 10
int main(){
    int a[N] = {1, 1, 2, 2, 2, 4, 9, 9, 9, 10};
    int max = 0;
    int dp[N];
    for (int i = 0; i < N; i++)
    {
        dp[i] = 1;
    }  
    for (int i = 1; i < N; i++)
    {
        if(a[i] == a[i - 1]) dp[i] = dp[i - 1] + 1;
        if(dp[i] > max) max = dp[i];
    }
    cout << max << "\n";
    for (int i = 0; i < N; i++)
    {
        if(dp[i] == max) cout << i - max + 1 << " ";
    }
    cout << "\n";
}