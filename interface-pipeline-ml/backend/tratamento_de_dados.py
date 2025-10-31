import pandas as pd
from pandas.api.types import is_numeric_dtype, is_object_dtype
from sklearn.model_selection import train_test_split, KFold, StratifiedKFold

class TratamentoDados:
    def __init__(self, path_dataset: str, coluna_target:str):
        self.path_dataset = path_dataset

        self.y_col = coluna_target
        self.X_cols = None

        self.cat_cols = None
        self.num_cols = None

        self.df = None
        self.X = None
        self.y = None

        self.num_classes = None

    def carregar_dados(self):
        self.df = pd.read_csv(self.path_dataset)

        self.X_cols = self.df.drop(self.y_col, axis = 1).colums.to_list()

        self.X = self.df[self.X_cols]
        self.y = self.df[self.y_col]

        linhas_nulas = self.df.isna().any(axis = 1)

        if linhas_nulas is not None:
            df_novo = self.df[~linhas_nulas]
            self.df = df_novo

        self.num_classes = self.y.nunique()

        for col in self.X.colums:
            if is_numeric_dtype(self.X[col]):
                self.num_cols.append(col)
                
            elif is_object_dtype(self.X[col]):
                self.cat_cols.append(col)

        dict_retorno = {
            "X" : self.X,
            "y" : self.y,
            "X_cols" : self.X_cols,
            "y_cols" : self.y_cols,
            "cat_cols" : self.cat_cols,
            "num_cols" : self.num_cols,
            "num_classes" : self.num_classes
        }

        return dict_retorno
    
    def divisao_holdout(self, tamanho_teste: float = 0.3, divisao_estratificada: bool = False, random_state: int = 42):
        X_treino, X_teste, y_treino, y_teste =  train_test_split(self.X,
                                                                 self.y,
                                                                 test_size=tamanho_teste,
                                                                 stratify=divisao_estratificada,
                                                                 random_state=random_state)
        
        X_treino = X_treino.reset_index(drop=True)
        X_teste = X_teste.reset_index(drop = True)
        y_treino = y_treino.reset_index(drop = True)
        y_teste = y_teste.reset_index(drop = True)

        dict_retorno = {
            "X_treino" : X_treino,
            "X_teste" : X_teste,
            "y_treino" : y_treino,
            "y_teste" : y_teste
        }

        return dict_retorno
    
class PreProcessamentoDados:
    

