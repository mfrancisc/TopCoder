
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

class LCMRange
{
  public:
    int lcm(int first, int last)
    {
      int result = 0;
      int startPoint = last;
      int calcResult = 0;
      int nrDividers = 0;
      while(true) {
        for(int y = first; y <= last; y++) {
          calcResult = startPoint % y;
          if(calcResult != 0){
            break; 
          } 
          nrDividers = y;
        }

        if(nrDividers == last){
          result = startPoint;
          break;
        }
        startPoint++;
      }
      return result;
    }
};

