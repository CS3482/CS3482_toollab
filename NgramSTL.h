/*
 * Here are includes for lots of STL header files.
 * You shouldn't need to add more.
*/
#include <iostream>
#include <set>
#include <string>
#include <array>
#include <iterator>
#include <list>
#include <tuple>
#include <utility>
#include <map>
#include <unordered_map>
#include <vector>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <algorithm>
#include <functional>

/* You can add more to this header class declaration. For example,
 * you can add a data member for the stl data structure that you use. 
 * You can also method declarations for the methods you add to the
 * class.
 */
class Ngrams 
{
   private:
      int ngramSz;
      void insertNgram(std::string s);
      void insertCount();
   public:
      int maxCount;
      Ngrams(int ngramSz, WordList & wl);
      ~Ngrams();
      void printIncreasing();
      void printDecreasing();
};

