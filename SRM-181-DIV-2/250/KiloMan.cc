
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

class KiloMan
{
  public:
    int hitsTaken(vector <int> pattern, string jumps)
    {
      int hits=0;
      for(int a = 0; a < jumps.size(); a++) {
        if( jumps[a] == 'J' && pattern[a] > 2) {
          hits++; 
        }else if(jumps[a] == 'S' && pattern[a] <= 2) {
            hits++; 
          }

      }
      return hits;
    }
};

