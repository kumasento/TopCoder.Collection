// BEGIN CUT HERE
/*

*/
// END CUT HERE
#line 7 "CeyKaps.cpp"
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <fstream>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <list>
#include <stdexcept>
#include <functional>
#include <utility>
#include <ctime>
using namespace std;

#define PB push_back
#define MP make_pair

#define REP(i,n) for(i=0;i<(n);++i)
#define FOR(i,l,h) for(i=(l);i<=(h);++i)
#define FORD(i,h,l) for(i=(h);i>=(l);--i)

typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<double> VD;
typedef long long LL;
typedef pair<int,int> PII;


class CeyKaps
{
    public:
    string decipher(string typed, vector <string> switches)
    {
        int n = switches.size();
        for (int i = 0; i < n; i++)
        {
            string switch_str = switches[i];
            char before_char = switch_str[0];
            char after_char = switch_str[2];
            for (int j = 0; j < typed.length(); j++)
                if (typed[j] == before_char)
                    typed[j] = '#';
                else if (typed[j] == after_char)
                    typed[j] = '-';
            for (int j = 0; j < typed.length(); j++)
                if (typed[j] == '#') typed[j] = after_char;
                else if (typed[j] == '-') typed[j] = before_char;
        }
        return typed;
    }

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "AAAAA"; string Arr1[] = {"A:B","B:C","A:D"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arg2 = "CCCCC"; verify_case(0, Arg2, decipher(Arg0, Arg1)); }
	void test_case_1() { string Arg0 = "ABCDE"; string Arr1[] = {"A:B","B:C","C:D","D:E","E:A"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arg2 = "AEBCD"; verify_case(1, Arg2, decipher(Arg0, Arg1)); }
	void test_case_2() { string Arg0 = "IHWSIOTCHEDMYKEYCAPSARWUND"; string Arr1[] = {"W:O","W:I"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arg2 = "WHOSWITCHEDMYKEYCAPSAROUND"; verify_case(2, Arg2, decipher(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    CeyKaps ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
