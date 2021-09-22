/**
 *    @file: word-count.cc
 *  @author: Brody Reynolds
 *    @date: 9/20/2021
 *   @brief: Counting the amount of word and sentences than averaging them out due to certain circumstances. 
 *  
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    string para; // Inserted paragraph variable
    char g; // Paragraph length position 
    int length; // Paragraph length
    double wordcount = 0; // Word count
    double sentencecount = 0; // Sentence count
    double average; // Average of words over sentences

    cout<< "Enter a paragraph than terminate with @@@..."<<endl;
    cin >> para;

    while(para != "@@@") // End loop when @@@ is entered
    {
        wordcount ++;

        length = para.length(); // Length is the the length of the paragraph 

        for (int i=0; i < length; i++)
        {
            g = para.at(i); // Declared word postion

            if(g == '.'|| g == '!' || g == '?') // If code runs into .!? than add to sentence count
            {
                sentencecount ++;
            }
        }

        cin >> para; // Enter another paragraph

    }
    
    
    average = wordcount / sentencecount; // Average of words to sentences

    
    cout << fixed << setprecision(0);

    cout << "Word count: " << wordcount <<endl;
    cout << "Sentence count: " << sentencecount <<endl;

    cout << fixed << setprecision(1);
    // Error codes for =0 values
    if (wordcount == 0 && sentencecount == 0) 
    {
        cout << "You did not enter any text!" <<endl;
    }
    
    if (wordcount > 0 && sentencecount == 0 ) 
    {
        cout << "You did not enter any sentences!" <<endl;

    }
    
    if (wordcount == 0 && sentencecount > 0)
    {
        cout << "You did not enter any Words!" <<endl;
    }
    // When both the word and sentence count is >0
    if (wordcount > 0 && sentencecount > 0)
    {
        cout << "Average words per sentence: " << average <<endl;
    }
    
    return(0);
}   