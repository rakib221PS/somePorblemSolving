#include <iostream>

using namespace std;
void collectSentence(char *sentence, int length);
void checkTheirExistCharacter(char *sentence, int length, bool ok);
void totalLowerCaseLetter(char *sentence, int length, int lowerCaseCharacter);
int main()
{
    int lowerCaseCharacter = 0;
    bool ok = false;
    const int length = 50;
    char sentence[length];
    collectSentence(sentence, length);
    checkTheirExistCharacter(sentence, length, ok);
    if (ok == true)
    {
        totalLowerCaseLetter(sentence, length, lowerCaseCharacter);
    }
    else
    {
        cout<<"Your sentence must have atleast one character"<<endl;
    }
    
    

    return 0;
}

void collectSentence(char *sentence, int length)
{
    cout << "Give a sentence: ";
    cin.get(sentence, length);
}

void checkTheirExistCharacter(char *sentence, int length, bool ok){
    for (int i = 0; i < length; i++)
    {
        if (sentence[i] >= 'a'||'A' && sentence[i] <= 'z'||'Z')
        {
            ok = true;
        }
        
    }
    
}

void totalLowerCaseLetter(char *sentence, int length, int lowerCaseCharacter)
{
    for (int i = 0; sentence[i] != 0; ++i)
    {
        // cout<<sentence[i]<<" "<<endl;
        if (sentence[i] >= 'a' && sentence[i] <= 'z')
        {
            lowerCaseCharacter++;
        }
    }
    cout << "The Total Lower case character in sentence is: " << lowerCaseCharacter << endl;
}