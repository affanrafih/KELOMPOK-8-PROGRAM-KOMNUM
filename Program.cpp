#include <bits/stdc++.h>
using namespace std;

double a=0, b=0, c=0, d=0;

void parseFunction(string s){
    for (int i = 1; i < s.length(); i++){
        if (s[i] == '-') {
            s.insert(i, "+"); i++;
        }
    }

    string temp = "";
    for (int i = 0 i < s.length(); i++) {
        if (i == s.length() || s[i] == '+') {
            if (temp.find("x^3") >= 0) a = stod(temp);

            else if (temp.find("x^2") >= 0) b = stod(temp);

            else if (temp.find("x") >= 0) c = stod(temp);
            
            else d = stod(temp);
            temp = "";
        } else {
            temp += s[i];
        }
    }
}


double f(double x) {
    return a*x*x*x + b*x*x + c*x + d;
} 
double df(double x) {
    return 3*a*x*x + 2*b*x + c;
}
double ddf(double x) {
    return 6*a*x + 2*b;
}

int main() {
    stirng function;
    double x0, x_true;
    double x, x_new, fx, dfx, ddfx;
    double Et, Ea;
    int iteration = 1, max_iteration;

    cout << "Input function (ex = 12x^3 + 2*x^2 - 3*x + 4): ";
    cin >> function;

    cout << "Input x0: ";
    cin >> x0;

    cout << "Input x_true: ";
    cin >> x_true;

    cout << "Input max iteration: ";
    cin >> max_iteration;

    cout << fixed << setprecision(2);
    cout << "\n | Iteration | x | f(x) | f'(x) | f''(x) | Et(%) | Ea(%) |\n";
    cout << " |-----------|---|------|-------|--------|-------|-------|\n";

    while (iteration <= max_iteration) {
        x = x0;
        fx = f(x);
        dfx = df(x);
        ddfx = ddf(x);

        
    }
}