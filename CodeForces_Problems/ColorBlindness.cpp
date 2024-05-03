// problem link
// https://codeforces.com/problemset/problem/1722/B

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, count = 0;
        cin >> n;

        string str1, str2;
        cin >> str1 >> str2;

        for(int i = 0;i < n;i++){
            if(str1[i] == 'G' && str2[i] == 'B'){
                count++;
            }else if(str1[i] == 'B' && str2[i] == 'G'){
                count++;
            }else if(str1[i] == str2[i]){
                count++;
            }
        }

        if(count == n){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }


    }
}
