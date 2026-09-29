# 📊 Processador de Números Inteiros em C

Este projeto consiste em um programa desenvolvido em C que processa uma sequência de números inteiros fornecidos pelo usuário em tempo real. O programa encerra a leitura ao receber o valor `0` (zero) e exibe estatísticas básicas sobre os dados inseridos.

---

## 📌 Enunciado da Atividade

Faça um programa que receba números inteiros digitados pelo usuário até que o mesmo digite zero. Ao final mostre:
- O **maior** número digitado;
- O **menor** número digitado;
- A **soma** de todos os números digitados (desconsiderando o zero de parada).

> **Observações:**
> 1. **Otimização de Memória:** Não é permitido armazenar os números em arrays/vetores. Deve-se manter gravado apenas o menor valor, o maior valor e a soma acumulada.
> 2. **Intervalo do tipo `int`:** O programa considera o limite padrão de inteiros sinalizados (`-2.147.483.647` a `2.147.483.647`).

---

## 🚀 Como Funciona

1. O usuário digita números inteiros sucessivamente.
2. Cada número é processado imediatamente para atualizar o menor valor, o maior valor e a soma total.
3. Ao digitar `0`, o loop é interrompido.
4. As estatísticas finais são exibidas na tela.

---

## 💻 Exemplo de Execução

```text
Digite um número inteiro (0 para sair): 15
Digite um número inteiro (0 para sair): -3
Digite um número inteiro (0 para sair): 42
Digite um número inteiro (0 para sair): 8
Digite um número inteiro (0 para sair): 0

--- Resultados ---
Maior número digitado: 42
Menor número digitado: -3
Soma dos números: 62