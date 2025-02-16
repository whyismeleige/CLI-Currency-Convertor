#include <bits/stdc++.h>
using namespace std;

void conversionRate(unordered_map<int, string> &currIdxMap, unordered_map<int, string> &currNameMap, double fromRateConv, double toCur, double fromCur)
{
    vector<int> vec = {1, 5, 10, 25, 50, 100, 500, 1000, 5000, 10000};
    cout << right << setw(15) << "\nConversion Rates of " << currNameMap[fromCur] << " to " << currNameMap[toCur] << endl;
    cout << right << setw(15) << "-------------------------------------" << endl;
    cout << right << setw(20) << currNameMap[fromCur] << "  " << currNameMap[toCur] << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << right << setw(15) << vec[i] << " " << currIdxMap[fromCur] << " = " << fromRateConv * (double)vec[i] << " " << currIdxMap[toCur] << endl;
    }
}

void currencyConvertor(int fromCur, int toCur, double amt)
{
    unordered_map<int, double> rateMap = {{1, 0.0114315}, {2, 1.0}, {3, 1.03158}, {4, 0.69739528}, {5, 0.62858277}, {6, 0.0065955958}, {7, 1.2386155}, {8, 1.0985566}, {9, 0.029535}, {10, 0.0102364}};
    unordered_map<int, string> currIDXMap = {{1, "INR"}, {2, "USD"}, {3, "EUR"}, {4, "CAD"}, {5, "AUD"}, {6, "JPY"}, {7, "GBP"}, {8, "CHF"}, {9, "THB"}, {10, "RUB"}};
    unordered_map<int, string> currNameMap = {{1, "Indian Rupee"}, {2, "US Dollar"}, {3, "Euro"}, {4, "CAD Canadian Dollar"}, {5, "Australia Dollar"}, {6, "Japanese Yen"}, {7, "British Pound"}, {8, "CHF Swiss Franc"}, {9, "Thai Baht"}, {10, "Russian Ruble"}};

    double fromRateConv = rateMap[fromCur] / rateMap[toCur];
    double toRateConv = rateMap[toCur] / rateMap[fromCur];

    cout << amt << " " << currIDXMap[fromCur] << " = " << fromRateConv * amt << ' ' << currIDXMap[toCur] << endl;
    cout << "1 " << currIDXMap[toCur] << " = " << toRateConv * 1 << ' ' << currIDXMap[fromCur] << endl;
    conversionRate(currIDXMap, currNameMap, fromRateConv, toCur, fromCur);
    conversionRate(currIDXMap, currNameMap, toRateConv, fromCur, toCur);
}

int main()
{
    char validation;
    cout << fixed << setprecision(4);
    do
    {
        cout << "\n\n---------------------- " << "Welcome to Currency Convertor" << " ----------------------\n\n";
        vector<string> currencyList = {"INR Indian Rupee", "USD US Dollar", "EUR Euro", "CAD Canadian Dollar",
                                       "AUD Australia Dollar", "JPY Japanese Yen", "GBP British Pound",
                                       "CHF Swiss Franc", "THB Thai Baht", "RUB Russian Ruble"};
        unordered_map<int, double> rateMap = {{1, 0.0114315}, {2, 1.0}, {3, 1.03158}, {4, 0.69739528}, {5, 0.62858277}, {6, 0.0065955958}, {7, 1.2386155}, {8, 1.0985566}, {9, 0.029535}, {10, 0.0102364}};
        cout << right << setw(20) << "Currency Name" << setw(10) << "Code" << setw(20) << "Rate (per/USD)" << endl;
        for (int i = 0; i < currencyList.size(); i++)
        {
            cout << right << setw(20) << currencyList[i] << setw(10) << i+1 << setw(20) << rateMap[i+1] << endl;
        }
        int fromCur, toCur;
        double amt;
        char curValidation;
        do
        {
            cout << "\nChoose The Currency of Conversion (Enter Index from the Currency List) = ";
            cin >> fromCur;
            cout << "Choose The Currency to be Converted in (Enter Index from The Above List) = ";
            cin >> toCur;
            cout << "These are the currencies you have chosen for conversion: " << endl;
            cout << currencyList[fromCur - 1] << " to " << currencyList[toCur - 1] << endl;
            cout << "Do you want to Continue with these currencies? (Y/N) = ";
            cin >> curValidation;
        } while (curValidation != 'Y');
        cout << "Enter Amount to be Converted ";
        cin >> amt;
        currencyConvertor(fromCur, toCur, amt);
        cout << "Would you Like to Continue (Y/N) = ";
        cin >> validation;
    } while (validation != 'N');
}