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
    double length_of_dna = dna.size();
    double count_G_C = 0;
    for (int i = 0; i < length_of_dna; i++) {
        if (dna[i] == 'G')
            count_G_C++;
        else if (dna[i] == 'C')
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


string get_dna_complement(string dna)
{

    string reverse_of_dna = get_reverse_string(dna);

   
    for (int i = 0; i < reverse_of_dna.length(); i++)
    {
        switch (reverse_of_dna[i])
        {
        case 'A':
            reverse_of_dna[i] = 'T';
            break;
        case 'T':
            reverse_of_dna[i] = 'A';
            break;
        case 'C':
            reverse_of_dna[i] = 'G';
            break;
        case 'G':
            reverse_of_dna[i] = 'C';
            break;
        }
    }

    return reverse_of_dna;
}


/*
Menu Function uses user input to detrmine whether to get GC content
or get DNA Compliment
*/
string menu(int num)
{
    string result = "";

    switch (num)
    {
    case 1:
        result = 1;
        break;
    case 2:
        result = 2;
        break;
    default:
        result = "Invalid Option";
    }
    return result;
}