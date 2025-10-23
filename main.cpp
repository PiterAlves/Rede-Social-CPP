#include <iostream>
#include <ctime>
#include <thread>  
#include <chrono>
#include "piter-usuario.h"
#include "piter-redeSocial.h"
#include "raphael-publicacao.h"
#include "raphael-publicacao_imagem.h"
#include "raphael-publicacao_texto.h"

int main() {
    RedeSocial insta = RedeSocial();
    string nome, apelido, bio;
    int menu = 0;

    insta.registrar_usuario("Alice", "a");
    insta.registrar_usuario("Bob", "b");
    
    Usuario u2 = insta.encontrar_usuario("Alice");
    u2.setBio("Opa");

    Usuario u3 = insta.encontrar_usuario("Bob");
    u3.setBio("Oi");

    cout << "----------  Bem Vindo(a) ao  ----------" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << endl << "Realize o seu cadastro!" << endl;
    cout << "Digite seu nome: ";
    getline(cin, nome);
    while(nome == u2.getNome() || nome == u3.getNome()) {
        cout << "Já existe um Usuario com esse nome! Escolha outro." << endl;
        cout << "Digite seu nome: ";
        getline(cin, nome);
    }
    cout << "Digite seu apelido: ";
    getline(cin, apelido);
    cout << "Digite uma bio para seu perfil: ";
    getline(cin, bio);
    cout << "Cadastro realizado!" << endl;
    
    insta.registrar_usuario(nome, apelido);
    Usuario u1 = insta.encontrar_usuario(nome);
    u1.setBio(bio);
    u1.exibir_perfil();

    //Os objetos fazem as interações pedidas no enunciado
    this_thread::sleep_for(chrono::seconds(1));
    cout << endl << "Alice fez uma Publicação!" << endl;
    u2.criar_publicacao(&u2, "texto", "Teste", " ");
    this_thread::sleep_for(chrono::seconds(1));
    cout << endl << "Alice fez uma Publicação!" << endl;
    u2.criar_publicacao(&u2, "imagem", "Publicação de Imagem", "url_qualquer");
    this_thread::sleep_for(chrono::seconds(1));
    cout << endl << "Bob fez uma Publicação!" << endl;
    u3.criar_publicacao(&u3, "texto", "Teste", " ");
    this_thread::sleep_for(chrono::seconds(1));
    cout << endl << "Bob fez uma Publicação!" << endl;
    u3.criar_publicacao(&u3, "imagem", "Publicação de Imagem", "url_qualquer");
    cout << endl;
    u2.adicionar_amigo(&u3);
    u3.adicionar_amigo(&u2);
    u3.adicionar_amigo(&u1);

    while(menu != 6) {
        this_thread::sleep_for(chrono::seconds(1));
        string nome2, tipo, conteudo, url_imagem;
        cout << endl << "---------- MENU ----------" << endl;
        cout << endl << "1: Exibir perfil" << endl << "2: Procurar usuario" << endl << "3: Adicionar amigo" << endl << "4: Remover amigo";
        cout << endl << "5: Adicionar publicação" << endl << "6: Sair" << endl << "Digite um número para seguir: ";
        cin >> menu;
        cin.ignore();
        if(menu == 1) {
            u1.exibir_perfil();
        } else if(menu == 2) {
            cout << "Digite o nome do usuario que deseja procurar: ";
            getline(cin, nome2);
            cout << endl;
            if(nome2 == u2.getNome()) 
                u2.exibir_perfil();
            if(nome2 == u3.getNome()) 
                u3.exibir_perfil();
            else {
                cout << "Esse usuario não existe!" << endl;
            }
        } else if(menu == 3) {
            cout << "Digite o nome do usuario que deseja adicionar: ";
            getline(cin, nome2);
            cout << endl;
            if(nome2 == u2.getNome()) 
                u1.adicionar_amigo(&u2);
            else if(nome2 == u3.getNome())
                u1.adicionar_amigo(&u3);
            else {
                cout << "Não foi possivel adicionar " << nome2 << endl;
            }
        } else if(menu == 4) {
            cout << "Digite o nome do usuario  que deseja remover: ";
            getline(cin, nome2);
            cout << endl;
            if(nome2 == u2.getNome()) 
                u1.remover_amigo(&u2);
            else if(nome2 == u3.getNome())
                u1.remover_amigo(&u3);
            else {
                cout << "Não foi possivel remover " << nome2 << endl;
            } 
        } else if(menu == 5) {
            cout << endl << "Digite o tipo de publicação que quer fazer (texto, foto): ";
            getline(cin, tipo);
            if(tipo == "Texto" || tipo == "texto") {
                cout << "Digite o texto: ";
                getline(cin, conteudo);
                u1.criar_publicacao(&u1, tipo, conteudo, " ");
            } else {
                cout << "Digite a URL da imagem: ";
                getline(cin, url_imagem);
                u1.criar_publicacao(&u1, tipo, "Publicação de Imagem", url_imagem);
            }
        } else if(menu == 6) {
            cout << "SAINDO...";
        }
    }
    
    return 0;
}