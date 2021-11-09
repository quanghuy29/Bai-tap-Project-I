//Bui Quang Huy 20183764
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "thich";
    string s2 = "khong thich hoc";
    int cnt = 0;
    int len1 = s1.length(), len2 = s2.length();
    bool mark[len2];
    memset(mark, false,sizeof mark);
    for(int i = 0; i < len1; i++){
        for(int j = 0; j < len2; j++){
            if(s1[i] == s2[j] && mark[j] == false){
                //cout << "i " << i << " j " << j << endl;
                cnt++;
                break;
            }
            else mark[j] = true;
        }
    }
    if(cnt == len1) cout << "Yes\n";
    else cout << "No\n";
}