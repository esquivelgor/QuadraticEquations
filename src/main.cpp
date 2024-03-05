#include <cmath>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    float x1, x2; // roots

    // Check if the input arguments are valid
    if(argc < 4) { 
        cout << "You typed the coefficients wrong, try again." << endl;
    } else {
        float a = atof(argv[1]);
        float b = atof(argv[2]);
        float c = atof(argv[3]);

        // Calculate the determinant
        float d = pow(b,2) - (4 * a * c);

        // We define the case roots are real and different, real and equal or complex respectively. 
        
        if(d > 0) {
            x1 = (-b + sqrt(d))/(2 * a);
            x2 = (-b - sqrt(d))/(2 * a);
            cout << "{" << x1 << ", " << x2 << "}" << endl;
        } else if (d == 0) {
            x1 = -b/(2*a);
            cout << "{" << x1 << ", " << x1 << "}" << endl;
        } else {
            cout << "{}" << endl;
        }
    }  
    return 0;
}
