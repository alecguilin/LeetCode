#include<iostream>
#include<vector>

int maxProfit(std::vector<int> &prices)
{
    int maxProfit = 0;
    int min = INT_MAX;

    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < min)
        {
            min = prices[i];
        }
        else
        {
            int temp = prices[i] - min;
            if (maxProfit < temp)
            {
                maxProfit = temp;
            }
        }
    }
    return maxProfit;
}

int main () {
    std::vector<int> stocks {7, 1, 5, 3, 6, 4};
    std::cout << "Maximum Profit: " << maxProfit(stocks) << std::endl;
}