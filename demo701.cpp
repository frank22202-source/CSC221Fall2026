#include <iostream>
using namespace std;

int main() {
    double scores[5];
    for(int i=0;i < size(scores);i++){
        cout << "Enter scores:" << endl;
        cin >> scores[i];
    }
    cout << scores << endl;
    cout << *scores << endl;

    // for(int i=0;i < size(scores);i++){
    //     cout << scores[i] << endl;
    // }

}