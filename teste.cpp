#include <iostream>
#include <cstdlib> // para gerar números aleatórios


int main() {
    std::string nome, cpf;
    int idade;

    // Solicitar informações ao usuário
    std::cout << "Digite seu nome: ";
    std::getline(std::cin, nome);

    std::cout << "Digite sua idade: ";
    std::cin >> idade;
    std::cin.ignore(); // Limpar o caractere de nova linha deixado pelo std::cin

    std::cout << "Digite seu CPF: ";
    std::getline(std::cin, cpf);

    // Gerar nickname aleatório
    std::string nickname;
    int indiceAleatorio = rand() % nome.length(); // Obter um índice aleatório para o nome

    // Concatenar parte do nome com a idade para formar o nickname
    nickname = nome.substr(indiceAleatorio) + std::to_string(idade);

    // Imprimir o nickname
    std::cout << "Seu nickname aleatorio e: " << nickname << std::endl;

    return 0;
}