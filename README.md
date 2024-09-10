# DNA Extraction Machine Tester

This console-based application is designed for testing an automated DNA extraction machine. It allows service engineers to run individual tests, suites of tests, or all tests in a batch, focusing on the machine's critical components.

## Features

- Run individual tests (e.g., `run test_comms`)
- Run a suite of tests (e.g., `run suite sensors`)
- Run all tests in a batch (e.g., `run all`)
- Clear output indicating pass/fail status of tests

## Structure

The application is modular, allowing for easy extensibility. New tests can be added by creating new test classes in the `tests` directory.

## Building the Application

To build the application, run:

```bash
make