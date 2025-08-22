# 🃏 Super Trunfo em C (Desafio Nível Novato)

Este projeto foi desenvolvido como parte da disciplina de **Análise e Desenvolvimento de Sistemas (ADS) - Estácio**.
O objetivo deste nível é criar a **base do jogo Super Trunfo de Cidades**, permitindo que o usuário cadastre **duas cartas** e, em seguida, visualize os dados inseridos.

---

## 🎯 Objetivos acadêmicos

- Fixar o aprendizado em **C** através de um exercício prático.
- Exercitar lógica de programação com **entrada e saída de dados**.
- Manipular diferentes tipos de variáveis: `char`, `int`, `float` e `string`.

---

## 🚀 Funcionalidades implementadas (Nível Novato)

- Cadastro de **duas cartas** com os seguintes atributos:

  - Estado (A–H)
  - Código da carta (ex: A01)
  - Nome da cidade
  - População
  - Área (km²)
  - PIB
  - Número de pontos turísticos

- Exibição dos dados das duas cartas cadastradas.

---

## 🛠️ Tecnologias utilizadas

- Linguagem **C**
- Compilador **GCC**
- Editor de código: Visual Studio Code / Dev-C++ / ou outro

---

## ▶️ Como executar o programa

### 🔹 Via terminal (Linux/MacOS ou Windows com MinGW)

1. Clone este repositório:

   ```bash
   git clone https://github.com/TascaBRX/Super_Trunfo_em_C.git
   ```

2. Acesse a pasta do projeto:

   ```bash
   cd Super_Trunfo_em_C
   ```

3. Compile o código com o GCC:

   ```bash
   gcc SuperTrunfo.c -o supertrunfo
   ```

4. Execute o programa:

   ```bash
   ./supertrunfo
   ```

No Windows (com MinGW ou Dev-C++), use:

```bash
gcc SuperTrunfo.c -o supertrunfo.exe
supertrunfo.exe
```

### 🔹 Usando o Visual Studio Code

1. Abra o **Visual Studio Code** e vá em **File > Open Folder** para abrir a pasta do projeto.
2. Instale a extensão **C/C++** da Microsoft (caso ainda não tenha).
3. Abra o arquivo `SuperTrunfo.c`.
4. Pressione **Ctrl+Shift+\`** para abrir o terminal integrado.
5. Compile com o comando:

   ```bash
   gcc SuperTrunfo.c -o supertrunfo
   ```

6. Execute o programa diretamente no terminal do VS Code:

   ```bash
   ./supertrunfo
   ```

No Windows:

```bash
gcc SuperTrunfo.c -o supertrunfo.exe
supertrunfo.exe
```

---

## 📚 Exemplo de uso

```bash
=====Cadastro da Carta 1=====
Digite o estado (A-H) da carta 1: A
Digite o código da carta 1 (ex: A01): A01
Digite o nome da cidade da carta 1: Cidade Alpha
Digite a população da cidade da carta 1: 120000
Digite a área da cidade da carta 1 (em km²): 450.5
Digite o PIB da cidade da carta 1: 15000
Digite o número de pontos turísticos da cidade da carta 1: 5
```
