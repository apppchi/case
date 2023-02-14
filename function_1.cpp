#include "hh.h"

void rra(vector <int> &a){
    int len = a.size();
    if (len > 0){
        int c = a[len - 1];
        for(int i = len - 1; i > 0; i--){
            a[i] = a[i - 1];
        }
        a[0] = c;
    }
}

void pa(vector <int> &a){
    int len = a.size();
    if (len > 0){
        int k = a[0];
        for(int i = 0; i < len - 1; i++){
            a[i] = a[i + 1];
        }
        a[len - 1] = k;
    }
}

int max_position(vector <int> &a){
    int max_i, i, max_pos;
    for (i = 0; i < a.size(); i++){
        if (a[i] > max_i){
            max_i = a[i];
            max_pos = i;
        }
    }
    return max_pos;
}

int str_to_int(string a){
    int k = 1;
    int b = 0;
    int f = 0;
    for(int i = 0; i < a.size(); i++){
        b = (a[a.size() - 1 - i]-'0') * k + b;
        k = k * 10;
    }
    return b;
}
