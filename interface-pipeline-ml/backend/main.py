'''
    Programa para automação e experimentação em pipelines de problemas de classificação de Machine Learning

    Autor: Danilo Davi Gomes Fróes
    Matéria: Linguagens de Programação [EEL670]
    Professor: Miguel Elias Mitre Campista
'''

from .json import ArquivoJson as json
from .tratamento_de_dados import TratamentoDados

def main():
    dados = json.carregar_json("dados_entrada.json")

    tratamento = TratamentoDados(dados["path_dataset"], dados["target"])
    dados_tratados = tratamento.tratar_dados()
    
    if dados["tipo_divisao"] == "holdout":
        divisao = tratamento.divisao_holdout(
            tamanho_teste = dados["tamanho_teste"],
            divisao_estratificada = dados["divisao_estratificada"],
            random_state = dados["random_state"]
        )

    elif dados["tipo_divisao"] == "kfold":
        divisao = tratamento.divisao_kfold(
            n_splits = dados["n_splits"],
            shuffle = dados["shuffle"],
            random_state = dados["random_state"]
        )

if __name__ == "__main__":
    main()