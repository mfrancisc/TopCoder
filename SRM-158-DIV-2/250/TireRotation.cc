
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
class TireRotation
{
  public:
    int getCycle(string initial, string current)
    {
      int phase = 1;
      string tempCurrent = "";

      while(initial != current && phase <= 4){
        phase++;

        if(initial == current){
          break; 
        }

        tempCurrent = initial;
        initial[2] = tempCurrent[0];
        initial[3] = tempCurrent[1];
        initial[1] = tempCurrent[2];
        initial[0] = tempCurrent[3]; 

      }

      if(phase > 4){
        phase = -1; 
      }

      return phase;
    }
};

