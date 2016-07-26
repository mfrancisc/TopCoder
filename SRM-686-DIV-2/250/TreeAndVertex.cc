
// {{{ VimCoder 0.3.6 <-----------------------------------------------------
// vim:filetype=cpp:foldmethod=marker:foldmarker={{{,}}}

#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
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

class TreeAndVertex
{
public:
	int get(vector <int> tree)
	{
        int size = tree.size();
        int comp[size];
        memset (comp,0,sizeof(comp));
        for(int i = 0; i < size; i++){
            comp[tree[i]]++; 
            comp[i+1]++; 
        }
        sort(comp, comp+size, greater<int>() );
        
		return comp[0];
	}
};

