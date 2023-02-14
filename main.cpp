#include "hh.h"

int main()
{
    string w = " ";
    vector <int> a;
    vector <int> b;
    vector <int> c;
    int len = a.size();
    int y;
    for(int i = 0; w != "!"; i++){
        cin >> w;
        if (w != "!")
            y = str_to_int(w);
        else
            break;
        a.push_back(y);
    }
    for (int i = 0; i < len - 1; i++){
        for (int i = 0; i <= max_position(a); i++){
            rra(a);
        }
        vec_to_vec(a, b, c);
        a = b;
    }
    for (int i = 0; i < c.size(); i++){
        cout << c[i] << endl;
    }

}
