#include "hh.h"

int main()
{
    string c;
    vector <int> a;
    while (c[0] != '!'){
        cin >> c;
        a.push_back(stoi(c));
        c = ' ';
    }
    a.pop_back();
    cout << max_position(a) << endl;
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << endl;
    }
}

