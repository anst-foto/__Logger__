#ifndef __LOGGER___LOGTOFILE_H
#define __LOGGER___LOGTOFILE_H

#include <fstream>

#include "ILogger.h"

using namespace std;

class LogToFile : public ILogger {
private:
    string _pathLogInfo;
    string _pathLogError;

    void Log(string path, string type, string message) {
        ofstream file;
        file.open(path, ios::app);

        file << "[" << type << "] " << message << endl;

        file.close();
    }

public:
    LogToFile(const string &pathLogInfo = "info.log", const string &pathLogError = "error.log") : _pathLogInfo(pathLogInfo),
                                                                       _pathLogError(pathLogError) {}

    void LogInfo(string message) override {
        Log(_pathLogInfo, "INFO", message);
    }

    void LogError(string message) override {
        Log(_pathLogError, "ERROR", message);
    }
};


#endif //__LOGGER___LOGTOFILE_H
