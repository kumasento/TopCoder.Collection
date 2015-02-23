// BEGIN CUT HERE
/*

*/
// END CUT HERE
#line 7 "MNS.cpp"
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


class MNS
{
    public:
    map<string, bool> hash;
    int ans;
    void dfs(vector<int> &used, vector<int> &remain)
    {
        int len_of_used = used.size();
        if (len_of_used == 9)
        {
            int a11 = used[0], a12 = used[1], a13 = used[2];
            int a21 = used[3], a22 = used[4], a23 = used[5];
            int a31 = used[6], a32 = used[7], a33 = used[8];

            string signature;
            signature.push_back(a11 + '0');
            signature.push_back(a12 + '0');
            signature.push_back(a13 + '0');
            signature.push_back(a21 + '0');
            signature.push_back(a22 + '0');
            signature.push_back(a23 + '0');
            signature.push_back(a31 + '0');
            signature.push_back(a32 + '0');
            signature.push_back(a33 + '0');

            if (hash[signature])
                return ;

            int sum = a11 + a12 + a13;
            if (a21 + a22 + a23 == sum &&
                a31 + a32 + a33 == sum &&
                a11 + a21 + a31 == sum &&
                a12 + a22 + a32 == sum &&
                a13 + a23 + a33 == sum)
            {
                hash[signature] = true;
                ans ++;
            }
        }
        for (int i = 0; i < remain.size(); i++)
        {
            int val = remain[i];
            used.push_back(val);
            remain.erase(remain.begin()+i);

            dfs(used, remain);

            remain.insert(remain.begin()+i, val);
            used.erase(used.end()-1);
        }
    }
    int combos(vector <int> numbers)
    {
       ans = 0;
       hash.clear();

       vector<int> used;
       dfs(used, numbers);

       return ans;
    }

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1,2,3,3,2,1,2,2,2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 18; verify_case(0, Arg1, combos(Arg0)); }
	void test_case_1() { int Arr0[] = {4,4,4,4,4,4,4,4,4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(1, Arg1, combos(Arg0)); }
	void test_case_2() { int Arr0[] = {1,5,1,2,5,6,2,3,2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 36; verify_case(2, Arg1, combos(Arg0)); }
	void test_case_3() { int Arr0[] = {1,2,6,6,6,4,2,6,4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(3, Arg1, combos(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
    MNS ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
