#include <iostream>

using namespace std;

int strwordlen(string str)
{
    int length = 0;

    for(int i = 0; i < str.length(); i++) {
        if (
                (str[i] >= 'a' && str[i] <= 'z')
                || (str[i] >= 'A' && str[i] <= 'Z')
           ) {
            length++;
        }
    }

    return length;
}

int main() {
    while(true) {
        string str;

        cout<<"输入一个英文句子(Ctrl+C退出): ";
        getline(cin, str);

        cout<<"输入的英文句子字母个数："<<strwordlen(str)<<endl;
    }

    return 0;
}
