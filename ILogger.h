#ifndef __LOGGER___ILOGGER_H
#define __LOGGER___ILOGGER_H

#include <string>

using namespace std;

class ILogger {
public:
    virtual void LogInfo(string message) = 0;
    virtual void LogError(string message) = 0;
};


#endif //__LOGGER___ILOGGER_H
