#include <iostream>
using namespace std;

int main()
{
    int N, Y;
    cin >> N >> Y;

    for(int x=0; x<=N; x++){
        for(int y=0; y<=N; y++){
            int z = N - x - y;
            if(z < 0)
                break;
            if(Y == 10000*x + 5000*y + 1000*z){
                cout << x << " " << y << " " << z << endl;
                goto END;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
END:
    return 0;
}
