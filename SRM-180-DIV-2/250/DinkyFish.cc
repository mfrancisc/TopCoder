
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

class DinkyFish
{
  public:
    int monthsUntilCrowded(int tankVolume, int maleNum, int femaleNum)
    {
      int couples = 0;
      int totalMonths = 0;
      int total = 0;
      int totalTankVol = tankVolume * 2;
      for(int month = 0; ; month++){ 

        if(couples == 0){
          if(maleNum >= femaleNum) {
            couples = femaleNum; 
          } else{
            couples = maleNum; 
          } 

          total = femaleNum * 2;
        }

        if(totalTankVol <= total ) {

          totalMonths = month;
          break;
        }else if(month == 0){
          total = femaleNum + maleNum;
        }

        int born = couples * 2;
        total = total + born;
        couples = couples + (born / 2);
      } 
      return totalMonths;
    }
};

