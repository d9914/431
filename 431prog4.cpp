/*Program reads in file from user and alpabatizes two list, one with words begining with d or D 
and the other being the rest of the words
 Written by Domiano Altieri
 Loop to print out Map adapted from Stackoverflow
 October 2022
 Language: C++ (Codeblocks 64bit g++ compiler)
*/

#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main() {
 
    string filename;
    ifstream file;
    
    cout << "Enter the name of the file you would like to read: ";
    cin>>filename;
    
    file.open(filename.c_str());
   
    if (file.fail()){
        cout<<"Wrong name";
        return 1;
    }

    string word;
    map<string,int>dwords;
    map<string,int>words;
    
    int i=1;
    while (file >> word)
    {
        if (word.rfind("d",0)==0 || word.rfind("D",0)==0){
            dwords[word]++;
        }
        else{
            words[word]++;
        }
    }
    file.close();
    
    cout<<"Words that don't begin with 'd' or 'D' followed by their count"<<endl;
    for (map<string, int>::iterator it = words.begin(); it != words.end(); ++it) {

            cout << (*it).first << ": " << (*it).second << endl;
        }
    cout<<"Words that begin with 'd' or 'D' followed by their count"<<endl;
        for (map<string, int>::iterator it = dwords.begin(); it != dwords.end(); ++it) {

            cout << (*it).first << ": " << (*it).second << endl;
        }
    
   
   return 0;
}