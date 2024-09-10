#ifndef TESTMANAGER_H
#define TESTMANAGER_H

#include <string>
#include <vector>

class TestManager {
public:
    TestManager();
    void processCommand(const std::string& command);
    void runTest(const std::string& testName);
    void runSuite(const std::string& suiteName);
    void runAllTests();

private:
    std::vector<std::string> availableTests;
    void initializeTests();
};

#endif // TESTMANAGER_H