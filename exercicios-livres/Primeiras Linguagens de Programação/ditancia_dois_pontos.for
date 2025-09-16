PROGRAM distancia_entre_dois_pontos
    IMPLICIT NONE

    DOUBLE PRECISION :: x1, x2, y1, y2, resultado

    PRINT *, "Insira o valor da primeira coordenada com apenas numeros (x, y): "
    READ  (*,*) x1, y1

    PRINT *, "Agora insira da mesma forma o valor da segunda coordenada: "
    READ (*,*) x2, y2

    resultado = SQRT((x2 - x1)**2 + (y2 - y1)**2)

    PRINT *, "A distancia entre os pontos (", x1, ", ", y1, ") e (", x2, ", ", y2, ") eh igual a ", resultado

END PROGRAM distancia_entre_dois_pontos