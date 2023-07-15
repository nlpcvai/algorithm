#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    set<string> words;
    string word, left, right;
    while(cin>>word) words.insert(word);

    for (const auto& s : words) {
        for(int j = 1; j < s.size(); ++j) {
            left.assign(s, 0, j);
            if (words.count(left)) {
                right.assign(s, j, s.size() - j);
                if (words.count(right)) {cout << s << endl; break;}
            }
        }
    }

    return 0;
}
