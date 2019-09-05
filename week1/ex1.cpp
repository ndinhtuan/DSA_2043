#include <iostream>
#include <string>
#include <cassert>

using namespace std;

void reversePartString(string &s, int beg, int end);

int main(){
    string st;
    getline(cin, st);

    int beg = 0;
    int end = 1;

    while(beg < st.length()) {
        
        while(st[beg] == ' ' && beg < st.length()) {
            beg++;
        }

        if (beg >= st.length()){
            break;
        }

        end = beg + 1;

        while (st[end] != ' ' && end <= st.length() - 1) {    
            end++;    
        }
        
        reversePartString(st, beg, end-1);
        beg = end;
    }   

    cout << st << endl;
    return 0;
}

void reversePartString(string &s, int beg, int end) {
    
    cout << beg << " " << end;
    assert( 0 <= beg && beg <= end);
    assert( end < s.length() );

    for(int i = beg; i <= (end+beg)/2; i++) {   
        
        char tmp = s[i];
        s[i] = s[end-(i-beg)];
        s[end-(i-beg)]=tmp;
    }

    cout << s << endl;
}
