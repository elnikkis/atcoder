#include <iostream>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;

    int total = 0;
    for(int n=1; n<=N; n++){
        int sum = 0;
        int target = n;
        do{
            sum += target % 10;
            target /= 10;
        }
        while(target > 0);
        if(sum >= A && sum <= B){
            total += n;
        }
    }
    cout << total << endl;
    return 0;
}
