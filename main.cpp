#include "hh.h"

int main()
{
    string c = " ";
    vector <int> a;
    vector <int> b;
    int y;
    for(int i = 0; c != "!"; i++){
        cin >> c;
        if (c != "!")
            y = str_to_int(c);
        else
            break;
        a.push_back(y);
    }
    for (int i = 0; i <= max_position(a); i++){
        rra(a);
    }
    vec_to_vec(a, b, 1);
    for (int i = 0; i < b.size(); i++){
        cout << b[i] << endl;
    }
}
