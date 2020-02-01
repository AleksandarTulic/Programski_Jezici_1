#include <iostream>

using namespace std;

class Vector{
private:
    int low, high;
    int length;
    double *a;
public:
    Vector() : low(0), high(0), length(1), a(NULL){
    }

    Vector(int up) : low(1), high(up), length(1),a(new double[up]){
    }

    Vector(int down, int up) : low(down), high(up), length(1),a(new double[up-down+1]){
    }

    Vector(Vector &b) : low(b.low), high(b.high), length(b.length),a(new double[b.high-b.low+1]){
        copy(b.a + b.low, b.a + b.high, a);
    }

    ~Vector(){
        delete [] a;
    }

    bool isEmpty(){
        if ( this->length == 1 ){
            return true;
        }

        return false;
    }

    bool isFull(){
        if ( this->length == this->high - this->low + 1 ){
            return true;
        }

        return false;
    }

    void push(double num){
        if ( !isFull() ){
            this->a[this->length] = num;
            (*this).length++;
        }
    }

    friend Vector operator* (const Vector &a, const Vector &b){
        Vector c(a.high-a.low+1);
        for (int i=a.low;i<=a.low+a.length-2;i++){
            double sum = 0;
            for (int j=b.low;j<=b.low+b.length-2;j++){
                sum+=a.a[i]*b.a[j];
            }
            c.push(sum);
        }

        return c;
    }

    double operator[](int pos){
        try{
            return pos < this->low || pos > this->high ? throw "Niste u range-u dinamickog niza!!!" : this->a[pos];
        }
        catch(const char *b){
            cout<<b<<endl;
        }
    }

    friend ostream &operator<<(ostream &os, const Vector &a){
        os<<"Ispis Vektora: "<<endl;
        for (int i=a.low;i<=a.low+a.length-2;i++){
            os<<a.a[i]<<" "<<i<<endl;
        }

        return os;
    }
};

int main () {
    Vector a(10);
    a.push(13.2);
    a.push(-1.2);
    a.push(7.2);
    Vector b(4);
    b.push(2);
    b.push(3);
    Vector c;
    c = a * b;
    cout<<c;
    cout<<endl;
    cout<<c[1213]<<endl;
    return 0;
}
