## README.md

# Caixa Eletrônico Simples em C

Este projeto simula um caixa eletrônico básico, desenvolvido em linguagem C, com o objetivo de praticar conceitos de modularização, manipulação de arquivos, funções e interação com o usuário via terminal.

---

## Funcionalidades

- **Login com conta e senha** (com bloqueio após três tentativas incorretas)
- **Consulta de saldo**
- **Saque**
- **Depósito**
- **Histórico de transações**
- **Menu interativo no terminal**

---

## Estrutura do Projeto

O código está organizado em módulos para facilitar a manutenção e a compreensão:

- `main.c` — Função principal, fluxo do programa e integração dos módulos
- `login_menu.c` / `login_menu.h` — Exibição do menu inicial e opções
- `saldo.c` / `saldo.h` — Consulta de saldo
- `saque.c` / `saque.h` — Operação de saque
- `deposito.c` / `deposito.h` — Operação de depósito
- `historico.c` / `historico.h` — Exibição do histórico de transações

---

## Como Compilar

Certifique-se de ter o GCC instalado. Para compilar todos os módulos, utilize o seguinte comando no terminal (assumindo que todos os arquivos estão na mesma pasta):

```bash
gcc main.c login_menu.c saldo.c deposito.c saque.c historico.c -o output/main.exe
```

Ou use a task já configurada no Visual Studio Code (`Ctrl+Shift+B`).

---

## Como Executar

Após a compilação, execute o programa pelo terminal:

```bash
./output/main.exe
```
ou, se estiver no Windows:
```bash
output\main.exe
```

---

## Uso

1. Insira a conta e a senha (padrão: conta `123456`, senha `1111`).
2. Escolha a operação desejada no menu:
    - [1] Ver saldo
    - [2] Sacar
    - [3] Depositar
    - [4] Histórico
    - [5] Sair

---

## Observações

- O projeto é didático e não utiliza armazenamento persistente (os dados são mantidos apenas durante a execução).
- O código foi modularizado para facilitar a leitura e manutenção.
- Em caso de dúvidas ou sugestões, abra uma issue no repositório.

---

## Licença

Este projeto está sob a licença MIT. Sinta-se livre para utilizar, modificar e compartilhar.
