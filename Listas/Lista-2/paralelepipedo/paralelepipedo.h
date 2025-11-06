class Paralelepipedo {
    public:
        Paralelepipedo(double, double, double);

        void setX(double);
        void setY(double);
        void setZ(double);

        double getVolume();
        
    private:
        double x;
		double y;
		double z;

        double checarValor(double, const char*);
        double computeVolume();
};