#include <iostream>
#include <iomanip>

const int NUM_YEARS = 3;
const int NUM_MONTHS = 12;

void calculateAverageExpenditure(int expenditures[NUM_YEARS][NUM_MONTHS], double averages[NUM_YEARS][NUM_MONTHS], double yearlyTotals[NUM_YEARS], double& totalExpenditure, double& overallAverage)
{
    totalExpenditure = 0;

    for (int i = 0; i < NUM_YEARS; i++)
    {
        double yearlyTotal = 0;
        for (int j = 0; j < NUM_MONTHS; j++)
        {
            yearlyTotal += expenditures[i][j];
            totalExpenditure += expenditures[i][j];
        }
        yearlyTotals[i] = yearlyTotal;

        for (int j = 0; j < NUM_MONTHS; j++)
        {
            averages[i][j] = expenditures[i][j] / static_cast<double>(NUM_MONTHS);
        }
    }

    overallAverage = totalExpenditure / (NUM_YEARS * NUM_MONTHS);
}

void displayTable(int expenditures[NUM_YEARS][NUM_MONTHS])
{
    std::cout << "Table of Expenditure\n";
    std::cout << "---------------------\n";
    std::cout << "Month\tYear 1\tYear 2\tYear 3\n";
    std::cout << "---------------------\n";
    for (int i = 0; i < NUM_MONTHS; i++)
    {
        std::cout << i + 1 << "\t";
        for (int j = 0; j < NUM_YEARS; j++)
        {
            std::cout << expenditures[j][i] << "\t";
        }
        std::cout << "\n";
    }
    std::cout << "---------------------\n";
}

void displayAverages(double averages[NUM_YEARS][NUM_MONTHS])
{
    std::cout << "Monthly Averages:\n";
    for (int i = 0; i < NUM_YEARS; i++)
    {
        std::cout << "Year " << i + 1 << ":\n";
        for (int j = 0; j < NUM_MONTHS; j++)
        {
            std::cout << "Month " << j + 1 << ": " << std::fixed << std::setprecision(2) << averages[i][j] << "\n";
        }
        std::cout << "\n";
    }
}

void displayYearlyTotals(double yearlyTotals[NUM_YEARS])
{
    std::cout << "Yearly Totals:\n";
    for (int i = 0; i < NUM_YEARS; i++)
    {
        std::cout << "Year " << i + 1 << ": " << yearlyTotals[i] << "\n";
    }
}

int main()
{
    int expenditures[NUM_YEARS][NUM_MONTHS] = {
        {1000, 1200, 800, 900, 1100, 950, 1050, 850, 1000, 1200, 800, 900},
        {1100, 1150, 950, 1050, 1000, 1300, 1200, 1150, 1050, 1100, 900, 950},
        {950, 900, 1000, 800, 1200, 1100, 900, 1000, 850, 900, 950, 1150}
    };

    double averages[NUM_YEARS][NUM_MONTHS];
    double yearlyTotals[NUM_YEARS];
    double totalExpenditure;
    double overallAverage;

    calculateAverageExpenditure(expenditures, averages, yearlyTotals, totalExpenditure, overallAverage);

    displayTable(expenditures);
    displayAverages(averages);
    displayYearlyTotals(yearlyTotals);

    std::cout << "Total Expenditure: " << totalExpenditure << "\n";
    std::cout << "Overall Average: " << overallAverage << "\n";

    return 0;
}
