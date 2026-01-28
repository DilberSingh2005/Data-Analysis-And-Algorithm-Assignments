#include <iostream>
using namespace std;

int main()
{
    int n;
    float W;
    cin >> n;

    float value[n], weight[n], ratio[n];

    for(int i = 0; i < n; i++)
        cin >> value[i];

    for(int i = 0; i < n; i++)
        cin >> weight[i];

    cin >> W;

    for(int i = 0; i < n; i++)
        ratio[i] = value[i] / weight[i];

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(ratio[i] < ratio[j])
            {
                float temp;
                temp = ratio[i]; ratio[i] = ratio[j]; ratio[j] = temp;
                temp = value[i]; value[i] = value[j]; value[j] = temp;
                temp = weight[i]; weight[i] = weight[j]; weight[j] = temp;
            }
        }
    }

    float totalValue = 0;

    for(int i = 0; i < n; i++)
    {
        if(weight[i] <= W)
        {
            W -= weight[i];
            totalValue += value[i];
        }
        else
        {
            totalValue += ratio[i] * W;
            break;
        }
    }

    cout << totalValue;
    return 0;
}
