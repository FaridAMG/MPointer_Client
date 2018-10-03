//
// Created by farida on 02/10/18.
//

#ifndef CLIENTTRIALS_JSONBUILDER_H
#define CLIENTTRIALS_JSONBUILDER_H

#include "json.hpp"
using json = nlohmann::json;


class jsonBuilder {

    json creatempointer;

public:
    jsonBuilder();

    json createMPointer(std::string dataType);
    json addMPointerValue(int value, int id);
    json copyMPointer(int id, int id2);
    json deleteMPointer(int id);
    json sortMPointerDir(std::string algorithm);
    json startGCThread();


};

#endif //CLIENTTRIALS_JSONBUILDER_H
