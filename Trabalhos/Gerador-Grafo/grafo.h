// Arquivo com as declaracoes da classe Grafo

#ifndef GRAFO_H
#define GRAFO_H

#include <vector>
#include <string>
#include "vertice.h"
#include "aresta.h"

class Grafo {
    private:
        std::vector<Vertice*> vertices;
        std::vector<Aresta*> arestas;

        Vertice* criarVertice(const std::string& nome);
        Vertice* encontrarVertice(const std::string& nome) const;
        void dfs(int verticeId, std::vector<bool>& visitados) const;
        void limparGrafo();

    public:
        Grafo();
        ~Grafo();

        void carregarArquivo(const std::string& nomeArquivo);

        void imprimirMatrizAdjacencia() const;
        void imprimirDensidade() const;
        void imprimirCentralidadeGrau() const;
        void calcularCaminhoMinimoDijkstra() const;
        void verificarAcessibilidade() const;

        unsigned short getNumeroVertices() const;
};

#endif