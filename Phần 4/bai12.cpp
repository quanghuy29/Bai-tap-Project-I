//Bui Quang Huy 20183764
#include<iostream>
#include<string>
using namespace std;
int main(){
    int cnt = 0;
    string hoten[] = {"Hoang Thi An","Bui Quang Huy","Dang Bao Lam","Phan Thi Hoàng Anh","Vu Thi Ha"};
    int len = sizeof(hoten) / sizeof(string);
    for(int i = 0; i < len; i++){
        int l = hoten[i].length();
        string tendem = "";
        for(int j = 0; j < l; j++){
            if(hoten[i][j] == ' '){
                for(int m = j + 1; m < l; m++){
                    if(hoten[i][m] != ' ')
                        tendem.push_back(hoten[i][m]);
                    else break;
                }   
                break;
            }
        }
        if(tendem.compare("Thi") == 0) cnt++;
    }
    cout << cnt << endl;
}