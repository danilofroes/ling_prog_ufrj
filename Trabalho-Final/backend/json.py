import json

class ArquivoJson:
    @staticmethod
    def carregar_json(caminho_arquivo: str):
        with open(caminho_arquivo, 'r') as arquivo:
            dados = json.load(arquivo)

        return dados

    @staticmethod
    def salvar_json(dados: dict, caminho_arquivo: str):
        with open(caminho_arquivo, 'w') as arquivo:
            json.dump(dados, arquivo, ensure_ascii = False, indent = 4)