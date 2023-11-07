//divya verma
// lab patner: carlos hernandez
#include "Cow.h"
#include "HeiferGenerator.h"
#include "Dragon.h"
#include "IceDragon.h"
#include <iostream>
#include <string>
using namespace std;

void listCows(vector<Cow*>& cowPtrs)
{
    for(Cow* cowPtr : cowPtrs)
    {
        cout<<" " << cowPtr->getName();
    }
    cout<<"\n";
};

Cow* findCow(string& name, vector<Cow*>& cowPtrs)
{
    for(Cow* cowPtr : cowPtrs)
    {
        if(cowPtr->getName() == name)
        {
            return (cowPtr);
        }
    }
    return nullptr;
};


int main(int argc, char* argv[])
{
    vector<Cow*>& cowNames = HeiferGenerator::getCows();
    for(int i = 1; i < argc; i++)
    {
        string outputText;
        string arg1 = argv[1];
        if(arg1 == "-l")
        {
            cout<<"Cows available:";
            listCows(cowNames);
            cout<< "\n";
            break;
        }
        else if(arg1 == "-n")
        {
            string cowName = argv[2];
            string cowNameRef = cowName;
            if (findCow(cowNameRef, cowNames) != nullptr)
            {
                outputText = "";
                for (int i = 3; i < argc; i++) // argc is length right?
                {
                    // python says if text > 3 tf that mean?
                    if(i > 3)
                    {
                        outputText += " ";
                    }
                    outputText += argv[i];
                }
                cout << "\n" << outputText << "\n";
                cout << findCow(cowNameRef, cowNames)->getImage() << "\n"; // this website geeksforgeeks helped a lot. I am yateesh contributed to this https://www.geeksforgeeks.org/typeid-operator-in-c-with-examples/
                Cow* thisCow = findCow(cowNameRef, cowNames);
                if (Dragon* dragon = dynamic_cast<Dragon*>(thisCow))
                {
                    dragon->canBreatheFire() ? cout << "This dragon can breathe fire.\n\n" : cout << "This dragon cannot breathe fire.\n\n";
                }
                break;
            }
            else  // remember to delete with all ptr stuff
            {
                cout << "Could not find " << argv[2] << " cow!" << "\n\n";
                break;
            }
        }
        else if(argc >= 2)
        {
            outputText = "";
            for(int i = 1; i < argc; i++)
            {
                outputText += argv[i];
                if(i+1 < argc)
                {
                    outputText += " ";
                }
            }
            cout << "\n" <<outputText << "\n" << cowNames[0]->getImage() << "\n";
            break;
        }
    }
}



