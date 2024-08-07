#ifndef POLY_H
#define POLY_H

#include <iostream>

class Poly
{
    private:
    int grau;
    double *a;

    public:
        //Construtor default
        Poly();
        // Construtor por copia
        Poly(const Poly &P);
        // Construtor por movimento
        Poly(Poly &&P);
        // Construtor por especifico
        explicit Poly(int grau_p);
        // destrutor
        ~Poly();
        // operador de atribuição por copia
        Poly &operator=(const Poly &P);
        // operador de atribuição por movimento
        Poly &operator=(Poly &&P);
        // metodo de consulta do grau
        int getGrau() const;
        // metodo de consulta do coef
        double getCoef(int posicao) const;
        // metodo de alterar o coef
        void setCoef(int posicao, double new_coef);
        // sobrecarga do operador []
        double operator[](int posicao) const;
        // metodo para redefinir o grau e os coeficientes
        void recriar(int new_grau);
        // sobrecarga do operador ==
        bool operator==(const Poly &P) const;
        // sobrecarga do operador !=
        bool operator!=(const Poly &P) const;
        // metodo de consulta empty
        bool empty() const;
        // metodo de consulta isZero
        bool isZero() const;
        // metodo de consulta getValor
        double getValor(const double x) const;
        // sobrecarga do operador ()
        double operator()(double x) const;
        // output de dados
        friend std::ostream &operator<<(std::ostream &X, const Poly &P);
        // input de dados
        friend std::istream &operator>>(std::istream &X, const Poly &P);
        // metodo para escrever um poly em arquivo
        bool salvar(const std::string &arquivo) const;
        // metodo pra ler arquivo
        bool ler(const std::string &arquivo);
        // metodo inverter sinal
        Poly operator-()const;
        // soma de poly
        Poly operator+(const Poly &P)const;
        // subtração de poly
        Poly operator-(const Poly &P)const;
        // multiplicação de poly
        Poly operator*(const Poly &P)const;

};
#endif // POLY_H
