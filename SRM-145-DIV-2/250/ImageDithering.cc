
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
#include <algorithm>    // std::find
#include <string>
#include <iostream>     // std::cout
#include <vector>

using namespace std;

class ImageDithering
{
  public:
    int count(string dithered, vector <string> screen)
    {
      int count = 0;
      //loop array elements
      for(int i = 0; i < dithered.size(); i++) {
        for(int x = 0; x < screen.size(); x++){
          for(int j = 0; j < screen[x].size(); j++){
            if(dithered[i] == screen[x][j]){
              count++;
            }
          }
        }
      }
      return count;
    }
};

