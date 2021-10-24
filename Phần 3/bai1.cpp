//Bui Quang Huy Huy 20183764
#include<iostream>
using namespace std;
#define N 6
int main(){
    int a[N] = {1, 3, 6, 2, 4, 9};
    int tmp;
    for(int i = 0; i < N - 1; i++){
        for(int j = i + 1; j < N; j++){
            if(a[i] < a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for(int i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;
}