# 🚀 Dominando a Linguagem C: Atividades de Ensino

Bem-vindo ao repositório de atividades práticas de **Linguagem C**. Este projeto foi estruturado para servir como um guia de estudos progressivo, abrangendo desde a sintaxe básica até à manipulação avançada de memória e estruturas de dados.

## 📌 Objetivo
O objetivo deste repositório é consolidar o conhecimento teórico através da prática, com exercícios que estimulam a lógica de programação, a gestão eficiente de recursos e as boas práticas de desenvolvimento em C.

---

## 🛠️ Pré-requisitos

Para compilar e correr os exercícios, necessita de um compilador C instalado. O mais comum é o **GCC** (GNU Compiler Collection).

* **Linux (Ubuntu/Debian):** `sudo apt install build-essential`
* **macOS:** `xcode-select --install` ou via Homebrew `brew install gcc`
* **Windows:** Recomenda-se o uso do [MinGW-w64](https://www.mingw-w64.org/), WSL2 ou o compilador integrado no Visual Studio.

---

## 📂 Estrutura do Repositório

O conteúdo está organizado por módulos temáticos:

| Nível | Tópico | Conteúdo Abrangido |
| :--- | :--- | :--- |
| **01** | **Fundamentos** | Variáveis, tipos primitivos (`int`, `float`, `char`), entrada e saída (`printf`, `scanf`). |
| **02** | **Controlo de Fluxo** | Estruturas de decisão (`if/else`, `switch`) e ciclos de repetição (`for`, `while`, `do-while`). |
| **03** | **Vetores e Strings** | Arrays unidimensionais, matrizes e manipulação de cadeias de caracteres (`string.h`). |
| **04** | **Funções** | Modularização, protótipos, passagem de parâmetros por valor e âmbito de variáveis. |
| **05** | **Ponteiros** | Endereços de memória, aritmética de ponteiros e passagem por referência. |
| **06** | **Gestão de Memória** | Alocação dinâmica utilizando `malloc`, `calloc`, `realloc` e `free`. |
| **07** | **Estruturas de Dados** | `struct`, `union`, `typedef` e introdução a listas ligadas. |

---

## 🚀 Como Utilizar

1.  **Clone o repositório:**
    ```bash
    git clone https://github.com/seu-utilizador/atividades-c.git
    ```

2.  **Navegue até à pasta do exercício pretendido:**
    ```bash
    cd atividades-c/modulo-01
    ```

3.  **Compile o ficheiro `.c`:**
    ```bash
    gcc exercicio.c -o programa
    ```

4.  **Execute o programa:**
    ```bash
    ./programa
    ```

---

## 📝 Exemplo de Atividade

> **Desafio de Ponteiros:**
> Implemente uma função `swap(int *a, int *b)` que troque os valores de duas variáveis inteiras na função principal (main) utilizando apenas ponteiros.

---

## 🤝 Contribuições

Sinta-se à vontade para contribuir com novos exercícios ou correções:
1. Faça um **Fork** do repositório.
2. Crie uma branch para a sua alteração (`git checkout -b feature/novo-exercicio`).
3. Submeta um **Pull Request**.

---

## 📄 Licença
Este projeto está licenciado sob a licença MIT. Consulte o ficheiro `LICENSE` para mais detalhes.

---
*“A linguagem C é a base de quase toda a computação moderna. Dominá-la é compreender como a máquina realmente pensa.”*
