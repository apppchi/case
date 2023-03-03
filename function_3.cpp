#include "hh.h"

void rrb(vector <int> &b){
    int len = b.size();
    if (len > 0){
        int k = b[len - 1];
        for(int i = len - 1; i > 0; i--){
            b[i] = b[i - 1];
        }
        b[0] = k;
    }
}

void sa(vector <int> &a){
    int i = a[0];
    a[0] = a[1];
    a[1] = i;
}
