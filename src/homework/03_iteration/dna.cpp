#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string &dna)
{   
    int length_of_dna = dna.size();
    int count_G_C = 0;
    for (int i = 0; i < length_of_dna; i++) {
        if (dna.at(i) == 'G' || 'C')
            count_G_C++;
    }
    



    double gc_content_answer = count_G_C / length_of_dna;



    return gc_content_answer;
}




/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
    
    string rev_dna;
    int i;
    for (int i = dna.size() - 1; i > -1; i--) 
    {
        rev_dna = rev_dna.append(1, dna[i]);
    }


    return rev_dna;
}




/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/


string get_dna_complement(string &dna, char c1, char c2, char c3, char c4)
{

    string reverse_of_dna = get_reverse_string(dna);


    int l = reverse_of_dna.length();

    for (int i = 0; i < l ; i++)
    {
        if (reverse_of_dna[i] == c1)
        {
            reverse_of_dna[i] = c2;
        }
        else if (reverse_of_dna[i] == c2)
        {
            reverse_of_dna[i] = c1;
        }
        else if (reverse_of_dna[i] == c3)
        {
            reverse_of_dna[i] = c4;
        }
        else if (reverse_of_dna[i] == c4)
        {
            reverse_of_dna[i] = c3;
        }
    }

    string dna_compliment_results = "";


    return dna_compliment_results;
}
