#include <iostream>

int main() {
  std::string ope;
  float n1, n2;
  std::cout << "digite o primeiro número";
  std::cin >> n1;
  std::cout << "digite o segundo número";
  std::cin >> n2;
  std::cout << "digite a operação";
  std::cin >> ope;
  if (ope == "+")
    std::cout << "a soma entre " << n1 << "e " << n2 << "é " << n1 + n2;
  if (ope == "soma")
    std::cout << "a soma entre " << n1 << "e " << n2 << "é " << n1 + n2;
  if (ope == "-")
    std::cout << "a subtração entre " << n1 << "e " << n2 << "é " << n1 - n2;
  if (ope == "subtração")
    std::cout << "a subtração entre " << n1 << "e " << n2 << "é " << n1 - n2;
  if (ope == "*")
    std::cout << "a multiplicação entre " << n1 << "e " << n2 << "é " << n1 * n2;
  if (ope == "multiplicação")
    std::cout << "a multiplicação entre " << n1 << "e " << n2 << "é " << n1 * n2;
  if (ope == "divisão")
    std::cout << "a divisão entre " << n1 << "e " << n2 << "é " << n1 / n2;
  if (ope == "/")
    std::cout << "a divisão entre " << n1 << "e " << n2 << "é " << n1 / n2;
}