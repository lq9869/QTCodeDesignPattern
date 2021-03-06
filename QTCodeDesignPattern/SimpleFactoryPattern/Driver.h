//
//  Driver.h
//  QTCodeDesignPattern
//  参考自 http://www.cnblogs.com/zhangchenliang/p/3700820.html
//  Created by lq9869 on 16/9/12.
//  Copyright © 2016年 lq9869. All rights reserved.
//
//
//  工厂模式主要是为创建对象提供了接口
//  工厂模式一般分为三类
//  1. 简单工厂模式(Simple Factory)
//  2. 工厂方法模式(Factory Method)
//  3. 抽象工厂模式(Abstract Factory)
//  在什么样的情况下我们应该记得使用工厂模式呢？大体有两点：
//  1.在编码时不能预见需要创建哪种类的实例。
//  2.系统不应依赖于产品类实例如何被创建、组合和表达的细节

//  话说十年前，有一个爆发户，他家有三辆汽车（Benz（奔驰）、Bmw（宝马）、Audi（奥迪）），还雇了司机为他开车。不过，爆发户坐车时总是这样：上Benz车后跟司机说“开奔驰车！”，坐上Bmw后他说“开宝马车！”，坐上 Audi后他说“开奥迪车！”。
//  你一定说：这人有病！直接说开车不就行了？！而当把这个爆发户的行为放到我们程序语言中来，我们发现C语言一直是通过这种方式来坐车的！
//  幸运的是这种有病的现象在OO语言中可以避免了。下面以OC语言为基础来引入我们本文的主题：简单工厂模式！

//  优缺点 首先，符合现实中的情况；而且客户端免除了直接创建产品对象的责任，而仅仅负责“消费”产品（正如暴发户所为）。
//  下面我们从开闭原则上来分析下简单工厂模式。当暴发户增加了一辆车的时候，只要符合抽象产品制定的合同，那么只要通知工厂类知道就可以被客户使用了。（即创建一个新的车类，继承抽象产品Car）那么 对于产品部分来说，它是符合开闭原则的——对扩展开放、对修改关闭；但是工厂类不太理想，因为每增加一辆车，都要在工厂类中增加相应的商业逻辑和判 断逻辑，这显自然是违背开闭原则的。
//  而在实际应用中，很可能产品是一个多层次的树状结构。由于简单工厂模式中只有一个工厂类来对应这些产品，所以这可能会把我们的Driver类坏了。
//  正如我前面提到的简单工厂模式适用于业务简单的情况下或者具体产品很少增加的情况。而对于复杂的业务环境可能不太适应了。这就应该由工厂方法模式来出场了！！
//  如果暴发户生意越来越大，车也越来越多，所以一个司机要负责所有车子的维护，忙不过来，暴发户说：我给你分配几个人手，你只管管好他们就行了。这就是接下来要实现的工厂模式

#import <Foundation/Foundation.h>
#import "Car.h"

typedef NS_ENUM(NSUInteger,CarType) {
    BenzCarType = 0,
    BmwCarType
};

@interface Driver : NSObject

+ (Car *)createCarWithType:(CarType)type;

@end
