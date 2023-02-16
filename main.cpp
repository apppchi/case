#include "hh.h"

int main()
{
    string w = " ";
    vector <int> a;
    vector <int> b;
    int y;
    for(int i = 0; w != "!"; i++){
        cin >> w;
        if (w != "!")
            y = str_to_int(w);
        else
            break;
        a.push_back(y);
    }
    int len = a.size();
    for (int f = 0; f < len; f++){
        for (int i = 0; i <= max_position(a); i++){
            rra(a);
            cout << "rra" << endl;
        }
        b.push_back(a[0]);
        cout << "pb" << endl;
        pa(a);
        a.pop_back();
    }
    cout << '*';
}
