#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of activities : " << endl;
    cin >> n;

    int start[n], finish[n];

    cout << "Enter start times : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> start[i];
    }
    cout << endl;

    cout << "Enter finish times : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> finish[i];
    }

    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (finish[i] > finish[j])
            {
                swap(finish[i], finish[j]);
                swap(start[i], start[j]);
            }
        }
    }

    cout << "\nSelected activities:\n";

      int count = 1;
    int lastFinish = finish[0];
    cout << "(" << start[0] << ", " << finish[0] << ") ";


    for(int i = 1; i < n; i++) {
        if(start[i] >= lastFinish) {
            cout << "(" << start[i] << ", " << finish[i] << ") ";
            lastFinish = finish[i];
            count++;
        }
    }

    cout << "\n\nMaximum number of activities = " << count << endl;

    return 0;
}