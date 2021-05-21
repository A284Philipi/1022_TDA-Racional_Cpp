#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    int casos, cont = 0, a, b, c, d, e, f, i, mdc = 1;
    string s1, s2, s3;
    cin >> casos;
    while (cont < casos){
        cin >> a;
        cin >> s1;
        cin >> b;
        cin >> s2;
        cin >> c;
        cin >> s3;
        cin >> d;
        if (s2[0] == '+'){
            e = (a * d) + (c * b);
            f = (b * d);
        }else{
            if (s2[0] == '-'){
                e = (a * d) - (c * b);
                f = (b * d);
            }else{
                if (s2[0] == '*'){
                    e = a * c;
                    f = b * d;
                }else{
                    e = a * d;
                    f = b * c;
                }
            }
        }
        cout << e << "/" << f << " = ";
        if (e >= f){
            for (i = 1; i <= e; i++){
                if (e%i == 0){
                    if (f%i == 0){
                        mdc = i;
                    }
                }
            }
        }else{
            for (i = 1; i <= f; i++){
                if (f%i == 0){
                    if (e%i == 0){
                        mdc = i;
                    }
                }
            }
        }
        e = e / mdc;
        f = f / mdc;
        mdc = 1;
        cout << e << "/" << f <<endl;
        cont++;
    }
    return 0;
}
