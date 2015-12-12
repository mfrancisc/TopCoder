
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

class CountGame
{
  public:
    int howMany(int maxAdd, int goal, int next)
    {
      int diffToHave = goal - maxAdd;
      int diffFromNext = diffToHave - next;
      int res = -1;
      if(diffFromNext > 0){
        if(diffFromNext <= maxAdd){
          res = diffFromNext; 
        }else if(diffFromNext > maxAdd + 1){
          res = maxAdd; 
        }
      }
      if(goal == next){
        res = 1; 
      }
      return res;
    }
};

