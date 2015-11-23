
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
#include <sstream>
#include <string>

class Substitute
{
  public:
    int getValue(string key, string code)
    {
      string resultString = "";
      for (int a = 0; a < code.size(); a++) {
        for (int b = 0; b < key.size(); b++) {
          if(code[a] == key[b]) {
            if(b + 1 == key.size()){
               resultString = resultString + "0"; 
            }else{
              //convert num to string
               resultString = resultString + to_string(b + 1); 
            }
          } 
        } 

      }
      int result = atoi( resultString.c_str() );
      return result;
    }
};

