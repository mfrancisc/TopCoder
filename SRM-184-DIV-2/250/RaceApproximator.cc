
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

class RaceApproximator
{
  public:
    string timeToBeat(int d1, int t1, int d2, int t2, int raceDistance)
    {
      int seconds = t1 * exp(log((double)t2/t1)*log((double)d1/raceDistance)/log((double)d1/d2));
      int m = seconds / 60;
      int s = seconds % 60;
      int h = m / 60;
      m = m % 60;
      string min = to_string(m);
      string sec = to_string(s);

      if(m < 10) {
        min = "0" + to_string(m); 
      }
      if(s < 10) {
        sec = "0" + to_string(s); 
      }

      string time = to_string(h) +  ":" + min + ":" + sec;

      return time;
    }
};

