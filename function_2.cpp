#include "hh.h"

void vec_to_vec(vector <int> &a, vector <int> &b, vector <int> &c){
    c.push_back(a[0]);
    for (int f = 1; f < a.size(); f++){
        b.push_back(a[f]);
    }
}
