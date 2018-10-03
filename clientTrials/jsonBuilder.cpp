//
// Created by farida on 02/10/18.
//

#include "jsonBuilder.h"

jsonBuilder::jsonBuilder() {}

json jsonBuilder::createMPointer(std::string dataType) {
    json creatempointer;

    creatempointer["purpose"] = "creatempointer";
    creatempointer["datatype"] = dataType;

    return creatempointer;
}

json jsonBuilder::addMPointerValue(int value, int id) {
    json addmpointervalue;

    addmpointervalue["purpose"] = "addmpointervalue";
    addmpointervalue["value"] = value;
    addmpointervalue["id"] = id;

    return addmpointervalue;
}

json jsonBuilder::copyMPointer(int id, int id2) {
    json copympointer;

    copympointer["purpose"] = "copympointer";
    copympointer["id1"] = id;
    copympointer["id2"] = id2;

    return copympointer;
}

json jsonBuilder::deleteMPointer(int id) {
    json deletempointer;

    deletempointer["purpose"] = "deletempointer";
    deletempointer["id"] = id;

    return deletempointer;
}

json jsonBuilder::sortMPointerDir(std::string algorithm) {
    json sortmpointerdir;

    sortmpointerdir["purpose"] = "sortmpointerdir";
    sortmpointerdir["algorithm"] = algorithm;

    return sortmpointerdir;
}

json jsonBuilder::startGCThread() {
    json startgcthread;

    startgcthread["purpose"] = "startgcthread";

    return startgcthread;
}
