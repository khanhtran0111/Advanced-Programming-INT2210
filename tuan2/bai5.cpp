
#include <iostream>

using namespace std;

string MoveNegave(string s)
{
    string ans;
    if(s[0] == '-'){
        cout << "negative ";
        int n = s.length();
        for(int i = 1; i < n; i++) ans += s[i];
    }
    else ans = s;
    return ans;
}

void handle1digit(char a){
    switch(a){
        case '0':
            cout << "zero ";
            break;
        case '1':
            cout << "one ";
            break;
        case '2':
            cout << "two ";
            break;
        case '3':
            cout << "three ";
            break;
        case '4':
            cout << "four ";
            break;
        case '5':
            cout << "five ";
            break;
        case '6':
            cout << "six ";
            break;
        case '7':
            cout << "seven ";
            break;
        case '8':
            cout << "eight ";
            break;
        case '9':
            cout << "nine ";
            break;
    }
}

void handle2digits(char a, char b, bool& bo){
    if(a == '0'){
        if(b == '0'){
            bo = false;
            return;
        }
        handle1digit(b);
        return;
    }
    else if(a == '1'){
        switch(b){
            case '0':
                cout << "ten ";
                break;
            case '1':
                cout << "eleven ";
                break;
            case '2':
                cout << "twelve ";
                break;
            case '3':
                cout << "thirteen ";
                break;
            case '4':
                cout << "fourteen ";
                break;
            case '5':
                cout << "fifteen ";
                break;
            case '6':
                cout << "sixteen ";
                break;
            case '7':
                cout << "seventeen ";
                break;
            case '8':
                cout << "eighteen ";
                break;
            case '9':
                cout << "nineteen ";
                break;
        }
        return;
    }
    if(b != '0'){
        switch(a){
            case '2':
                cout << "twenty-";
                break;
            case '3':
                cout << "thirty-";
                break;
            case '4':
                cout << "forty-";
                break;
            case '5':
                cout << "fifty-";
                break;
            case '6':
                cout << "sixty-";
                break;
            case '7':
                cout << "seventy-";
                break;
            case '8':
                cout << "eighty-";
                break;
            case '9':
                cout << "ninety-";
                break;
        }
        handle1digit(b);
    }
    else{
        switch(a){
            case '2':
                cout << "twenty";
                break;
            case '3':
                cout << "thirty";
                break;
            case '4':
                cout << "forty";
                break;
            case '5':
                cout << "fifty";
                break;
            case '6':
                cout << "sixty";
                break;
            case '7':
                cout << "seventy";
                break;
            case '8':
                cout << "eighty";
                break;
            case '9':
                cout << "ninety";
                break;
        }
    }
}

void handle3digits(char a, char b, char c, bool& bo)
{
    if(a != '0'){
        handle1digit(a); cout << "hundred ";
        handle2digits(b, c, bo);

    }
    else{
        handle2digits(b, c, bo);
    }
}

int main()
{
    string s; cin >> s;
    string num = MoveNegave(s);
    int a = num.length();
    bool b = true;
    if(a == 1) handle1digit(num[0]);
    else{
        if(a == 2) handle2digits(num[0], num[1], b);
        else if(a == 3) handle3digits(num[0], num[1], num[2], b);
        else if(a == 4){
            handle1digit(num[0]); cout << "thousand ";
            handle3digits(num[1], num[2], num[3], b);
        }
        else if(a == 5){
            handle2digits(num[0], num[1], b); cout << "thousand ";
            handle3digits(num[2], num[3], num[4], b);
        }
        else if(a == 6){
            handle3digits(num[0], num[1], num[2], b); cout << "thousand ";
            handle3digits(num[3], num[4], num[5], b);
        }
        else if(a == 7){
            handle1digit(num[0]); cout << "million ";
            handle3digits(num[1], num[2], num[3], b);
            if(b) cout << "thousand ";
            handle3digits(num[4], num[5], num[6], b);
        }
        else if(a == 8){
            handle2digits(num[0], num[1], b); cout << "million ";
            handle3digits(num[2], num[3], num[4], b);
            if(b) cout << "thousand ";
            handle3digits(num[5], num[6], num[7], b);
        }
        else if(a == 9){
            handle3digits(num[0], num[1], num[2], b); cout << "million ";
            handle3digits(num[3], num[4], num[5], b);
            if(b) cout << "thousand ";
            handle3digits(num[6], num[7], num[8], b);
        }
    }
    return 0;
}