
/* You can add more to this header class declaration. For example,
 * you can add typedefs and data members for the data structure that you use. 
 * You can also method declarations for the methods you add to the
 * class.
*/

class Ngrams 
{
   private:
      int ngramSz;
      void insertNgram(std::string s);
   public:
      Ngrams(int ngramSz, WordList & wl);
      ~Ngrams();
      void printIncreasing();
      void printDecreasing();
};

