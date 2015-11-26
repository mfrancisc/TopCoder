
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

class BritishCoins
{
  public:
    vector <int> coins(int pence)
    {
      int pounds = 0;
      int shillings = 0;


      pounds =  pence / 240;
      pence  = pence % 240;

      shillings = pence / 12;
      pence =  pence % 12;

      static const int arr[] = {pounds,shillings,pence};
      vector<int> vec (arr, arr + sizeof(arr) / sizeof(arr[0]) );
      return vec;
    }
};

