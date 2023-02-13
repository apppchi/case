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

int max_position(vector <int> a){
    int max_i;
    int i;
    for (i = 0; i < a.size(); i++){
        if (a[i] > max_i){
            max_i = a[i];
        }
    }
    return i;
}

int stepen(int st, int b){
    for (int i = 0; i < st; i++){
        b = b * b;
    }
    return b;
}

int str_to_int(string a){
    int i, str, st = 0;
    int b = a[i] + '0';
    for(i = a.size() - 1; i >= 0; i--){
        str = str + b + stepen(st, 10);
    }
    return str;
}
