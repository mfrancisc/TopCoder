
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

class Inchworm
{
  public:
    int lunchtime(int branch, int rest, int leaf)
    {
      int leafRest = 0;
      int eated = 0;
      for(int y = 0; y<= branch; y = y+rest) {
        leafRest = y % leaf;
        if(leafRest == 0) {
          eated++; 
        } 
      }
      return eated;
    }
};

