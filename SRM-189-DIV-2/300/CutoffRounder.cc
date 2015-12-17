
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

class CutoffRounder
{
  public:
    int round(string num, string cutoff)
    {
      string number = "";
      string fract = "";
      int foundDot = 0;
      for(int n = 0; n <= num.size(); n++)
      {
        if(num[n] == '.')
        {
          foundDot = 1; 
          continue;
        }

        if(foundDot){
          fract += num[n];
        }else {
          number += num[n];
        }

      }

      if(number == "")
      {
        number = '0'; 
      }

      int intNumber = atoi(number.c_str());
      int intFract = atoi(fract.c_str());
      int intCutoff = atoi(cutoff.c_str());

      if(intFract > intCutoff)
      {
        intNumber += 1; 
      }else if(intFract < intCutoff)
      {
        intNumber -= 1; 
      }

      return intNumber;
    }
};

