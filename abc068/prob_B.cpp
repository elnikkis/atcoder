#include <iostream>
using namespace std;

int solve(int n)
{
    if(n % 2 != 0){
        return 0;
    }
    return solve(n / 2) + 1;
}

int main()
{
    int N;
    cin >> N;

    int max_div = 0;
    int max_num = 1;
    for(int i=N; i>0; i--){
        int r = solve(i);
        if(r > max_div){
            max_div = r;
            max_num = i;
        }
    }
    cout << max_num << endl;
    return 0;
}
