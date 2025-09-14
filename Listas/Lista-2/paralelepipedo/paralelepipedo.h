class Paralelepipedo {
    private:
        double x;
		double y;
		double z;

        double computeVolume();

    public:
        Paralelepipedo(double, double, double);

        void setX(double);
        void setY(double);
        void setZ(double);

        double getVolume();
};