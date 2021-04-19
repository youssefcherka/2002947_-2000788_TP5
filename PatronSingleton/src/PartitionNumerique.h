#pragma once

class PartitionNumerique {
private:
    static PartitionNumerique* Instance_; //Pour creer une instance de la classe il faut acceder a l'attribut Instance_
    PartitionNumerique() = default;


public:
    PartitionNumerique(PartitionNumerique &other) = delete; //Empeche la copie d'un objet de type PartitionNumerique
    void operator=(const PartitionNumerique &) = delete;   //Empeche d'utiliser l'operateur d'affectation pour empecher la copie
    static PartitionNumerique* getInstance() // Cette methode permet d'acceder a l'attribut Instance_et ainsi creer une instance de la classe
};