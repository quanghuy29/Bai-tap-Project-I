//Bui Quang Huy 20183764
#include<iostream>
using namespace std;

int main(){
    int a = 0,b = 0,c = 0,d = 0;
    for(int i = 0; i <= 100; i++){
        if(i % 5 == 0) a++;
        else if(i % 5 == 1) b++;
        else if(i % 5 == 2) c++;
        else if(i % 5 == 3) d++;
    }
    cout << "So cac so chia het cho 5: " << a << endl;
    cout << "So cac so chia 5 du 1: " << b << endl;
    cout << "So cac so chia 5 du 2: " << c << endl;
    cout << "So cac so chia 5 du 3: " << d << endl;
}