#include <cstdio>
#include <string>

using namespace std;


bool compare(char a, char b) {
    printf("? %c %c\n", a, b);
    fflush(stdout);
    char ans;
    scanf(" %c", &ans);
    if(ans == '>')
        return false;
    else
        return true;
}

void swap(string &s, int i, int j) {
    int tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
}

// 最小の比較回数でN=5のソートをする
void sort5(string &s) {
    // 0 < 1
    if (!compare(s[0], s[1])) {
        swap(s, 0, 1);
    }
    // 2 < 3
    if (!compare(s[2], s[3])) {
        swap(s, 2, 3);
    }

    // make 0 < 1 < 3 and 2 < 3
    if (compare(s[1], s[3])) {
        // 0 < 1 < 3 and 2 < 3
    }
    else {
        // 0 < 1 and 2 < 3 and 3 < 1
        // 2 < 3 < 1 and 0 < 1
        swap(s, 0, 2);
        swap(s, 1, 3);
        // 0 < 1 < 3 and 2 < 3
    }

    // 4を左に挿入
    // 0 < 1 < 3 and 2 < 3
    if (compare(s[1], s[4])) {
        // 1 < 4 < 3 or 1 < 3 < 4
        if (compare(s[3], s[4])) {
            // 0 < 1 < 3 < 4
        }
        else {
            // 0 < 1 < 4 < 3
            swap(s, 3, 4);
        }
    }
    else {
        // 4 < 0 < 1 or 0 < 4 < 1
        if (compare(s[0], s[4])) {
            // 0 < 4 < 1 < 3
            swap(s, 4, 1);
            swap(s, 4, 3);
        }
        else {
            // 4 < 0 < 1 < 3
            swap(s, 4, 0);
            swap(s, 4, 1);
            swap(s, 4, 3);
        }
    }
    // made 0 < 1 < 3 < 4 and 2 < 3

    // insert 2
    if (compare(s[0], s[2])) {
        // 0 < 1 < 2 < 3 < 4 or 0 < 2 < 1 < 3 < 4
        if (compare(s[1], s[2])) {
            // 0 < 1 < 2 < 3 < 4
        }
        else {
            // 0 < 2 < 1 < 3 < 4
            swap(s, 2, 1);
        }
    }
    else {
        // 2 < 0 < 1 < 3 < 4
        swap(s, 2, 0);
        swap(s, 2, 1);
    }
}

int main(void) {
    int N, Q, i, j;

    scanf("%d%d", &N, &Q);

    string s;
    for(i=0;i<N;i++) s += (char)('A' + i);

    if (N == 5) {
        sort5(s);
    }
    else {
        for(i=0;i<N;i++) for(j=0;j<N-1;j++){
            printf("? %c %c\n", s[j], s[j+1]);
            fflush(stdout);
            char ans;
            scanf(" %c", &ans);
            if(ans == '>') swap(s[j], s[j+1]);
        }
    }

    printf("! %s\n", s.c_str());
    fflush(stdout);

    return 0;
}
