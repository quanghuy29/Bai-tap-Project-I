//Bui Quang Huy 20183764
#include<iostream>
#include<string>
using namespace std;
int main(){
    int cnt = 0;
    string hoten[] = {"Hoang Hoa An","Bui Quang Huy","Dang Bao Lam","Phan Thien An","Vu Thi Ha"};
    int len = sizeof(hoten) / sizeof(string);
    for (int i = 0; i < len; i++){
        int l = hoten[i].length();
        string ten = "";
        for(int j = l - 1; j > 0; j--){
            if(hoten[i][j] == ' '){
                for(int m = j + 1; m < l; m++){
                    ten.push_back(hoten[i][m]);
                }   
                break;
            }
        }
        if(ten.compare("An") == 0) cnt++;
    }
    cout << cnt << endl; 
}