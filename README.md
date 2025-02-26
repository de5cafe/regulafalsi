# regulafalsi

Script em C que realiza as operações do método da falsa posição (ou regula falsi) para qualquer equação polinomial.

## O QUE?!

O método da falsa posição, também conhecido como método da regula falsi, é um método numérico utilizado para encontrar a raiz de uma função. Ele é baseado na ideia de que, se uma função é contínua e tem uma raiz em um intervalo, então a função deve mudar de sinal em algum ponto dentro desse intervalo.

Este script realiza os cálculos e iterações até atingir o erro máximo ou o número de iterações definidas, automaticamente.

## Observações

- Adicione manualmente sua equação na função `f` no código, marcada com asterisco (*).

## Como Usar (sistemas UNIX)

1. Clone o repositório:
   ```bash
   git clone https://github.com/de5cafe/regulafalsi.git
   cd regulafalsi
   ```
2. Compile o código:
   ```bash
   gcc -o regulafalsi regulafalsi.c
    ```
3. Execute o script:
  ```bash
   ./regulafalsi
  ```
