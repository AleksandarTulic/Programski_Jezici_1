#pragma once

class Vreme{
    private:
        int hh;
        int mm;
        int ss;
        int nnn;
    public:
        Vreme(int, int, int, int);
        friend bool operator<(Vreme, Vreme);
        bool operator==(Vreme);
        Vreme operator++(int);
        operator long();
        friend std::ostream& operator<<(std::ostream&, Vreme);
        friend std::istream& operator>>(std::istream&, Vreme);
};
