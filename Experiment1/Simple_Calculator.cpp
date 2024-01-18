
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string operation;
    int n , m;
    cout << "Enter + , - , * ,%,/\nWhich Operation do you want : "; 
    cin >> operation;
    cout << "Enter the numbers : ";
    cin >> n >> m;
    if(operation == "+"){
    cout << n + m;
    }
    else if(operation =="-"){
    cout << n-m;
    }
    else if(operation == "*"){
    cout << n*m;
    }
    else if(operation == "/"){
    cout<< n/m;
    }
     else if(operation == "%"){
         cout  << n % m;
     }
    

    return 0;
}
