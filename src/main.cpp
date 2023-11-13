#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

using namespace std;

/*
### Plan
- Divide text to tokens
- Count probability of each word to be after some pattern (PATTERN - IMPORTANT)
- Make different types of random choose for text generation

*/

int main(){

    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    set<string> uniq_words;

    //get text line by line
    string line;
    while (getline(cin, line)) {
        cout << line << '\n';
        //break line in to words
        string word;
        for (char ch : line){
            
        }
    }

    return 0;
}