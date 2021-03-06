
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

class ClockWalk
{
  public:
    int finalPosition(string flips)
    {
      int hour = 0;
      for(int x = 0; x < flips.size(); x++){
        int c = x +1;
        if(flips[x] == 'h') {

          hour = hour + c;
        }else {
          hour = hour - c; 
        }
        hour =  hour % 12;


        if(hour <= 0 ) {
          hour = 12 + hour; 
        }
      }

      return hour;
    }
};

