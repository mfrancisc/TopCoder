
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

class Swimmers
{
  public:
    vector <int> getSwimTimes(vector <int> distances, vector <int> speeds, int current)
    {
      int count = distances.size();
      vector <int> times(count);
      for(int x = 0; x < distances.size(); x++) {
        if(speeds[x] <= current) {
          times[x] = -1; 
          continue;
        } 

        int speedAdd = speeds[x] + current;
        int downSeconds = distances[x] / speedAdd;
        int restDown = distances[x] % speedAdd;

        int speedSub = speeds[x] - current;
        int upSeconds = distances[x] / speedSub;
        int restUp = distances[x] % speedSub;

        int totalRest = restUp + restDown;
        if(totalRest >= 5) {
          upSeconds = upSeconds + 1; 
        }

        times[x] = downSeconds + upSeconds;
      }
      return times;
    }
};

