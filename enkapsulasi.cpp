#include <iostream>
using namespace std;

class remotelampu {
private:
    string saklarNo[10];
public:
    void setSaklarNo(int i, string value) {
        saklarNo[i] = value;
    }
    string getSaklarNo(int i) {
        return saklarNo[i];
    }
};