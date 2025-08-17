# LLD Design Patterns in C++

This repository contains implementations of Low-Level Design (LLD) patterns in C++. Each pattern is demonstrated with clear, concise code examples.

## Contents

- [StrategyDesignPattern.cpp](StrategyDesignPattern.cpp): Implementation of the Strategy Design Pattern.
- [ObserverPattern/](ObserverPattern/): Implementation of the Observer Design Pattern.
- [DecoratorPattern/](DecoratorPattern/): Implementation of the Decorator Design Pattern.
- [FactoryPattern/](FactoryPattern/): Implementation of the Factory Design Pattern.

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

## Decorator Design Pattern

The Decorator Design Pattern allows you to add new functionality to objects dynamically without altering their structure. This example demonstrates how to decorate pizzas with extra toppings.

### Implementation Files

- `DecoratorPattern/Base/BasePizza.h`: Abstract base class for pizzas.
- `DecoratorPattern/Base/VegDelight.h`: VegDelight pizza implementation.
- `DecoratorPattern/Base/VegMagrita.h`: VegMargherita pizza implementation.
- `DecoratorPattern/Decorator/decorator.h`: Abstract decorator class.
- `DecoratorPattern/Decorator/ExtraCheese.h`: Extra cheese topping decorator.
- `DecoratorPattern/Decorator/Mushroom.h`: Mushroom topping decorator.
- `DecoratorPattern/shop.cpp`: Example usage.

### Example Usage


Create a pizza object and wrap it with different decorators to add toppings. Each decorator adds its own cost to the base pizza. You can chain multiple decorators to combine toppings and calculate the final cost.


### How to Run

1. Compile all files in the `DecoratorPattern` directory:
    ```sh
    g++ DecoratorPattern/shop.cpp -o shop
    ```

2. Run the executable:
    ```sh
    ./shop
    ```

### Expected Output

```
Cost of VegDelight: 300
Cost of VegDelight with Mushroom: 330
Cost of VegDelight with Mushroom and Extra Cheese: 360
```

## Factory Design Pattern

The Factory Design Pattern provides a way to create objects without exposing the instantiation logic to the client. This example demonstrates how to create different shapes using a factory class.

### Implementation Files

- `FactoryPattern/Shape.h`: Abstract base class for shapes.
- `FactoryPattern/Circle.h`: Circle shape implementation.
- `FactoryPattern/Square.h`: Square shape implementation.
- `FactoryPattern/ShapeFactory.h`: Factory class to create shapes.
- `FactoryPattern/main.cpp`: Example usage.

### Example Usage

The client requests a shape from the factory by specifying the type. The factory returns the appropriate shape object, and the client can use it without knowing the creation details.

### How to Run

1. Compile all files in the `FactoryPattern` directory:
    ```sh
    g++ FactoryPattern/main.cpp -o factory
    ```

2. Run the executable:
    ```sh
    ./factory
    ```

### Expected Output

```
Circle
Square
```