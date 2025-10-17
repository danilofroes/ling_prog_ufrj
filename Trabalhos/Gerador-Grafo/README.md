# Gerador e Analisador de Grafos

Esse programa implementa uma estrutura de dados de grafo não-direcionado em C++, lendo sua definição em um arquivo de texto e permitindo que o usuário realize análises sobre ele.
Este é um trabalho foi desenvolvido para matéria [EEL670] Linguagens de Programação do Departamento de Engenharia Eletrônica e de Computação (DEL) da Universidade Federal do Rio de Janeiro (UFRJ).

## Funcionalidades

O programa oferece um menu com as seguintes opções:

1.  **Imprimir Matriz de Adjacências:** Exibe uma matriz que representa as conexões e os pesos entre os vértices do grafo.
2.  **Imprimir Densidade do Grafo:** Calcula e exibe a densidade do grafo, indicando se ele é denso ou esparso.
3.  **Imprimir Centralidade de Grau:** Lista todos os vértices em ordem decrescente da soma dos pesos de suas arestas.
4.  **Calcular Caminho Mínimo (Dijkstra):** Utiliza o algoritmo de Dijkstra para encontrar o caminho de menor custo entre dois vértices escolhidos pelo usuário.
5.  **Verificar Conexidade:** Utiliza uma Busca em Profundidade (DFS) para verificar se todos os vértices do grafo estão conectados.

## Tecnologias Utilizadas

* **Linguagem:** C++ (padrão C++11)
* **Compilador:** g++
* **Sistema de Build:** Make

## Como Compilar e Executar

> **Pré-requisitos:** É necessário ter o `g++` e o `make` instalados no seu sistema. 
> O programa foi preparado para rodar no Linux.

1.  **Navegue até o diretório do projeto** pelo terminal.

2.  **Compile o programa** utilizando o Makefile fornecido:
    ```bash
    make
    ```
    Isso irá compilar todos os arquivos fonte e gerar um executável chamado `programa_grafo`.

3.  **Execute o programa**, passando como argumento o caminho para o arquivo de texto que define o grafo:
    ```bash
    ./programa_grafo <caminho_para_o_arquivo.txt>
    ```
    **Exemplo:**
    ```bash
    ./programa_grafo meu_grafo.txt
    ```

4.  **Para limpar os arquivos gerados** (executável e arquivos objeto), execute:
    ```bash
    make clean
    ```

## Formato do Arquivo de Entrada

O arquivo de texto de entrada deve seguir um formato simples onde cada linha representa uma aresta do grafo.

* A estrutura de cada linha é: `NomeVertice1 NomeVertice2 Peso`
* Os nomes dos vértices não devem conter espaços.
* O peso deve ser um número (inteiro ou decimal), utilizando **ponto (.)** como separador decimal.

**Exemplo de arquivo `meu_grafo.txt`:**

```txt
Danilo Maria 2.2
Maria Clara 1.0
Clara Joao 3.1
Danilo Clara 1.2
```

## Autoria

**Autor:** Danilo Davi Gomes Fróes
**DRE:** 124026825
**Curso:** Engenharia Eletrônica e de Computação
**Matéria:** [EEL670] - Linguagens de Programação
**Professor:** Miguel Elias Mitre Campista