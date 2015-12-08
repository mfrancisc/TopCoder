
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

class OnLineRank
{
  public:
    int calcRanks(int k, vector <int> scores)
    {
      int totalRank = 0;
      for(int x = 0; x < scores.size(); x++){

        int pos = 1;
        for(int y = x - 1; y > 0; y--) {
          if(y < x - k) {
            break; 
          }
          if(scores[x] < scores[y]) {
            pos++; 
          } 

        }

        totalRank+= pos;
      }
      return totalRank; 
    }
};

