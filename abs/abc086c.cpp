#include <iostream>
#include <cstdlib>
using namespace std;


bool is_reachable(int t, int x, int y, int t_i, int x_i, int y_i)
{
    int dt = t_i - t;
    int dx = abs(x_i - x);
    int dy = abs(y_i - y);

    int dd = dx + dy - dt;
    //cout << dt << " " << dx << " " << dy << " " << dd << endl;
    if (dd > 0) {
        return false;
    }
    else if (dd == 0) {
        return true;
    }
    else if (-dd % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int N;
    cin >> N;

    bool success = true;
    int prev_t=0, prev_x=0, prev_y=0;
    int t, x, y;
    for (int i=0; i<N; i++) {
        cin >> t >> x >> y;
        if(!is_reachable(prev_t, prev_x, prev_y, t, x, y)) {
            success = false;
        }
        prev_t = t;
        prev_x = x;
        prev_y = y;
    }
    if (success) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}
