#include <iostream>
using namespace std;

int main() {
    char operacao;
    float num1, num2;

    cout << "Digite a operação (+, -, *, /): ";
    cin >> operacao;
    cout << "Digite dois números: ";
    cin >> num1 >> num2;

    switch(operacao) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Divisão por zero não é permitida.";
            break;
        default:
            cout << "Operação inválida.";
            break;
    }

    return 0;
}