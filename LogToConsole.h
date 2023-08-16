#ifndef __LOGGER___LOGTOCONSOLE_H
#define __LOGGER___LOGTOCONSOLE_H

#include <iostream>

#include "ILogger.h"

using namespace std;

class LogToConsole : public ILogger {
private:
    void Log(string type, string message) {
        cout << "[" << type << "] " << message << endl;
    }

public:
    void LogInfo(string message) override {
        Log("INFO", message);
    }

    void LogError(string message) override {
        Log("ERROR", message);
    }

};


#endif //__LOGGER___LOGTOCONSOLE_H
