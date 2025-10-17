// Arquivo com as implementacoes da classe Grafo

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
#include "grafo.h"
#include "terminal.h"

using namespace std;

Grafo::Grafo() {}

Grafo::~Grafo() { 
    limparGrafo(); 
}

void Grafo::limparGrafo() {
    for (Aresta* aresta : arestas) {
        delete aresta;
    }

    for (Vertice* vertice : vertices) {
        delete vertice;
    }

    arestas.clear();
    vertices.clear();
}

Vertice* Grafo::encontrarVertice(const string& nome) const {
    for (Vertice* vertice : vertices) {
        if (vertice->getNome() == nome) {
            return vertice;
        }
    }

    return nullptr;
}

Vertice* Grafo::criarVertice(const string& nome) {
    for (Vertice* vertice : vertices) {
        if (vertice->getNome() == nome) {
            return vertice;
        }
    }

    unsigned short novoId = vertices.size();
    Vertice* novoVertice = new Vertice(novoId, nome);
    vertices.push_back(novoVertice);

    return novoVertice;
}

void Grafo::carregarArquivo(const string& nomeArquivo) {
    this->limparGrafo();

    ifstream arquivo(nomeArquivo);

    if (!arquivo.is_open()) {
        cerr << "\e[1;31mErro ao abrir o arquivo: " << nomeArquivo << "\e[0m" << endl;
        return;
    }

    string linha, nomeOrigem, nomeDestino;
    double peso;

    while (getline(arquivo, linha)) {
        stringstream ss(linha);

        if (ss >> nomeOrigem >> nomeDestino >> peso) {
            Vertice* origem = criarVertice(nomeOrigem);
            Vertice* destino = criarVertice(nomeDestino);

            Aresta* novaAresta = new Aresta(origem, destino, peso);
            arestas.push_back(novaAresta);
        } 
        
        else {
            cerr << "\e[1;31mErro: Linha invalida no arquivo: " << linha << "\e[0m" << endl;
        }
    }

    arquivo.close();

    cout << "Grafo carregado com sucesso a partir do arquivo: " << nomeArquivo << endl;
    cout << "Numero de vertices: " << vertices.size() << endl;
    cout << "Numero de arestas: " << arestas.size() << endl;
}

void Grafo::imprimirMatrizAdjacencia() const {
    unsigned short numVertices = this->vertices.size();

    if (numVertices == 0) {
        cout << "\e[1;31mO grafo esta vazio.\e[0m" << endl;
        return;
    }

    vector<vector<double> > matrizAdjacencia(numVertices, vector<double>(numVertices, 0.0));

    for (const Aresta* aresta : this->arestas) {
        unsigned short origemId = aresta->getOrigem()->getId();
        unsigned short destinoId = aresta->getDestino()->getId();
        double peso = aresta->getPeso();

        matrizAdjacencia[origemId][destinoId] = peso;
        matrizAdjacencia[destinoId][origemId] = peso;
    }

    centralizarTitulo("Matriz de Adjacencia do Grafo");
    cout << setw(10) << " ";

    for (const Vertice* vertice : this->vertices) {
        cout << setw(10) << vertice->getNome();
    }

    cout << endl;

    for (unsigned short i = 0; i < numVertices; i++) {
        cout << setw(10) << this->vertices[i]->getNome();

        for (unsigned short j = 0; j < numVertices; j++) {
            cout << setw(10) << fixed << setprecision(1) << matrizAdjacencia[i][j];
        }

        cout << endl;
    }
}

void Grafo::imprimirDensidade() const {
    unsigned short numVertices = this->vertices.size();
    unsigned short numArestas = this->arestas.size();

    if (numVertices < 2) {
        cout << "\e[1;31mO grafo deve ter pelo menos dois vertices para calcular a densidade.\e[0m" << endl;
        return;
    }

    double maxArestas = (double)numVertices * (numVertices - 1) / 2.0;

    double densidade = (double)numArestas / maxArestas;

    centralizarTitulo("Densidade do Grafo");
    cout << "Numero de vertices: " << numVertices << endl;
    cout << "Numero de arestas: " << numArestas << endl;
    cout << "Densidade: " << fixed << setprecision(4) << densidade << endl;

    if (densidade > 0.6) {
        cout << "O grafo e considerado denso." << endl;
    }

    else {
        cout << "O grafo e considerado esparso." << endl;
    }
}

void Grafo::imprimirCentralidadeGrau() const {
    if (this->vertices.empty()) {
        cout << "O grafo esta vazio." << endl;
        return;
    }

    map<string, double> centralidadeMap;

    for (const Vertice* vertice : this->vertices) {
        centralidadeMap[vertice->getNome()] = 0.0;
    }

    for (const Aresta* aresta : this->arestas) {
        centralidadeMap[aresta->getOrigem()->getNome()] += aresta->getPeso();
        centralidadeMap[aresta->getDestino()->getNome()] += aresta->getPeso();
    }

    vector<pair<string, double> > centralidades(centralidadeMap.begin(), centralidadeMap.end());

    sort(centralidades.begin(), centralidades.end(), [](const pair<string, double>& a, const pair<string, double>& b) { 
        return a.second > b.second;
    });

    centralizarTitulo("Centralidade de Grau dos Vertices");
    cout << left << setw(15) << "Vertice" << "Centralidade" << endl;

    for (const auto& par : centralidades) {
        cout << left << setw(15) << par.first << fixed << setprecision(2) << par.second << endl;
    }
}

void Grafo::calcularCaminhoMinimoDijkstra() const {
    if (vertices.size() < 2) {
        cout << "Dijkstra requer pelo menos 2 vertices no grafo." << endl;
        return;
    }

    string nomeOrigem, nomeDestino;
    cout << "\nVertices disponiveis: ";
    for(const auto* v : vertices) cout << v->getNome() << " ";
    cout << "\nDigite o nome do vertice de origem: ";
    cin >> nomeOrigem;
    cout << "Digite o nome do vertice de destino: ";
    cin >> nomeDestino;

    Vertice* verticeOrigem = encontrarVertice(nomeOrigem);
    Vertice* verticeDestino = encontrarVertice(nomeDestino);

    if (!verticeOrigem || !verticeDestino) {
        cout << "\e[1;31mErro: Vertice de origem ou destino invalido.\e[0m" << endl;
        return;
    }

    int numVertices = vertices.size();
    vector<double> distancias(numVertices, numeric_limits<double>::infinity());
    vector<int> predecessores(numVertices, -1);
    vector<bool> visitados(numVertices, false);

    int idOrigem = verticeOrigem->getId();
    distancias[idOrigem] = 0.0;

    for (int i = 0; i < numVertices; ++i) {
        int u = -1;
        double min_dist = numeric_limits<double>::infinity();

        for (int j = 0; j < numVertices; ++j) {
            if (!visitados[j] && distancias[j] < min_dist) {
                min_dist = distancias[j];
                u = j;
            }
        }

        if (u == -1 || distancias[u] == numeric_limits<double>::infinity()) {
            break;
        }

        visitados[u] = true;

        for (const auto* aresta : arestas) {
            int v = -1;

            if (aresta->getOrigem()->getId() == u) v = aresta->getDestino()->getId();
            if (aresta->getDestino()->getId() == u) v = aresta->getOrigem()->getId();
            
            if (v != -1 && !visitados[v]) {
                if (distancias[u] + aresta->getPeso() < distancias[v]) {
                    distancias[v] = distancias[u] + aresta->getPeso();
                    predecessores[v] = u;
                }
            }
        }
    }

    centralizarTitulo("Resultado do Algoritmo de Dijkstra");

    int idDestino = verticeDestino->getId();

    if (distancias[idDestino] == numeric_limits<double>::infinity()) {
        cout << "\e[1;31mNao existe caminho entre " << nomeOrigem << " e " << nomeDestino << ".\e[0m" << endl;
    } 
    
    else {
        cout << "Custo total do caminho: " << fixed << setprecision(2) << distancias[idDestino] << endl;
        cout << "Caminho: ";

        vector<string> caminho;
        int atual = idDestino;

        while(atual != -1) {
            caminho.push_back(vertices[atual]->getNome());
            atual = predecessores[atual];
        }

        reverse(caminho.begin(), caminho.end());

        for (size_t i = 0; i < caminho.size(); ++i) {
            cout << caminho[i] << (i == caminho.size() - 1 ? "" : " -> ");
        }
        cout << endl;
    }
}

void Grafo::verificarAcessibilidade() const {
    if (vertices.empty()) {
        centralizarTitulo("Verificacao de Conexidade");
        cout << "\e[1;31mO grafo esta vazio, portanto nao e conexo.\e[0m" << endl;
        return;
    }

    int numVertices = vertices.size();
    vector<bool> visitados(numVertices, false);

    dfs(0, visitados);

    bool todosVisitados = true;
    for (unsigned short i = 0; i < numVertices; ++i) {
        if (!visitados[i]) {
            todosVisitados = false;
            break;
        }
    }

    centralizarTitulo("Verificacao de Conexidade");

    if (todosVisitados) {
        cout << "O grafo e conexo. Todos os vertices sao acessiveis uns aos outros." << endl;
    } 
    
    else {
        cout << "O grafo nao e conexo. Existem vertices isolados ou componentes separados." << endl;
    }
}

void Grafo::dfs(int verticeId, vector<bool>& visitados) const {
    visitados[verticeId] = true;

    for (const Aresta* aresta : this->arestas) {
        int vizinhoId = -1;

        if (aresta->getOrigem()->getId() == verticeId) {
            vizinhoId = aresta->getDestino()->getId();
        } 
        
        else if (aresta->getDestino()->getId() == verticeId) {
            vizinhoId = aresta->getOrigem()->getId();
        }

        if (vizinhoId != -1 && !visitados[vizinhoId]) {
            dfs(vizinhoId, visitados);
        }
    }
}

unsigned short Grafo::getNumeroVertices() const {
    return vertices.size();
}