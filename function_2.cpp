#include "hh.h"

void vec_to_vec(vector <int> &a, vector <int> &b, int i){
    for (int f = i; f < a.size(); f++){
        b.push_back(a[f]);
    }
}
