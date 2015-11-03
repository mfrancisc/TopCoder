
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
#include <iostream>
using namespace std;

class FixedPointTheorem
{
  public:
    double cycleRange(double R)
    {
      double x =0.25;
      double result = 0.0;
      for(int i = 0; i < 200000; i++)
      {
        x = R * x * (1 -x);
      }
      double lowest = x;
      double highest = x;

      for(int y = 0; y < 1000; y++)
      {
        x = R * x * (1 -x);
        if(x < lowest)
        {
          lowest = x;
        }
        if(x > highest)
        {
          highest = x;
        }
      }
      result = highest - lowest;
      return result;
    }
};

