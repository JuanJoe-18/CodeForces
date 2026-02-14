#include <bits/stdc++.h>
using namespace std;
// KMP algorithm
vector<int> computePrefix(string S) {
    int N = S.length();
    vector<int> pi(N);
    for (int i = 1; i < N; i++) {
        int j = pi[i - 1];
        while (j > 0 && S[i] != S[j])
            j = pi[j - 1];
        if (S[i] == S[j])
            j++;
        pi[i] = j;
    }
    return pi;
}


int countOccurrences(string S, string P) {
    string combined = P + "#" + S;
    vector<int> prefixArray = computePrefix(combined);
    int count = 0;
    for (int i = 0; i < prefixArray.size(); i++) {
        if (prefixArray[i] == P.size())
            count++;
    }
    return count;
}

int main() {
    string S;string P;
    cin >> S;
    cin >> P;
    cout << countOccurrences(S, P) << "\n";
    return 0;
}