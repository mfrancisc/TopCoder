
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

class IBEvaluator
{
  public:
    vector <int> getSummary(vector <int> predictedGrades, vector <int> actualGrades)
    {

      int myints[] = {0,0,0,0,0,0,0};
      std::vector<int> percent (myints, myints + sizeof(myints) / sizeof(int) );

      int myintsCount[] = {0,0,0,0,0,0,0};
      std::vector<int> percentCount (myintsCount, myintsCount + sizeof(myintsCount) / sizeof(int) );

      for(int i = 0; i < predictedGrades.size(); i++) {


        if(predictedGrades[i] == actualGrades[i]){
          percentCount[0]++;
          continue;
        } 

        int diff = 0;
        if(predictedGrades[i] < actualGrades[i]) {
          diff = actualGrades[i] - predictedGrades[i];
          percentCount[diff]++;
          continue;
        }
        if(predictedGrades[i] > actualGrades[i]) {
          diff = predictedGrades[i] - actualGrades[i];
          percentCount[diff]++;
          continue;
        }



      }

      for(int x = 0; x < 7; x++){

        int percentCorrect = (percentCount[x] * 100)/predictedGrades.size();
        percent[x] = percentCorrect;

      }
      return percent;
    }
};

