testdata.hppとin.cppとout.cppに適切なものを書いてmakeすると同ディレクトリのinフォルダとoutフォルダにそれぞれ入力ケースと出力ケースが入る

tools.hppの中身
・using namespace std;
・using lint = long long;
・uint_fast32_t rnd()
　・32bitのunsignedな乱数
・string fill_0(int num, int digit)
　・numに0埋めしてdigit桁にした文字列
・iostream dout;
　・doutでデバッグ用標準出力(通常のcoutと同じように使う)
　・in.cppとout.cppではcinとcoutが通常の用途では使えないことに注意
・int testcase;
　・main.cppでテストケース番号が代入される(1-indexed)

testdata.hpp要件
・string file_name
　・ファイル名の文字列を返す
　・変数testcaseが使える
・const int TESTCASE_COUNT;
　・テストケースの個数

in.cpp要件
・tools.hppだけincludeすること！それ以外はしない！using namespace std;は書かない！
・void in()の中にinput caseを出力するコードを書く
　・ファイルへの出力はcout、デバッグ用標準出力はdoutを使う
　・変数testcaseが使える

out.cpp要件
・tools.hppだけincludeすること！それ以外はしない！using namespace std;は書かない！
・void out()の中にoutput caseを出力するコードを書く
　・ファイルからの入力はcin、ファイルへの出力はcout、デバッグ用標準出力はdoutを使う
・変数testcaseが使えるけど要らないと思う

main.cpp
・基本触らなくていいと思いまーす！たぶん。

注意
　in.cppとout.cppではグローバル変数が使える。変数は衝突しないように。main.cppのグローバル変数はtools.hppにあるものしかないので、そことの衝突は気にしなくて良い。