#include<iostream>
#include<string>
using namespace std;

int main() {
    int A;
    cin >> A;
    string str = to_string(A);
    
    int len = str.length();
    
    
    for (int i = len - 3; i > 0; i -= 3) {
        str.insert(i, ",");
    }
    
    
    cout << str << endl;
    
    return 0;
}
