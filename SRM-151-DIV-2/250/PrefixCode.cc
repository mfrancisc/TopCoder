
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class PrefixCode{
  public:
    string isOne(vector <string> words) {
      int nrElements = words.size();
      int elementNr = 0;
      for(int n = 0; n < nrElements; n++){
        elementNr = n;
        for (int j = 0;  j< nrElements; j++){
          if(n == j){
            continue;
          }

          if(words[n].size() < words[j].size()){
            int readed = 0;
            string first = words[n];
            string second = words[j];
            for(int z = 0; z < words[n].size(); z++)
            {
              if(first[z] == second[z])
              {
                readed = z;
              }
            }
            if(readed == words[n].size() - 1)
            {
              string result =  "No, " + to_string(elementNr);
              return result;
            }
          }

        }
      }
      return "Yes";
    }
};

