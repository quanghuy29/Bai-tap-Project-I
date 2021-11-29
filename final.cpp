//Bui Quang Huy 20183764
#include <iostream>
using namespace std;

bool checkHopSo(int a){
    if (a == 2) return false;
    for(int i = 2; i < a; i++){
        if (a % i == 0) return true;
    }
    return false;
}
bool isSohh(int a){
    if (a == 1) return true;
    int s = 0;
    for(int i = 1; i < a; i++){
        if (a % i == 0) s += i;
    }
    if (s == a) return true;
    else return false;
}
void inTGVuong(int h){
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
int tong(int a){
    int S = 0;
    for(int i = 1; i <= a; i++){
        S += i;
    }
    return S;
}
int giaithua(int a){
    int P = 1;
    for(int i = 1; i <= a; i++){
        P = P * i;
    }
    return P;
}
int tonggt(int a){
    int S = 0;
    for(int i = 1; i <= a; i++){
        S += giaithua(i);
    }
    return S;
}
int fib(int a){
    if (a == 1) return 1;
    if (a == 2) return 2;
    return fib(a - 1) + fib(a - 2);
}
int menuFunc(){
    int num1, num2;
    cout << "------Chon chuong bai tap: 1 -> 4 --- Chon 0 de thoat!\n";
    cin >> num1;
    switch (num1)
    {
    case 0:
        return -1;
        break;
    case 1:
        cout << "-------Chon cau: 1 -> 12\n";
        cin >> num2;
        if (num2 <= 0 || num2 >= 13) {
            cout << "Khong ton tai cau. Vui long nhap lai!\n";
            return 0;
        }
        else {
            cout << "-----Loi giai---\n";
            return num1 * 100 + num2;
        }
        break;
    case 2:
        cout << "-------Chon cau: 1 -> 4\n";
        cin >> num2;
        if (num2 <= 0 || num2 >= 5) {
            cout << "Khong ton tai cau. Vui long nhap lai!\n";
            return 0;
        }
        else {
            cout << "-----Loi giai---\n";
            return num1 * 100 + num2;
        }
        break;
    case 3:
        cout << "-------Chon cau: 1 -> 13\n";
        cin >> num2;
        if (num2 <= 0 || num2 >= 14) {
            cout << "Khong ton tai cau. Vui long nhap lai!\n";
            return 0;
        }
        else {
            cout << "-----Loi giai---\n";
            return num1 * 100 + num2;
        }
        break;
    case 4:
        cout << "-------Chon cau: 1 -> 16\n";
        cin >> num2;
        if (num2 <= 0 || num2 >= 17) {
            cout << "Khong ton tai cau. Vui long nhap lai!\n";
            return 0;
        }
        else {
            cout << "-----Loi giai---\n";
            return num1 * 100 + num2;
        }
        break;
    default:
        cout << "Khong ton tai chuong. Vui long nhap lai!\n";
        return 0;
    }
}
int main() {
    int ret = 0;
    while(1){
        ret = menuFunc();
        switch (ret)
        {
        case -1: 
            return 0;
        case 101: {
            for(int i = 2; i < 100; i++){
                if (checkHopSo(i)) cout << i << " ";
            }
            cout << endl;
            break;
        }
        case 102: {
            int cnt = 0;
            int a = 2;
            while (cnt < 20){
                if (!checkHopSo(a)) {
                    cout << a << " ";
                    cnt++;
                }
                a++;
            }   
            cout << endl;
            break;
        }
        case 103:{
            for(int i = 1000; i <= 2000; i++)
                if (!checkHopSo(i)) cout << i << " ";
            cout << endl;
            break;
        }
        case 104:{
            for(int i = 1; i < 100; i++){
                if((i % 7 == 0) && (i % 3 == 0)) cout << i << " ";
            }
            cout << endl;
            break;
        }
        case 105:{
            for(int i = 1000; i <= 2000; i++){
                if(i % 3 == 0 && i % 5 == 0 && i % 7 == 0) cout << i << " ";
            }
            cout << endl;
            break;
        }
        case 106:{
            int cnt = 0;
            int a = 1;
            while(cnt < 5){
                if (isSohh(a)){
                    cout << a << " ";
                    cnt++;
                }
                a++;
            }
            cout << endl;
            break;
        }
        case 107:{
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
            break;
        }
        case 108:{
            int N = 247;
            for(int i = 2; i <= N; i++){
                if(N % i == 0 && !checkHopSo(i)) {
                    cout << i << endl;
                    break;
                }       
            }
            break;
        }
        case 109:{
            int N = 126;
            while(checkHopSo(N)){
                for(int i = 2; i <= N; i++){
                    if(N % i == 0 && !checkHopSo(i)) {
                        cout << i << " * ";
                        N = N / i;
                        break;
                    }       
                }
            }
            cout << N << endl;
            break;
        }
        case 110:{
            int N = 247;
            for(int i = 2; i < N; i++){
                if(N % i == 0 && !checkHopSo(i)) {
                    cout << i << " ";
                }       
            }
            cout << endl;
            break;
        }
        case 111:{
            int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            int i = 0 + rand()% 10, j = 0 + rand()% 5;
            int temp = A[j];
            A[j] = A[i];
            A[i] = temp;
            for(int i = 0; i < 10; i++){
                cout << A[i] << " ";
            }
            cout << endl;
            break;
        }
        case 112:{
            int h;
            cout << "Nhap h:";
            cin >> h;
            inTGVuong(h);
            break;
        }
        case 201:{
            int N = 20;
            float S = 0;
            for(int i = 1; i <= N; i++){
                S += (float)1/tong(i);
            }
            cout << S << endl;
            break;
        }
        case 202:{
            int N = 5;
            float S = 0;
            for(int i = 1; i <= N; i++){
                S += (float)1/giaithua(i);
            }
            cout << S << endl;
            break;
        }
        case 203:{
            int N = 5;
            float S = 0;
            for(int i = 1; i <= N; i++){
                S += (float)1/tonggt(i);
            }
            cout << S << endl;
            break;
        }
        case 204:{
            int N = 6;
            cout << fib(N) << endl;
        }
        case 301:{
            int a[6] = {1, 3, 6, 2, 4, 9};
            int tmp;
            for(int i = 0; i < 5; i++){
                for(int j = i + 1; j < 6; j++){
                    if(a[i] < a[j]){
                        tmp = a[i];
                        a[i] = a[j];
                        a[j] = tmp;
                    }
                }
            }
            for(int i = 0; i < 6; i++)
                cout << a[i] << " ";
            cout << endl;
            break;
        }
        case 302:{
            int a[6] = {1, 3, 6, 2, 4, 9};
            for(int i = 0; i < 6; i++){
                if(!checkHopSo(a[i]))
                cout << a[i] << " ";
            }
            cout << endl;
            break;
        }
        case 303:{
            int a[6] = {2, 3, 6, 2, 4, 2};
            int amin = 1e9;
            for(int i = 0; i < 6; i++){
                amin = min(amin, a[i]);
            }
            cout << amin << endl;
            for(int i = 0; i < 6; i++)
                if (amin == a[i])
                    cout << i + 1 << " ";
            cout << endl;
            break;
        }
        case 304:{
            int a[6] = {9, 3, 6, 2, 9, 2};
            int amax = -1;
            for(int i = 0; i < 6; i++){
                amax = max(amax, a[i]);
            }
            cout << amax << endl;
            for(int i = 0; i < 6; i++)
                if (amax == a[i])
                    cout << i + 1 << " ";
            cout << endl;
            break;
        }
        case 305:{
            int a[6] = {9, 3, 6, 2, 9, 2};
            int nt = 0, hs = 0;
            for(int i = 0; i < 6; i++){
                if (!checkHopSo(a[i])) nt++;
                else hs++;
            }
            cout << "So so nguyen to: " << nt << endl;
            cout << "So so hop so: " << hs << endl;
            break;
        }
        case 306:{
            int a[6] = {9, 3, 6, 2, 9, 2};
            bool mark[6];
            memset(mark, false, sizeof mark);
            for(int i = 0; i < 5; i++){
                for(int j = i + 1; j < 6; j++){
                    if ((mark[j] == false) && (a[i] % a[j] == 0) & (a[i] != a[j])){
                        cout << a[j] << " ";
                        mark[j] = true;
                    }
                } 
            }
            cout << "\n";
            break;
        }
        case 307:{
            int a[6] = {9, 3, 6, 20, 7, 3};
            int cnt[6];
            for (int i = 0; i < 6; i++)
            {
                cnt[i] = 1;
            }
            
            for (int i = 0; i < 6; i++)
            {
                for(int j = 0; j < 6; j++)
                    if(a[i] == a[j] && i != j) cnt[i]++;
            }
            int min = 1e9;
            for(int i = 0; i < 6; i++)
            {
                if(cnt[i] == 1 && a[i] <= min) min = a[i];
            }
            if (min == 1e9) cout << "Khong tim duoc!\n";
            else cout << min << "\n";
            break;
        }
        case 308:{
            int a[6] = {9, 0, 6, 20, 0, 3};
            bool mark[6];
            memset(mark, false, sizeof mark);
            for (int i = 0; i < 6; i++)
            {
                if(a[i] == 0) mark[i] = true;
            }
            for (int i = 0; i < 6; i++)
            {
                if(!mark[i]) cout << a[i] << " ";
            }
            cout << "\n";
            break;
        }
        case 309:{
            int a[6] = {9, 0, 6, 20, 0, 3};
            int c = 5;
            int l, r, m;
            for (int i = 0; i < 6; i++)
            {
                if(a[i] < c) l++;
                else if(a[i] > c) r++;
                else m++;
            }
            cout << "so so <c: " << l << "\n";  
            cout << "so so >c: " << r << "\n";  
            cout << "so so =c: " << m << "\n";  
            break;
        }
        case 310:{
            int a[10] = {1, 1, 2, 2, 2, 4, 9, 9, 9, 10};
            int max = 0;
            int dp[10];
            for (int i = 0; i < 10; i++)
            {
                dp[i] = 1;
            }  
            for (int i = 1; i < 10; i++)
            {
                if(a[i] == a[i - 1]) dp[i] = dp[i - 1] + 1;
                if(dp[i] > max) max = dp[i];
            }
            cout << max << "\n";
            for (int i = 0; i < 10; i++)
            {
                if(dp[i] == max) cout << i - max + 1 << " ";
            }
            cout << "\n";
            break;
        }
        case 311:{
            int a[10] = {9, 2, 3, 4, 2, 4, 9, 9, 9, 10};
            int f[10];
            for(int i = 0; i < 10; i++)
                f[i] = 1;
            int res = 1;
            for(int i = 0; i < 9; i++){
                if(a[i] < a[i + 1]) {
                    f[i + 1] = f[i] + 1;
                    res = max(res, f[i + 1]);
                }
                else f[i + 1] = 1;
            }
            for(int i = 0; i < 10; i++)
                if(f[i] == res){
                    for(int j = i - res + 1; j <= i; j++)
                        cout << a[j] << " ";
                    cout <<  endl;
                    break;
                }
            break;
        }
        case 312:{
            int a[5] = {1, 2, 5, 7, 9};
            int b[6] = {1, 2, 5, 7, 9, 6};
            int i = 0, j = 0;
            while(i < 6 && j < 5){
                if(a[j] == b[i]){
                    i++;
                    j++;
                    if(j == 5) {
                        cout << "Yes\n";
                        return 0;
                    }
                }
                else{
                    i = i - j + 1;
                    j = 0;
                }
            }
            cout << "No\n";
            break;
        }
        case 313:{
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
            break;
            }
        case 401:{
            string str = "Bui         Quang      Huy";
            int len = str.length();
            for (int i = len; i > 0; i--){
                if(str[i] == ' ' && str[i - 1] == ' '){
                    str.erase(str.begin() + i);
                }
            }
            cout << str << endl;
            break;
            } 
        case 402:{
            string str = "Bui abc Quag abcabc huy bqh";
            int len = str.length(), cnt = 0;
            for(int i = 0; i < len -  3; i++){
                if(str[i] == 'a' && str[i + 1] == 'b' && str[i + 2] == 'c')
                cnt++;
            }
            cout << cnt << "\n";
            break;
        }
        case 403:{
            string str = "Bui Quang David";
            int len = str.length();
            for(int i = len - 1; i >= 0; i--){
                if(str[i] == ' '){
                    for(int j = i + 1; j < len; j++)
                        cout << str[j];
                    cout << "\n";
                    break;
                }
            }
            break;
        } 
        case 404:{
            string str = "Bui Quang Huy";
            int len = str.length();
            for (int i = 0; i < len; i++){
                if(str[i] == ' '){
                    for(int j = 0; j <= i; j++)
                        cout << str[j];
                    cout << "\n";
                    break;
                }
            }  
            break;      
        }  
        case 405:{
            string str = "000101010001110010";
            int len = str.length();
            for (int i = 0; i < len; i++)
            {
                if(str[i] == '1') str[i] = '0';
                else str[i] = '1';
                cout << str[i];
            }
            cout << "\n";
            break;
        }  
        case 406:{
            string str = "Bui Quang Huy";
            int len = str.length();
            for(int i = len - 1; i >= 0; i--)
                cout << str[i];
            cout << "\n";
            break;
        }  
        case 407:{
            string str = "Hoc luc 13h00 tai phong TC301";
            int len = str.length();
            for(int i = 0; i < len; i++){
                if(str[i] >= '0' && str[i] <= '9') str[i] = '$';
                cout <<str[i];
            }
            cout << "\n";
            break;
        }  
        case 408:{
            string s1 = "hoc";
            string s2 = "hoc tai truong dai hoc bach khoa ha noi";
            int len1 = s1.length();
            int len2 = s2.length();
            int cnt = 0;
            for(int i = 0; i < len2; i++){
                if(s2.find(s1, i) != -1){
                    cnt++;
                    i = s2.find(s1, i);
                }
            }
            cout << cnt << endl;
            break;
        }  
        case 409:{
            string s = "bui quang huy";
            int i = 2, j = 10;
            char tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
            cout << s << endl;  
            break;
        }  
        case 410:{
            string s[] = {"hi", "xin chao","how are you","im fine", "thank you","and you","me too"};
            int len = sizeof(s) / sizeof(string);
            int smax = -1;
            for(int i = 0; i < len; i++){
                int size = s[i].length();
                if(size > smax) {
                    smax = size;
                }
            }
            for(int i = 0; i < len; i++)
                if(s[i].length() == smax) cout << s[i] << "\n";
            break;
        }  
        case 411:{
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
            break;
        }  
        case 412:{
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
            break;
        }  
        case 413:{
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
            break;
        }  
        case 414:{
            string s = "1111100000";
            int len = s.length();
            int n = 2;
            while(n > 1){
                for(int i = 0; i < len - 1; i++){
                    char tmp = s[i];
                    s[i] = s[i + 1];
                    s[i + 1] = tmp; 
                }
                n--;
            }
            cout << s << endl;
            break;
        }  
        case 415:{
            string s2 = "Em  thich hoc";
            string s1 = "khong";
            s2.insert(3, s1);
            cout << s2 << endl;
            break;
        }  
        case 416:{
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
            break;
        }   
    }
}
}