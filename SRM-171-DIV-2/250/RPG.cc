
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

class RPG
{
  public:
    vector <int> dieRolls(vector <string> dice)
    {
      int min = 0;
      int max = 0;
      float average = 0.0;
      int minPartial = 0;
      int maxPartial = 0;
      float averagePartial = 0.0;

      for(int i =0; i < dice.size(); i++) {
        string found = "";
        string minString ="";
        string maxString ="";

        for(int a =0; a < dice[i].size(); a++) {

          char ch = dice[i][a];

          if (ch == 'd') {
            found = "a"; 
            continue;
          }else if(found == "") {
            minString = minString + dice[i][a];
          }
          if(found != "") {
            maxString =  maxString + dice[i][a];
          }

        }

        minPartial = stoi(minString);
        maxPartial = stoi(maxString);

        min = min + minPartial;
        max = max + maxPartial * minPartial;

        int maxToAv = maxPartial + 1;

        averagePartial = (double)(minPartial * maxToAv) / 2;
        average = average + averagePartial;


      }
      int finAverage = average;

      int myints[] = {min, max, finAverage};
      std::vector<int> results (myints, myints + sizeof(myints) / sizeof(int) );

      return results;
    }
};

