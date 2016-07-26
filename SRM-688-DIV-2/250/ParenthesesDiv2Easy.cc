
// {{{ VimCoder 0.3.6 <-----------------------------------------------------
// vim:filetype=cpp:foldmethod=marker:foldmarker={{{,}}}

#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

// }}}

class ParenthesesDiv2Easy
{
public:
	int getDepth(string s)
	{
        int depth = 0;
        int temp = 0;
        char last = '(';
        for(int i = 0; i < s.size(); i++){
            if(s[i] == last){
                temp++; 
            } else {
                last = s[i];
                depth = max(depth, temp);
                temp = 1; 
            }

        }
        depth = max(depth, temp);
		return depth;
	}
};

