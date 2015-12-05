
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

class Stairs
{
  public:
    int designs(int maxHeight, int minWidth, int totalHeight, int totalWidth)
    {
      int h = maxHeight;
      int designs = 0;
      for( ;h > 0; h--) {
        int restR = totalHeight % h; 
        if(restR == 0) {
          int risers = totalHeight / h; 

          //treads
          for(int w = minWidth ;w <= totalWidth; w++) {
            int restW = totalWidth % w;
            if(restW == 0) {
              int treads = totalWidth / w; 
              int diffTr = risers - treads;
              if(diffTr == 1) {
                designs++; 
                break;
              }
            } 
          } 
        }

      }
      return designs;
    }
};

