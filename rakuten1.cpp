#include<bits/stdc++.h>
using namespace std;
int main()
{
        string filename("Sh03S.txt");
    int number;

    ifstream input_file(filename);
    if (!input_file.is_open()) {
        cerr << "Could not open the file - '"
             << filename << "'" << endl;
        return EXIT_FAILURE;
    }
    int sum =0;
    while (input_file >> number) {
        sum += number;
    }
    cout << "sum of quantity is " << sum;
    input_file.close();
}