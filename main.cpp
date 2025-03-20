#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, string> chatbot = {
        {"salom", "Salom, jigar! Qandaysan?"},
        {"qalesan", "Zo'r! O'zing qalesan?"},
        {"nima gap", "Hech gap yo'q, sen nima qilyapsan?"},
        {"aka", "Ha, uka?"},
        {"xayr", "Xayr, yaxshi dam ol!"}
    };

    string input;
    cout << "Chatbot bilan gaplashing! (Chiqish uchun 'xayr' yozing)" << endl;

    while (true) {
        cout << "Sen: ";
        getline(cin, input);

        if (input == "xayr") {
            cout << "Chatbot: " << chatbot[input] << endl;
            break;
        } else if (chatbot.find(input) != chatbot.end()) {
            cout << "Chatbot: " << chatbot[input] << endl;
        } else {
            cout << "Chatbot: Kechirasiz, tushunmadim. Boshqa so‘z yozing." << endl;
        }
    }

    return 0;
}
