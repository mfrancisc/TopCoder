
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

class EyeDrops
{
  public:
    double closest(int sleepTime, int k)
    {
      double minutes = 0.0;

      double x =  24 / k;
      if(x >  sleepTime) {
        minutes = x * 60; 
      }else{
        double y= 24 - sleepTime;
        k = k -1;
        double hours = y/k;
        minutes = hours * 60; 
      }
      return minutes;
    }
};

