#ifndef __LOGGER___CALCULATOR_H
#define __LOGGER___CALCULATOR_H

#include <vector>

#include "ILogger.h"

using namespace std;

class Calculator {
private:
    vector<ILogger*>* _logger;

    void LogInfo(string message) {
        for (auto item : *_logger) {
            item->LogInfo(message);
        }
    }
    void LogError(string message) {
        for (auto item : *_logger) {
            item->LogError(message);
        }
    }

public:
    Calculator() {
        _logger = new vector<ILogger *>();
    }

    void AddLogger(ILogger* logger) {
        _logger->push_back(logger);
    }

    double Add(double x, double y) {
        double result = x + y;
        LogInfo(to_string(x) + " + " + to_string(y) + " = " + to_string(result));
        return result;
    }

    double Div(double x, double y) {
        if (y == 0) {
            LogError("Divided by zero!");
            return 0;
        }
        double result = x / y;
        LogInfo(to_string(x) + " / " + to_string(y) + " = " + to_string(result));
        return result;
    }

};


#endif //__LOGGER___CALCULATOR_H
