#include <iostream>

using namespace std;

void NumberOfCandidatesWithPoints(int *candidates, int n, int min, int max);
void NumberAndListOfAcceptedAndUnacceptedCandidates(int *candidates, int n, int arithmaticAverage, int acceptedCandidates);

int main(){
    int n, acceptedCandidates = 0, min = 1, max = 800, arithmaticAverage = 0;
    cout<<"Enter total candidates number: ";
    cin>>n;

    if (n>0)
    {
       int candidates[n];
       NumberOfCandidatesWithPoints(candidates, n, min, max);
       NumberAndListOfAcceptedAndUnacceptedCandidates(candidates, n, arithmaticAverage, acceptedCandidates);
    }
    else{
        cout<<"Number is not valid";
    }
    
}

void NumberOfCandidatesWithPoints(int *candidates, int n, int min, int max){
        for (int i = 0; i < n; i++)
        {
            int randomNumber = rand()%(max-min)+min;
            candidates[i] = randomNumber;
        }
        
}

void NumberAndListOfAcceptedAndUnacceptedCandidates(int *candidates, int n, int arithmaticAverage, int acceptedCandidates){
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + candidates[i];
        }
        arithmaticAverage = sum / n;
        for (int i = 0; i < n; i++)
        {
            if (candidates[i] > arithmaticAverage)
            {
                acceptedCandidates++;
            }
            
        }

        cout<<"Total accepted candidates are: "<<acceptedCandidates<<endl;
        cout<<"Total unaccepted cadidates are: "<<n-acceptedCandidates<<endl;
        cout<<"Accepted Candidates List: "<<endl;
        for (int i = 0; i < n; i++)
        {
            if (candidates[i] > arithmaticAverage)
            {
                cout<< i <<": "<<candidates[i]<<endl;
            }
            
        }
        cout<<"Unaccepted Candidates List: "<<endl;
        for (int i = 0; i < n; i++)
        {
            if (candidates[i] < arithmaticAverage)
            {
                cout<< i <<": "<<candidates[i]<<endl;
            }
            
        }  
        
}
