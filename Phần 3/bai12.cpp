//Bui Quang Huy 20183764
#include<iostream>
using namespace std;
#define N 6
#define M 5
int main(){
    int a[M] = {1, 2, 5, 7, 9};
    int b[N] = {1, 2, 5, 7, 9, 6};
    int i = 0, j = 0;
    while(i < N && j < M){
        if(a[j] == b[i]){
            i++;
            j++;
            if(j == M) {
                cout << "Yes\n";
                return 0;
            }
        }
        else{
            i = i - j + 1;
            j = 0;
        }
    }
    cout << "No\n";
}