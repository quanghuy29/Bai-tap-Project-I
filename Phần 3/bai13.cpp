//Bui Quang Huy 20183764
#include<iostream>
using namespace std;

int main(){
    int n;
    int a[8][8];
    do {
        cout << "Nhap n: "; cin >> n;
        if(n < 3 || n > 8) cout << "Vui long nhap lai!\n";
    }
    while(n < 3 || n > 8);
    int d = 0, i, value = 1;
    int hang = n - 1, cot = n - 1;
    while(value <= n * n){
        for(i = d; i <= cot; i++)
            a[d][i] = value++;
        for(i = d + 1; i <= hang; i++)
            a[i][cot] = value++;
        for(i = cot - 1; i >= d && value <= n*n; i--)
            a[hang][i] = value++;
        for(i = hang - 1; i > d && value <= n*n; i--)
            a[i][d] = value++;
        d++; hang--; cot--;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            if(a[i][j] < 10)
                cout << a[i][j] << "  ";
            else cout << a[i][j] << " ";
        cout << endl;
    }
}