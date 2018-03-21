#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N];
    for(int i=0; i<N; i++){
        cin >> A[i];
    }

    int count = 0;
    while(true){
        bool flag = true;
        for(int i=0; i<N; i++){
            if(A[i] % 2 != 0){
                flag = false;
                break;
            }
        }
        if(flag){
            //すべての整数が偶数なら
            for(int i=0; i<N; i++){
                A[i] = A[i] / 2;
            }
        }
        else{
            break;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}
