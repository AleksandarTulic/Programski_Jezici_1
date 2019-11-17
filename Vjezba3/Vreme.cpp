#include <iostream>
#include "Vreme.h"

Vreme::Vreme(int a = 0, int b = 0, int c = 0, int d = 0){
    hh = a;
    mm = b;
    ss = c;
    nnn = d;
}

bool operator<(Vreme a, Vreme b){
    if ( a.hh == b.hh ){
        if ( a.mm == b.mm ){
            if ( a.ss == b.ss ){
                if ( a.nnn <= b.nnn ){
                    return false;
                }else{
                    return true;
                }
            }else{
                if ( a.ss > b.ss ){
                    return true;
                }else{
                    return false;
                }
            }
        }else{
            if ( a.mm > b.mm ){
                return true;
            }else{
                return false;
            }
        }
    }else{
        if ( a.hh > b.hh ){
            return true;
        }else{
            return false;
        }
    }
}

bool Vreme::operator==(Vreme a){
    if ( a.hh == this->hh && this->mm == a.mm && a.nnn == this->nnn && a.ss == this->ss ){
        return true;
    }else{
        return false;
    }
}

/*

ako bi smo u Vreme.h definisali
friend bool operator==(Vreme a, Vreme b);

bool operator==(Vreme a, Vreme b){
    if ( a.hh == b.hh && b.mm == a.mm && a.nnn == b.nnn && a.ss == b.ss ){
        return true;
    }else{
        return false;
    }
}

*/

Vreme Vreme::operator++(int a){
    this->ss++;
    if ( this->ss == 60 ){
        this->ss = 0;
        this->mm++;
        if ( this->mm == 60 ){
            this->mm = 0;
            this->ss++; //nisu definisali sta raditi ako je 34 odnosno 23 + 1
        }
    }

    return *this;
}

Vreme::operator long(){
    int broj = 0;
    broj = this->ss*1000000000;
    broj+= this->nnn;
    broj+= (this->mm)*60*1000000000;
    broj+= (this->hh)*60*60*1000000000;

    return broj;
}

std::ostream& operator<<(std::ostream &os, Vreme a){
    std::string h = "";
    std::string m = "";
    std::string s = "";
    std::string nn = "";

    if ( a.hh < 10 ) h+="0", h+=(char)(a.hh+'0');
    else{
        h+=(char)( (a.hh/10) + '0' );
        h+=(char)( (a.hh%10) + '0' );
    }

    if ( a.mm < 10 ) m+="0", m+=(char)(a.mm+'0');
    else{
        m+=(char)( (a.mm/10) + '0' );
        m+=(char)( (a.mm%10) + '0' );
    }

    if ( a.ss < 10 ) s+="0", s+=(char)(a.ss+'0');
    else{
        s+=(char)( (a.ss/10) + '0' );
        s+=(char)( (a.ss%10) + '0' );
    }

    if ( a.nnn < 10 ) nn+="00", nn+=(char)(a.nnn+'0');
    else{
        if ( a.nnn < 100 ){
            nn+="0";
            nn+=(char)( (a.nnn/10) + '0' );
            nn+=(char)( (a.nnn%10) + '0' );
        }else{
            nn+=(char)( (a.nnn/100) + '0' );
            nn+=(char)( ( (a.nnn/10) % 10 ) + '0' );
            nn+=(char)( (a.nnn%10) + '0' );
        }
    }

    return os<<h<<":"<<m<<":"<<s<<":"<<nn<<"\n";
}
