#include <iostream>
#include <algorithm>
using namespace std;


bool is_oddstr(string s, int n)
{
    if(n % 2 != 0){
        return false;
    }

    int half = n / 2;
    string s1 = s.substr(0, half);
    string s2 = s.substr(half, half);

    //cerr << s1 << s1.size() << endl;
    //cerr << s2 << s2.size() << endl;

    if(s1 == s2){
        return true;
    }
    return false;
}

int main()
{
    string s;
    cin >> s;

    for(int i=s.size()-2; i>1; i--){
        if(is_oddstr(s, i)){
            cout << i << endl;
            break;
        }
    }

    return 0;
}
