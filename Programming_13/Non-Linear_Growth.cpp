// Non-Linear_Growth.cpp
// Created by Johnathan Kissee
// 10/23/24
#include <iostream>
using namespace std;

    // Constants
    const double dailyGrowthFactor = 2.0;  // Cells double every day
    const int initialCells = 1;  // 1 cancer cell at day 0
    const int doubling_time = 154; // 154 days
    const int detectionSize = 20000; // cells
    const int treatmentSize = 180000; // cells

int main() {
    int days = 0;
    int cells = 1;
    bool detected = false;

    while(cells < 180000) // Intervention required
    {

        if (days < 365) 
        {
             cout << "Day " << days << ": The tumor contains " << cells << " cells." << endl;
        }
        else 
        {
                         cout << "Year " << (days / 365) << " Day " << (days % 365) << ": The tumor contains " << cells << " cells." << endl;

        }

        if (cells > 20000 && (!detected)) 
        {
            cout << "Tumor detected on day " << days << ", with a size of " << cells << " cells." <<endl;
            detected = true;
        }

        cells = cells * 2; // # of cells doubles
        days = days + 154; // every 154 days
    }

    cout << "Day " << days << ": Intervention Required. The tumor contains " << cells << " cells." << endl;

    return 0;
}