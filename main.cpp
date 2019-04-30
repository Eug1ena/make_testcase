#include "tools.hpp"
#include "testdata.hpp"
using lint = long long;
random_device rnd_dev;
mt19937 rnd(rnd_dev());
string fill_0(int num, int digit){
    string ret = to_string(num);
    return string(digit - ret.size(), '0') + ret;
}
iostream dout(cout.rdbuf());
int testcase;

void in(), out();

int main(){
    auto cout_buf = cout.rdbuf();
    auto cin_buf = cin.rdbuf();
    for(testcase = 1; testcase <= TESTCASE_COUNT; testcase++){
        string in_dir = "./in/" + file_name(), out_dir = "./out/" + file_name();
        ofstream(string(in_dir)), ofstream(out_dir);
        fstream fin(in_dir);
        cout.rdbuf(fin.rdbuf());
        in();
        fin.close();
        fin.open(in_dir);
        fstream fout(out_dir);
        cin.rdbuf(fin.rdbuf());
        cout.rdbuf(fout.rdbuf());
        out();
        fin.close();
        fout.close();
        dout << file_name() + " was made!" << endl;
    }
}
