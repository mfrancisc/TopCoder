
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

class SimpleCalculator
{
  public:
    int calculate(string input)
    {
      string first = "";
      string second = "";
      int firstFound = 0;
      int plusFound = 0;
      int minusFound = 0;
      int divFound = 0;
      int multFound = 0;
      int result = 0;
      for(int x = 0; x < input.size(); x++) {
        if(input[x] == '+' ){
          firstFound = 1; 
          plusFound = 1;
          continue;
        }
        if( input[x] == '-' ) {
          firstFound = 1;
          minusFound = 1;
          continue;
        }

        if( input[x] == '/' ){
          firstFound = 1;
          divFound =1;
          continue;
        }
        if(input[x] == '*'){
          firstFound = 1;
          multFound = 1;
          continue;
        }

        if(firstFound == 0 ) {
          first = first + input[x];
        }else {
          second = second + input[x]; 
        }

      }

        if(plusFound == 1){
          result = stoi(first) + stoi(second);
        }
        if(minusFound == 1){
          result = stoi(first) - stoi(second);
        }
        if(divFound == 1){
          result = stoi(first) / stoi(second);
        }
        if(multFound == 1){
          result = stoi(first) * stoi(second);
        }

      return result;
    }
};

