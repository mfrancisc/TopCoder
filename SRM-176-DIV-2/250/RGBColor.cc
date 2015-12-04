
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

class RGBColor
{
  public:
    vector <int> getComplement(vector <int> rgb)
    {
      vector <int> complRgb(3);
      vector <int> altComplRgb(3);
      int countAltComp = 0;
      int countComp = 0;
      for(int z = 0; z < rgb.size(); z++) {
        int complement = 255 - rgb[z];

        if(rgb[z] < complement) {
          int diff = complement - rgb[z]; 
          if(diff <= 32) {
            altComplRgb[z] = rgb[z] + 128;
            countAltComp++;
          }else {
            countComp++;
          }
          complRgb[z] = complement; 
        } 


        if(complement < rgb[z]) {

          int diff =  rgb[z]- complement; 
          if(diff <= 32) {
            altComplRgb[z] = rgb[z] - 128;
            countAltComp++;
          }else {
            countComp++;
          }
          complRgb[z] = complement; 

        }

      }

      if(countComp == 0) {
        return altComplRgb; 
      }

      return complRgb;
    }
};

