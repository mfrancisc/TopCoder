
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

class DivisorDigits
{
  public:
    int howMany(int number)
    {
      int decimals;
      int counter= 0;
      int wrkNumber = number;
      do {
        int singInt = number % 10;
        decimals = wrkNumber % singInt;
        if(decimals == 0){
          counter++;
        }
        number /= 10;
      } while (number);

      return counter;
    }
};

