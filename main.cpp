#include "hh.h"
#include <fstream>

int main()
{

    string w = " ";
    vector <int> a;
    vector <int> b;
    vector <string> c;
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
    if (len == 1 || len == 0){
        cout << '*';
        return 0;
    }
    else if (len == 2){
        if(a[0] > a[1]){
            sa(a);
            cout << "sa" << endl;
            cout << '*';
            return 0;
        }
        else{
            cout << '*';
            return 0;
        }
    }
    else{
        ofstream os;
        os.open("111.txt");
        for (int f = 0; f < len; f++){
            for (int i = 0; i < min_position(a); i++){
                rra(a);
                if(os.is_open()){
                    os << "rra" << endl;
                }
            }
            b.push_back(a[0]);
            os << "pb" << endl;
            ra(a);
            a.pop_back();
        }
        int len1 = b.size();
        for (int i = 0; i < len1; i++){
            pa(a, b);
            os << "pa" << endl;
        }
        print_str(c);
        HANDLE console_color;
        console_color = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(console_color, 12);
        os << "*";
        SetConsoleTextAttribute(console_color, 15);
    }
}

