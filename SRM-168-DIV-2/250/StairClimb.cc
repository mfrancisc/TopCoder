
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

class StairClimb
{
  public:
    int stridesTaken(vector <int> flights, int stairsPerStride)
    {
      int strides = 0;

      for(int s =0; s < flights.size(); s++) {
        if(s> 0 ){
          strides = strides +2; 
        } 

        int partialStride = flights[s] / stairsPerStride;
        strides = strides + partialStride;
        int rest = flights[s] % stairsPerStride;
        if(rest != 0) {
          strides = strides + 1; 
        }

      }
      return strides;
    }
};
