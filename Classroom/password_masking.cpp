#include <iostream>
#include <string>
using namespace std;

class PasswordMasker {
private:
    string password;

public:
    void setPassword(string pass) {
        password = pass;
    }

    void maskPassword() {
        for (int i = 0; i < password.length(); i++) {
            password[i] = '*';
        }
    }

    string getPassword() {
        return password;
    }
};

int main() {
    PasswordMasker passwordObj;

    cout << "Enter your password: ";
    string inputPassword;
    cin >> inputPassword;

    passwordObj.setPassword(inputPassword);
    passwordObj.maskPassword();

    cout << "Masked Password: " << passwordObj.getPassword() << endl;

    return 0;
}