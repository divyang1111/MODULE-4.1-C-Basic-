// Assume a class cricketer is declared. Declare a derived class batsman from 
// cricketer. Data member of batsman. Total runs, Average runs and best 
// performance. Member functions input data, calculate average runs, Display 
// data. (Single Inheritance) 
#include <iostream>
using namespace std;


class Cricketer 
{
protected:
    string name;
    int matches;

public:
    
    void inputCricketerData() 
	{
        cout << "Enter cricketer's name: ";
        cin >> name;
        cout << "Enter number of matches played: ";
        cin >> matches;
    }

    
    void displayCricketerData() 
	{
        cout << "Cricketer's Name: " << name << endl;
        cout << "Matches Played: " << matches << endl;
    }
};


class Batsman : public Cricketer 
{
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    
    void inputBatsmanData() 
	{
        inputCricketerData();
        cout << "Enter total runs scored: ";
        cin >> totalRuns;
        cout << "Enter best performance (highest score): ";
        cin >> bestPerformance;
        calculateAverageRuns();
    }

    
    void calculateAverageRuns() 
	{
        if (matches != 0) 
		{
            averageRuns = static_cast<float>(totalRuns) / matches;
        } else {
            averageRuns = 0;
        }
    }

    
    void displayBatsmanData() 
	{
        displayCricketerData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() 
{
    Batsman batsman;

   
    batsman.inputBatsmanData();

    
    batsman.displayBatsmanData();

    return 0;
}
 
