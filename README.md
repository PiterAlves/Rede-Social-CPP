# 🌐 Rede Social em C++ (Terminal)

Uma **rede social básica** desenvolvida em **C++ orientado a objetos**, executada via **terminal**.  
O projeto permite que usuários **cadastrem seus perfis**, **adicionem amigos** e **façam publicações** tanto de **texto** quanto de **imagens (via URL)**.

---

## 🚀 Funcionalidades

- 👤 **Cadastro de usuário:** criação de perfis com nome, idade e outras informações básicas.  
- 🤝 **Sistema de amizades:** adicione e visualize amigos.  
- 📝 **Publicações de texto:** compartilhe mensagens com seus amigos.  
- 🖼️ **Publicações com imagem:** publique posts com URL de imagem.  
- 💬 **Feed de publicações:** visualize postagens feitas pelos usuários.  
- 🧭 **Interface via terminal:** toda a interação ocorre diretamente pelo console.  

---

## 🧩 Estrutura e Paradigma

O projeto segue o paradigma de **Programação Orientada a Objetos (POO)**, com classes que representam os principais elementos da rede social.

### Principais classes:
- `Usuario` → Armazena dados do perfil e lista de amigos.  
- `Publicacao` → Classe base para diferentes tipos de publicações.  
- `PublicacaoTexto` → Especialização para posts de texto.  
- `PublicacaoImagem` → Especialização para posts com URL de imagem.  
- `RedeSocial` → Gerencia os usuários, conexões e o feed.  

---

## 🛠️ Tecnologias utilizadas

- **Linguagem:** C++  
- **Paradigma:** Programação Orientada a Objetos  
- **Execução:** Linha de comando / Terminal  
- **Compilador sugerido:** `g++`  

---

## ▶️ Como executar

1. **Clone o repositório**
   ```bash
   git clone https://github.com/PiterAlves/Rede-Social-CPP.git
   ```

2. **Acesse o diretório do projeto**
   ```bash
   cd Rede-Social-CPP
   ```

3. **Compile o projeto**
   ```bash
   g++ -std=c++17 -o rede_social main.cpp
   ```

4. **Execute**
   ```bash
   ./rede_social
   ```

---

## 📁 Estrutura de pastas (exemplo)

```
📦 Rede-Social-CPP
 ┣ 📜 main.cpp
 ┣ 📂 include
 ┃ ┣ usuario.hpp
 ┃ ┣ publicacao.hpp
 ┃ ┣ publicacao_texto.hpp
 ┃ ┗ publicacao_imagem.hpp
 ┣ 📂 src
 ┃ ┣ usuario.cpp
 ┃ ┣ publicacao.cpp
 ┃ ┣ publicacao_texto.cpp
 ┃ ┗ publicacao_imagem.cpp
 ┗ 📜 README.md
```

---

## 💡 Possíveis melhorias

- Sistema de login e autenticação.  
- Salvamento de dados em arquivo (persistência).  
- Interface gráfica (futura integração com Qt ou SFML).  
- Curtidas e comentários em publicações.  

---

## 🧑‍💻 Autor

**Piter Alves**  
📅 Projeto criado em 2025  
📫 Contato: [piteralves.dev@gmail.com](mailto:piteralves.dev@gmail.com)  
🌐 GitHub: [github.com/PiterAlves](https://github.com/PiterAlves)

---

## 📝 Licença

Este projeto é de código aberto e está sob a licença **MIT** — sinta-se à vontade para usar, estudar e modificar.

---

✨ _“Feito com C++ e muita dedicação!”_
