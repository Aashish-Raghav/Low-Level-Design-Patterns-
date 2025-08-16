# LLD Design Patterns in C++

This repository contains implementations of Low-Level Design (LLD) patterns in C++. Each pattern is demonstrated with clear, concise code examples.

## Contents

- [StrategyDesignPattern.cpp](StrategyDesignPattern.cpp): Implementation of the Strategy Design Pattern.

## Strategy Design Pattern

The Strategy Design Pattern enables selecting an algorithm's behavior at runtime. In this example, different driving strategies are implemented and assigned to vehicles dynamically.

### How to Run

1. Compile the code:
    ```sh
    g++ StrategyDesignPattern.cpp -o strategy
    ```
2. Run the executable:
    ```sh
    ./strategy
    ```

### Output
```
Driving a sports car!
Driving an SUV!
```