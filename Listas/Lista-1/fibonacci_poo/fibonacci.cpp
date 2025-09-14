class Fibonacci {
    private:
        unsigned int resultado;

        unsigned int computeFibonacci(unsigned int indice) {
            if (indice == 1)
                return 0;

            else if (indice == 2)
                return 1;

            return computeFibonacci(indice - 1) + computeFibonacci(indice - 2);
        }

    public:
        void setFibonacci(unsigned int indice) {
            resultado = computeFibonacci(indice);
        }

        unsigned int getFibonacci() { return resultado; }
};