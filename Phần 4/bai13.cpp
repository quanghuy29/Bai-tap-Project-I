//Bui Quang Huy 20183764
#include<iostream>
#include<string>
using namespace std;
int main(){
    int cnt = 0;
    string hoten[] = {"Hoang Thi Han","Bui Quang Huy","Dang Bao Lam","Phan Thi Huong","Vu Thi Ha"};
    int len = sizeof(hoten) / sizeof(string);
    for (int i = 0; i < len; i++){
        int l = hoten[i].length();
        string ten = "";
        for(int j = l - 1; j > 0; j--){
            if(hoten[i][j] == ' '){
                if(hoten[i][j + 1] == 'H') cnt++;
                break;
            }
        }
    }
    cout << cnt << endl; 
}