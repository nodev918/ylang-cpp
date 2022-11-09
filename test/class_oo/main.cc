#include <iostream>
#include "main.h"
using namespace std;

int main(){
    // cout << sum(3,5) << endl;
    Token tok;
    tok.setFlag(5);
    cout << tok.getFlag() << endl;
    return 0;
}