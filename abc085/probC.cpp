#include <iostream>
#include <tuple>
using namespace std;

unsigned int N, Y;

tuple<int, int, int> solve()
{
    unsigned int T = Y - 1000 * N;
    for(unsigned int y=0; y<=N; y++){
        for(unsigned int x=0; x<=N; x++){
            if(x+y > N){
                break;
            }
            if(9000 * x + 4000 * y == T){
                return make_tuple(x, y, N-x-y);
            }
        }
    }
    return make_tuple(-1, -1, -1);
}

int main()
{
    cin >> N >> Y;
    auto result = solve();
    cout << get<0>(result) << " " << get<1>(result) << " " << get<2>(result) << endl;
    return 0;
}
