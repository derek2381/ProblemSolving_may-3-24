// problem link
// https://www.codechef.com/problems/WAV2

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int n, q;
    cin >> n >> q;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    int val = 0, index;
    while(q--){
        cin >> val;
        auto it = upper_bound(arr.begin(), arr.end(), val);
        index = it - arr.begin();
        if(arr[index-1] == val){
            cout << 0 << endl;
        } else if((n - index) % 2 == 1){
            cout << "NEGATIVE\n";
        } else {
            cout << "POSITIVE\n";
        }
    }

	return 0;
}
