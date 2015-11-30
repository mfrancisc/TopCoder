
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

class SkiResortsEasy
{
  public:
    int minCost(vector <int> altitude)
    {
      int cost = 0;
      for(int a = 0; a < altitude.size(); a++) {
        if(altitude[a]< altitude[a+1]) {
          cost = cost + (altitude[a+1] - altitude[a]); 
          altitude[a+1] = altitude[a];
        } 
      }
      return cost;
    }
};

