
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
#include <string>
#include <iostream>
using namespace std;

class FormatAmt
{
  public:
    string amount(int dollars, int cents)
    {
      int dollarsSize = 0;
      int n = dollars;
      while(n){
        n /= 10;
        dollarsSize++;
      }

      string dollarsString = to_string(dollars);
      string result1 = "$";
      string result2 = "";
      string decimals = "";

      int comaCount = 0;
      dollarsSize = dollarsSize - 1;
      for(int x = dollarsSize ; x >= 0; x--){
        comaCount++;
        if(comaCount == 4){
          result2 = "," + result2;
          comaCount = 0;
        }
        result2 = dollarsString[x] + result2;
      }

      int centSize = 0;
      int c = cents;
      while(c){
        c /= 10;
        centSize++;
      }

      if(centSize < 2){
        decimals = "0" + to_string(cents);
      }

      result1 = result1 + result2 + "." + decimals;
      return result1;
    }
};

