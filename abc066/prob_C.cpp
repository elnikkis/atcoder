#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int main()
{
    int n;
    cin >> n;
    deque<int> dq;

    bool flag = true;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(flag){
            dq.push_front(a);
        }
        else{
            dq.push_back(a);
        }
        flag = !flag;
    }
    if(n % 2 == 0){
        reverse(dq.begin(), dq.end());
    }

    cout << dq.front();
    for(auto itr = dq.begin()+1; itr != dq.end(); ++itr){
        cout << ' ' << *itr;
    }
    cout << endl;
    return 0;
}
