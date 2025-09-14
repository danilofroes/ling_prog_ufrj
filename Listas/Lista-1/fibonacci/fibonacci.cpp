unsigned int calcularFibonacci(unsigned int indice) {
    if (indice == 1)
        return 0;

    else if (indice == 2)
        return 1;

    return calcularFibonacci(indice - 1) + calcularFibonacci(indice - 2);
}