#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {

    /* 1️⃣ First Non-Repeating Character */
    string s1 = "aabbcddee";
    unordered_map<char, int> freq;

    for (char c : s1)
        freq[c]++;

    cout << "First Non-Repeating Character: ";
    bool found = false;
    for (char c : s1) {
        if (freq[c] == 1) {
            cout << c << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "None" << endl;


    /* 2️⃣ Check if Two Strings Are Anagrams */
    string a = "listen";
    string b = "silent";

    int count[256] = {0};
    bool isAnagram = true;

    if (a.length() != b.length()) {
        isAnagram = false;
    } else {
        for (int i = 0; i < a.length(); i++) {
            count[a[i]]++;
            count[b[i]]--;
        }

        for (int i = 0; i < 256; i++) {
            if (count[i] != 0) {
                isAnagram = false;
                break;
            }
        }
    }

    cout << "Are Anagrams: " << (isAnagram ? "Yes" : "No") << endl;


    /* 3️⃣ Longest Substring Without Repeating Characters */
    string s2 = "abcabcbb";
    int lastIndex[256];
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int start = 0, maxLen = 0;

    for (int i = 0; i < s2.length(); i++) {
        if (lastIndex[s2[i]] >= start)
            start = lastIndex[s2[i]] + 1;

        lastIndex[s2[i]] = i;
        maxLen = max(maxLen, i - start + 1);
    }

    cout << "Longest Unique Substring Length: " << maxLen << endl;


    /* 4️⃣ String Compression */
    string s3 = "aaabbccc";
    string compressed = "";
    int cnt = 1;

    for (int i = 0; i < s3.length(); i++) {
        if (i < s3.length() - 1 && s3[i] == s3[i + 1]) {
            cnt++;
        } else {
            compressed += s3[i];
            compressed += to_string(cnt);
            cnt = 1;
        }
    }

    cout << "Compressed String: " << compressed << endl;


    /* 5️⃣ Check String Rotation */
    string x = "abcd";
    string y = "cdab";

    bool isRotation = false;
    if (x.length() == y.length()) {
        string temp = x + x;
        if (temp.find(y) != string::npos)
            isRotation = true;
    }

    cout << "Is Rotation: " << (isRotation ? "Yes" : "No") << endl;

    return 0;
}