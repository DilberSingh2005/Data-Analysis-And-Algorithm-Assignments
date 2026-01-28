#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the total number of trains: " << endl;
    cin >> n;

    int at[n], dt[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter arrival time of train " << i + 1 << ": " << endl;
        cin >> at[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << "Enter departure time of train " << i + 1 << ": " << endl;
        cin >> dt[i];
    }

    int maxPlatforms = 0;

  
    for(int i = 0; i < n; i++)
    {
        int platforms = 0;

        for(int j = 0; j < n; j++)
        {
           
            if(at[i] >= at[j] && at[i] <= dt[j])
            {
                platforms++;
            }
        }

        maxPlatforms = max(maxPlatforms, platforms);
    }

    cout << "\nMinimum number of platforms required = "
         << maxPlatforms << endl;

    return 0;
}
