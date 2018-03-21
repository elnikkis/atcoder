#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int d;
    int bucket[101] = {0};
    for(int i=0; i<N; i++){
        cin >> d;
        bucket[d]++;
    }

    int count = 0;
    for(int c: bucket){
        if(c > 0)
            count++;
    }
    cout << count << endl;

    return 0;
}
