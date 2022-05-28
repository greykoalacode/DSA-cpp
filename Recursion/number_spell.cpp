#include <iostream>
using namespace std;

string convertNumber(int a){
    switch (a)
    {
    case 0:
        return "zero";
        break;
    case 1:
        return "one";
        break;
    case 2:
        return "two";
        break;
    case 3:
        return "three";
        break;
    case 4:
        return "four";
        break;
    case 5:
        return "five";
        break;
    case 6:
        return "six";
        break;
    case 7:
        return "seven";
        break;
    case 8:
        return "eight";
        break;
    case 9:
        return "nine";
        break;
    default:
        return "";
        break;
    }
    return "";
}
// Better way than switch case
string spell[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

string numberSpell(int n){
    // base case
    if(n == 0){
        return "";
    }

    // recursive case
    int lastDigit = n % 10;
    if(n==2){
        return numberSpell(n/10)+spell[lastDigit];
    }
    return numberSpell(n/10)+" "+spell[lastDigit];
}

int main(){
    int year = 2021;
    cout<<numberSpell(year)<<endl;
    return 0;
}