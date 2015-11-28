
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

class LevelUp
{
  public:
    int toNextLevel(vector <int> expNeeded, int received)
    {
      int exp = 0;
      for(int x = 0; x < expNeeded.size(); x++){


        if(expNeeded[x] > received  ){
          exp = expNeeded[x] - received;
          break;
        }


      }
      return exp;
    }
};

