#include <string>
#include <iostream>

using namespace std;

int countAlphabet(string input) {
    int count = 0;
    
    for (int i = 0; i < input.length(); i++) {
        if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')) {
            count++;
            //cout << "intpu[i] is:" << input[i] << endl;
        }
    }

    return count;
}

int main()
{
    string input;

    cout << "Please input your words:" << endl;

    getline(cin,input);

    if (input.empty()) {
        cout << "-->Please input something!" << endl;
        cout << "Please press any key to escape." << endl;
        cin >> input;
        return -1;
    }
    
    cout << "-->input :" << input << endl;
    cout << "-->Alphabet number is :" << countAlphabet(input) << endl;

    cout << "Please press any key to escape." << endl;
    cin >> input;

    return 0;
}