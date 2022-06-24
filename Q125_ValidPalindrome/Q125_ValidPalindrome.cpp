#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s) {
    //throw 20;

    for (int i = 0, j = s.size() - 1; i <= j; ) {
        if ((tolower(s[i]) < 97 || tolower(s[i]) > 122) && !(tolower(s[i]) >= 48 && tolower(s[i]) <= 57)) {
            i++;
            continue;
        }
        
        if ((tolower(s[j]) < 97 || tolower(s[j]) > 122) && !(tolower(s[j]) >= 48 && tolower(s[j]) <= 57)) {
            j--;
            cout << j << endl;
            continue;
        }

        //throw 18;

        if (s.size() == 1) {
            return true;
        }

        if (tolower(s[i]) == tolower(s[j])) {
            i++; j--;
            cout << j << endl;
        }
        else if (tolower(s[i]) != tolower(s[j])) {
            return false;
        }
    }

    cout << "break point" << endl;

    return true;
}

int main()
{
    // Testing if a string is a letter
    string s = "hello hiie,";

    if (tolower(s[5]) < 97 || tolower(s[5]) > 122) {
        cout << s[5] << endl;
    }

    string str = "ab2a";

    cout << isPalindrome(str);

    return 0;
}