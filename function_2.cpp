#include "hh.h"

void print(vector <int> l){
    for(int i = 0; i < l.size(); i++){
        cout << l[i] << endl;
    }
}

void pa(vector <int> &a, vector <int> &b){
    if (b.size() > 0){
        int c = b[0];
        rb(b);
        b.pop_back();
        a.push_back(c);
    }
}

void rb(vector <int> &b){
    int len = b.size();
    if (len > 0){
        int k = b[0];
        for(int i = 0; i < len - 1; i++){
            b[i] = b[i + 1];
        }
        b[len - 1] = k;
    }
}

void print_str(vector <string> l){
    HANDLE console_color;
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    for(int i = 0; i < l.size() - 1; i++){
        if (i > l.size() - 7 && i > 2){
            int p = 1;
            SetConsoleTextAttribute(console_color, i - 1);
            cout << l[i] << endl;
            p++;
        }
        else{
            SetConsoleTextAttribute(console_color, 15);
            cout << l[i] << endl;
        }
    }
}

void pb(vector <int> &a, vector <int> &b){
    if (a.size() > 0){
        int c = a[0];
        ra(a);
        a.pop_back();
        b[0] = c;
    }
}


