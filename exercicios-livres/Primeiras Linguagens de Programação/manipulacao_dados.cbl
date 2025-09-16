       IDENTIFICATION DIVISION.
       PROGRAM-ID. RELATORIO-FUNCIONARIO.
       AUTHOR. Danilo Froes.

       ENVIRONMENT DIVISION.
       CONFIGURATION SECTION.
       SPECIAL-NAMES.
           DECIMAL-POINT IS COMMA.

       DATA DIVISION.
       WORKING-STORAGE SECTION.

       01 WS-FUNCIONARIO.
          05 FUNC-ID       PIC 9(04)  VALUE 1812.
          05 FUNC-NOME     PIC X(40)  VALUE "Danilo Froes".
          05 FUNC-CARGO PIC X(40) VALUE "Eng. de Eletronica e Comp.".
          05 FUNC-SALARIO  PIC 9(5)V99 VALUE 12903.00.
       01 WS-SALARIO-FORMATADO.
          05 FILLER             PIC X(3) VALUE "R$ ".
          05 WS-SALARIO-EDITADO PIC ZZZ.ZZ9,99.

       PROCEDURE DIVISION.
           PERFORM EXIBE-RELATORIO.
           STOP RUN.

       EXIBE-RELATORIO.
           DISPLAY "-------- RELATORIO DE DADOS DO FUNCIONARIO -------".
           DISPLAY "ID do Funcionario..: " FUNC-ID.
           DISPLAY "Nome...............: " FUNC-NOME.
           DISPLAY "Cargo..............: " FUNC-CARGO.
           MOVE FUNC-SALARIO TO WS-SALARIO-EDITADO.
           DISPLAY "Salario............: " WS-SALARIO-FORMATADO.
           DISPLAY "--------------------------------------------------".