# Vendas de Cinema em C

Projeto desenvolvido para a Experiência Prática III da disciplina de Algoritmos e Pensamento Computacional. O programa registra vendas de ingressos para filmes durante uma semana e apresenta um relatório consolidado.

## Funcionalidades

- Registra as vendas de 5 filmes durante 7 dias;
- Armazena os dados em uma matriz;
- Calcula o total de ingressos por filme e por dia;
- Calcula o faturamento semanal de cada filme;
- Identifica o filme com maior faturamento;
- Valida preços e quantidades negativas;
- Exibe um relatório formatado no terminal.

## Conceitos aplicados

- Vetores e matrizes;
- Laços `for` e `do...while`;
- Estruturas condicionais `if`;
- Variáveis do tipo `int`, `float` e `char`;
- Formatação de saída com `printf`.

## Como executar

É necessário ter um compilador C instalado, como o GCC.

```cmd
gcc vendas_cinema.c -o vendas_cinema.exe
vendas_cinema.exe
```

Caso utilize o GCC instalado pelo MSYS2 no Windows, configure o PATH temporariamente:

```cmd
set PATH=C:\msys64\ucrt64\bin;%PATH%
gcc vendas_cinema.c -o vendas_cinema.exe
vendas_cinema.exe
```

## Desafio bônus

O programa identifica o filme com maior faturamento semanal a partir dos valores processados.
