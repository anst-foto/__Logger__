#include <iostream>

#include "Calculator.h"

#include "LogToConsole.h"
#include "LogToFile.h"

int main() {
    auto logConsole = new LogToConsole();
    auto logFile = new LogToFile("log.txt", "log.txt");

    auto calc = new Calculator();
    calc->AddLogger(logConsole);
    calc->AddLogger(logFile);
    calc->AddLogger(logConsole);
    calc->Add(5, 10);
    calc->Div(5, 0);


    return 0;
}
