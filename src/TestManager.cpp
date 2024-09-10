#include "TestManager.h"
#include "TestComms.h"
#include "TestHeaters.h"
#include "TestMotors.h"
#include "TestSensors.h"
#include "TestLimitSwitches.h"
#include "TestTouchScreen.h"
#include "TestMicrocontroller.h"
#include "TestBuzzers.h"
#include "TestLinuxProcessor.h"
#include <iostream>

TestManager::TestManager() {
    initializeTests();
}

void TestManager::initializeTests() {
    availableTests = {
        "test_comms",
        "test_heaters",
        "test_motors",
        "test_sensors",
        "test_limit_switches",
        "test_touch_screen",
        "test_microcontroller",
        "test_buzzers",
        "test_linux_processor"
    };
}

void TestManager::processCommand(const std::string& command) {
    if (command.substr(0, 4) == "run ") {
        std::string testName = command.substr(4);
        if (testName == "all") {
            runAllTests();
        } else {
            runTest(testName);
        }
    } else if (command.substr(0, 10) == "run suite ") {
        std::string suiteName = command.substr(10);
        runSuite(suiteName);
    } else {
        std::cout << "Invalid command!" << std::endl;
    }
}

void TestManager::runTest(const std::string& testName) {
    if (testName == "test_comms") {
        TestComms commsTest;
        commsTest.run();
    } else if (testName == "test_heaters") {
        TestHeaters heatersTest;
        heatersTest.run();
    } else if (testName == "test_motors") {
        TestMotors motorsTest;
        motorsTest.run();
    } else if (testName == "test_sensors") {
        TestSensors sensorsTest;
        sensorsTest.run();
    } else if (testName == "test_limit_switches") {
        TestLimitSwitches limitSwitchesTest;
        limitSwitchesTest.run();
    } else if (testName == "test_touch_screen") {
        TestTouchScreen touchScreenTest;
        touchScreenTest.run();
    } else if (testName == "test_microcontroller") {
        TestMicrocontroller microcontrollerTest;
        microcontrollerTest.run();
    } else if (testName == "test_buzzers") {
        TestBuzzers buzzersTest;
        buzzersTest.run();
    } else if (testName == "test_linux_processor") {
        TestLinuxProcessor linuxProcessorTest;
        linuxProcessorTest.run();
    } else {
        std::cout << "Test not found!" << std::endl;
    }
}

void TestManager::runSuite(const std::string& suiteName) {
    if (suiteName == "comms") {
        std::cout << "Running communication tests..." << std::endl;
        runTest("test_comms");
    } else if (suiteName == "heaters") {
        std::cout << "Running heaters tests..." << std::endl;
        runTest("test_heaters");
    } else if (suiteName == "motors") {
        std::cout << "Running motors tests..." << std::endl;
        runTest("test_motors");
    } else if (suiteName == "sensors") {
        std::cout << "Running sensors tests..." << std::endl;
        runTest("test_sensors");
    } else if (suiteName == "limit_switches") {
        std::cout << "Running limit switches tests..." << std::endl;
        runTest("test_limit_switches");
    } else if (suiteName == "touch_screen") {
        std::cout << "Running touch screen tests..." << std::endl;
        runTest("test_touch_screen");
    } else if (suiteName == "microcontroller") {
        std::cout << "Running microcontroller tests..." << std::endl;
        runTest("test_microcontroller");
    } else if (suiteName == "buzzers") {
        std::cout << "Running buzzers tests..." << std::endl;
        runTest("test_buzzers");
    } else if (suiteName == "linux_processor") {
        std::cout << "Running Linux processor tests..." << std::endl;
        runTest("test_linux_processor");
    } else {
        std::cout << "No suite found with that name!" << std::endl;
    }
}

void TestManager::runAllTests() {
    std::cout << "Running all tests..." << std::endl;
    for (const auto& test : availableTests) {
        runTest(test);
    }
}