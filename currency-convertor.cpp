#include<bits/stdc++.h>
using namespace std;

void currencyConvertor(int fromCur,int toCur,double amt){
    unordered_map<int,double> rateMap = {{1,0.0114315},{2,1.0},{3,1.03158},{4,0.69739528},{5,0.62858277},
                                         {6,0.0065955958},{7,1.2386155},{8,1.0985566},{9,0.029535},{10,0.0102364}};
    unordered_map<int,string> currIDXMap = {{1,"INR"},{2,"USD"},{3,"EUR"},{4,"CAD"},{5,"AUD"},
                                            {6,"JPY"},{7,"GBP"},{8,"CHF"},{9,"THB"},{10,"RUB"}};
    unordered_map<int,string> currNameMap = {{1,"Indian Rupee"}, {2,"US Dollar"}, {3,"Euro"},{4,"CAD Canadian Dollar"},
                                             {5,"Australia Dollar"}, {6,"Japanese Yen"}, {7,"British Pound"},
                                             {8,"CHF Swiss Franc"},{9,"Thai Baht"},{10,"Russian Ruble"}};

    double fromRateConv = rateMap[fromCur]/rateMap[toCur];                                        
    double toRateConv = rateMap[toCur]/rateMap[fromCur];

    cout << amt << " " << currIDXMap[fromCur] << " = " << fromRateConv * amt << ' ' << currIDXMap[toCur] << endl;
    cout << "1 " << currIDXMap[toCur] << " = " << toRateConv * 1 << ' ' << currIDXMap[fromCur] << endl;

    cout << "\nConversion Rates of " << currNameMap[fromCur] << " to " << currNameMap[toCur] << endl;
    cout << "1 " << currIDXMap[fromCur] << " = " << fromRateConv * 1 << ' ' << currIDXMap[toCur] << endl;
    cout << "5 " << currIDXMap[fromCur] << " = " << fromRateConv * 5 << ' ' << currIDXMap[toCur] << endl;
    cout << "10 " << currIDXMap[fromCur] << " = " << fromRateConv * 10 << ' ' << currIDXMap[toCur] << endl;
    cout << "25 " << currIDXMap[fromCur] << " = " << fromRateConv * 25 << ' ' << currIDXMap[toCur] << endl;
    cout << "50 " << currIDXMap[fromCur] << " = " << fromRateConv * 50 << ' ' << currIDXMap[toCur] << endl;
    cout << "100 " << currIDXMap[fromCur] << " = " << fromRateConv * 100 << ' ' << currIDXMap[toCur] << endl;
    cout << "500 " << currIDXMap[fromCur] << " = " << fromRateConv * 500 << ' ' << currIDXMap[toCur] << endl;
    cout << "1000 " << currIDXMap[fromCur] << " = " << fromRateConv * 1000 << ' ' << currIDXMap[toCur] << endl;
    cout << "5000 " << currIDXMap[fromCur] << " = " << fromRateConv * 5000 << ' ' << currIDXMap[toCur] << endl;
    cout << "10000 " << currIDXMap[fromCur] << " = " << fromRateConv * 10000 << ' ' << currIDXMap[toCur] << endl;

    cout << "\nConversion Rates of " << currNameMap[toCur] << " to " << currNameMap[fromCur] << endl;
    cout << "1 " << currIDXMap[toCur] << " = " << toRateConv * 1 << ' ' << currIDXMap[fromCur] << endl;
    cout << "5 " << currIDXMap[toCur] << " = " << toRateConv * 5 << ' ' << currIDXMap[fromCur] << endl;
    cout << "10 " << currIDXMap[toCur] << " = " << toRateConv * 10 << ' ' << currIDXMap[fromCur] << endl;
    cout << "25 " << currIDXMap[toCur] << " = " << toRateConv * 25 << ' ' << currIDXMap[fromCur] << endl;
    cout << "50 " << currIDXMap[toCur] << " = " << toRateConv * 50 << ' ' << currIDXMap[fromCur] << endl;
    cout << "100 " << currIDXMap[toCur] << " = " << toRateConv * 100 << ' ' << currIDXMap[fromCur] << endl;
    cout << "500 " << currIDXMap[toCur] << " = " << toRateConv * 500 << ' ' << currIDXMap[fromCur] << endl;
    cout << "1000 " << currIDXMap[toCur] << " = " << toRateConv * 1000 << ' ' << currIDXMap[fromCur] << endl;
    cout << "5000 " << currIDXMap[toCur] << " = " << toRateConv * 5000 << ' ' << currIDXMap[fromCur] << endl;
    cout << "10000 " << currIDXMap[toCur] << " = " << toRateConv * 10000 << ' ' << currIDXMap[fromCur] << endl;
}

int main(){
    cout << "\n\n---------------------- "<<"Welcome to Currency Convertor" <<" ----------------------\n\n";
    vector<string> currencyList =  {"1 - INR Indian Rupee", "2 - USD US Dollar", "3 - EUR Euro","4 - CAD Canadian Dollar",
                                    "5 - AUD Australia Dollar", "6 - JPY Japanese Yen", "7 - GBP British Pound",
                                    "8 - CHF Swiss Franc","9 - THB Thai Baht","10 - RUB Russian Ruble"};
    cout << "List of Currencies: " << endl;
    for(string val: currencyList){
        cout << val << endl;
    }
    int fromCur, toCur;
    double amt;
    cout << "\nChoose The Currency of Conversion (Enter Index from the Currency List) = ";
    cin >> fromCur;
    cout << "Choose The Currency to be Converted in (Enter Index from The Above List) = ";
    cin >> toCur;

    cout << "Enter Amount to be Converted ";
    cin >> amt;
    currencyConvertor(fromCur,toCur,amt);
    
}