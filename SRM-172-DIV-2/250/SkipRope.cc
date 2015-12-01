
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

class SkipRope
{
  public:
    vector <int> partners(vector <int> candidates, int height)
    {
      int diff = 0;
      int actualDiff = 0;
      int lowest = 0;
      int highest = 0;
      int higherDiff =  0;
      for(int x =0; x < candidates.size(); x++) {

        if(candidates[x] >= height) {
          actualDiff = candidates[x] - height;
        } else {
          actualDiff = height - candidates[x]; 
        }

        if(height < lowest) {
          diff = lowest - height; 
        } else {
          diff = height - lowest; 
        }

        if(height < highest) {
          higherDiff = highest - height; 
        } else {
          higherDiff = height - highest; 
        }


        int justSaved = 0;
        if(lowest == 0) {
          lowest = candidates[x]; 
          justSaved = 1;
        }else if(actualDiff < diff ) {
          lowest = candidates[x];
          justSaved = 1;

        }else if(actualDiff == diff && candidates[x] > lowest && (candidates[x] < highest || highest == 0)) {
          lowest = candidates[x]; 
          justSaved = 1;
        }else if (actualDiff > diff && candidates[x] < highest && highest == lowest) {
          lowest = candidates[x]; 
          justSaved = 1;
        }



        if(highest == 0) {
          highest = candidates[x]; 
        }else 
          if(actualDiff < higherDiff && candidates[x] >= lowest && justSaved == 0 ) {
            highest = candidates[x];

          }else if(higherDiff == actualDiff && candidates[x] > higherDiff && (candidates[x] >= lowest && justSaved ==0 )) {
            highest = candidates[x]; 
          }

      }

      int myints[] = {lowest,highest};
      std::vector<int> bestPartners (myints, myints + sizeof(myints) / sizeof(int) );


      return bestPartners;
    }
};

