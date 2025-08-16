# LLD Design Patterns in C++

This repository contains implementations of Low-Level Design (LLD) patterns in C++. Each pattern is demonstrated with clear, concise code examples.

## Contents

- [StrategyDesignPattern.cpp](StrategyDesignPattern.cpp): Implementation of the Strategy Design Pattern.
- [ObserverPattern/](ObserverPattern/): Implementation of the Observer Design Pattern.

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

## Observer Design Pattern

The Observer Design Pattern allows objects (observers) to be notified automatically when the state of another object (observable) changes. This implementation demonstrates a product stock notification system using email and mobile observers.

### Implementation Files

- `ObserverPattern/Observer/Observer.h`: Observer interface.
- `ObserverPattern/Observer/EmailObserver.h`: Email observer implementation.
- `ObserverPattern/Observer/MobileObserver.h`: Mobile observer implementation.
- `ObserverPattern/Observable/Observable.h`: Observable interface.
- `ObserverPattern/Observable/iphoneObservable.h`: iPhone observable implementation.

### Example Usage

Observers (email and mobile) are registered to an observable (iPhone stock). When the stock is updated, all observers are notified.

### How to Run

1. Compile all files in the ObserverPattern directory:
    ```sh
    g++ Store.cpp -o store
    ```

2. Run the executable:
    ```sh
    ./store
    ```

### Expected Output

```
mail sent to : xyz@gmail.com with message: Product is in stock hurry up
mail sent to : abc@gmail.com with message: Product is in stock hurry up
SMS sent to : 1234567890 with message: Product is in stock hurry up
```