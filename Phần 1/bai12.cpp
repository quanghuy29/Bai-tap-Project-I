//Bui Quang Huy 20183764

#include<iostream>
using namespace std;

void inTGVuong(int h){
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int h;
    cout << "Nhap h:";
    cin >> h;
    inTGVuong(h);

}