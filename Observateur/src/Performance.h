#ifndef SOLEIL_H_
#define SOLEIL_H_


#include <iostream>
#include "Observable.h"


class Performance: public Observable {
    public:
        void finirPerformance() { 
            std::cout << "La performance est terminée\n";
            notifier();
        } 
};



#endif /* SOLEIL_H_ */