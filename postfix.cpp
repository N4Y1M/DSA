#include<bits/stdc++.h>
using namespace std;

double evaluatePostfix(const vector<string>& tokens) {
    stack<double> s;

    for (const string& token : tokens) {
        if (isdigit(token[0])) {
            s.push(stod(token));
        } else {
            double b = s.top(); s.pop();
            double a = s.top(); s.pop();

            if (token == "+") s.push(a + b);
            else if (token == "-") s.push(a - b);
            else if (token == "*") s.push(a * b);
            else if (token == "↑") s.push(pow(a, b));
            else {
                cout << "Unsupported operator: " << token << endl;
                return 0;
            }
        }
    }
    return s.top();
}


int main() {
    vector<string> expr = {"3", "1", "+", "2", "↑", "7", "4", "-", "2", "*", "+", "5", "-"};
    double result = evaluatePostfix(expr);
    cout << "Result of postfix evaluation: " << result << endl;
    return 0;
}
