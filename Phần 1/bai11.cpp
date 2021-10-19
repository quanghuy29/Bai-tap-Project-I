//Bui Quang Huy 20183764
#include<iostream>
#include<stdlib.h>
using namespace std;
#define N 10
int main(){
    int A[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = 0 + rand()% 10;
    int j = 0 + rand()% 5;

    int temp = A[j];
    A[j] = A[i];
    A[i] = temp;

    for(int i = 0; i < N; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}