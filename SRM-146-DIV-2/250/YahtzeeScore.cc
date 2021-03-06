
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
#include <iostream>     // std::cout
#include <algorithm>    // std::count
#include <vector>       // std::vector
class YahtzeeScore
{
  public:
    int maxPoints(vector <int> toss)
    {
      //count nr of this element
      int newSum = 0;
      int biggestNum = 0;
      for(int i = 0; i<= toss.size(); i++){
        int mycount = 0;
        int sum = 0;
        for(int x = 0; x <= toss.size(); x++)
        {
          if(toss[i] == toss[x])
          {
            mycount++;
          }
        }
        sum = mycount * toss[i];
        if(sum >= newSum){
          biggestNum = toss[i];
          newSum = sum;
        }
      }
      return newSum;

    };
};

