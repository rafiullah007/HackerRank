#include <iostream>
#include <vector>

using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */


long aVeryBigSum(vector<long> ar) {
    long sum = 0;
    for(int i = 0; i < ar.size(); i++) {
        sum += ar[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<long> ar(n);

    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    cout << aVeryBigSum(ar) << endl;

    return 0;
}
