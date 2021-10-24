//Bui Quang Huy 20183764
#include<iostream>
using namespace std;
#define N 6
int main(){
    int a[N] = {9, 0, 6, 20, 0, 3};
    int c = 5;
    int l, r, m;
    for (int i = 0; i < N; i++)
    {
        if(a[i] < c) l++;
        else if(a[i] > c) r++;
        else m++;
    }
    cout << "so so <c: " << l << "\n";  
    cout << "so so >c: " << r << "\n";  
    cout << "so so =c: " << m << "\n";  
}