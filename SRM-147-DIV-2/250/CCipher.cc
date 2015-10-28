
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

class CCipher
{
  public:
    string decode(string cipherText, int shift)
    {
      string pStr[] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
      string resultString =cipherText;
      for(int ilet = 0; ilet <= cipherText.size(); ilet++){

        int newKeyAlfa = 0;
        for(int ialfa = 1; ialfa <= pStr[0].size(); ialfa++){
          if(cipherText[ilet] == pStr[0][ialfa]){
            newKeyAlfa = ialfa - shift;
            if( newKeyAlfa < 0 ){
              newKeyAlfa =  pStr[0].size() + newKeyAlfa;
            }
            resultString[ilet]= pStr[0][newKeyAlfa];
          }

        }
      }
      return resultString;
    }
};

