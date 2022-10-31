#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;

    string T;
    while(T.length() < S.length()){
        int pt = T.length();
        char next = S[S.length() - 1 - pt];
        if(next == 'm'){
            T = "dream" + T;
        }
        else if(next == 'e'){
            T = "erase" + T;
        }
        else if(next == 'r'){
            //もう1文字先読みする
            if(S.length() - 1 - pt - 1 >= 0 && S[S.length() - 1 - pt - 1] == 'e'
                    && S.length() - 1 - pt - 2 >= 0 && S[S.length() - 1 - pt - 2] == 'm'){
                T = "dreamer" + T;
            }
            else if(S.length() - 1 - pt - 1 >= 0 && S[S.length() - 1 - pt - 1] == 'e'
                    && S.length() - 1 - pt - 2 >= 0 && S[S.length() - 1 - pt - 2] == 's'){
                T = "eraser" + T;
            }
            else{
                // no match
                break;
            }
        }
        else{
            // no match
            break;
        }
    }
    if(T == S)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
