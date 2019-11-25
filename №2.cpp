
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
string Reverse(string str){
    string src ="";
    for(int i =str.length(); i>=0; i--)
        src +=str[i];
    return src;
}
int main() {
    int n;
    cin >>n;
    int b=pow(10,n/2-1);
    if (n%2 ==0) {
        while (b<pow(10,n/2)) {
            string m =to_string(b);
            m = Reverse(m);
            cout << b<< m<< endl;
            b++;
        }
    } else {
        for(int a =0; a <10; a++) {
		// “ак как мы не перебираем все n-значные числа, а сразу формируем палиндромы,то перебор считаетс€ эффективным)
            while (b<pow(10,n/2)) {
                string m = to_string(b);
                m =Reverse(m);
                cout << b<< a<< m<< endl;
                b++;
            }
            b =pow(10,n/2-1);
        }    
    }
    return 0;
}
