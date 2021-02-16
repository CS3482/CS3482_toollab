/*
 * Rules:
 * 1) No global variables. Any data structure that you need to add must be
 *    added to the class declaration in NgramFast.h
 * 2) You can add one or two new classes if you like. However, it is certainly
 *    possible and easier to just modify this class. Take a look at how a 
 *    data structure is used in NgramSlow.  That's the wrong data structure for
 *    the problem, but it does show how a type can be defined and used in
 *    the class. (If you add new classes, don't forget to modify the makefile.)
 * 3) No functions.  You can add methods to the Ngrams class, but you can
 *    not add functions that are not within the class.
 * 4) No use of the C++ standard template library, except for the WordList class.
 *    You don't need to modify the WordList class so that it doesn't use the
 *    standard template library.
*/


#include <iostream>
#include <string>
#include "WordList.h"
#include "NgramFast.h"

/* This implementation cannot used the C++ standard template library. 
 * Thus, you will not need to include any other header files.
 */

/*
 * Ngrams
 *
 * takes as input the size of the ngrams to be built and the list  
 * of words to build the ngrams from and builds a linked list of 
 * ngrams.
 *
 * param: int ngramSz - size of the ngram
 * param: WordList & wl - list of the words use
 */
Ngrams::Ngrams(int ngramSz, WordList & wl)
{
   //ADD any code you need to initialize whatever structure
   //you use for your ngram

   //This code to get the next ngram will stay the same. 
   this->ngramSz = ngramSz; 
   wl.beginIter();
   while (!wl.endIter())
   {
      std::string ngram = wl.getNextNgram(ngramSz);
      wl.incrementIter();
      if (!ngram.empty()) insertNgram(ngram);
   }
}


/*
 * Ngrams destructor
 *
 * automatically called when Ngrams object goes out of scope
 * should delete any space dynamically allocated for the ngram
 */
Ngrams::~Ngrams()
{

}


/*
 * insertNgram
 *
 * Inserts ngram into whatever structure you choose to hold
 * your ngrams.
 *
 * param: std::string s - ngram to be inserted
 * return: none
 */
void Ngrams::insertNgram(std::string s)
{
   //ADD code to insert ngram in whatever structure you choose
}

/*
 * You can ADD any other methods that you need here.
*/

/*
 * printIncreasing
 *
 * prints the list of ngrams in increasing order
 *
 */
void Ngrams::printIncreasing()
{
   std::cout << "\nIncreasing list of " << ngramSz << " word ngrams and counts\n";
   std::cout << "-------------------------------------------\n";

   //ADD code to print the ngrams in increasing order of count
}

/*
 * printIncreasing
 *
 * prints the list of ngrams in decreasing order
 *
 */
void Ngrams::printDecreasing()
{
   std::cout << "\nDecreasing list of " << ngramSz << " word ngrams and counts\n";
   std::cout << "-------------------------------------------\n";
   
   //ADD code to print the ngrams in increasing order of count
}
