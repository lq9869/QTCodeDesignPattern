//
//  OldDriver.h
//  QTCodeDesignPattern
//
//  Created by lq9869 on 16/9/13.
//  Copyright © 2016年 lq9869. All rights reserved.
//
//  如果暴发户生意越来越大，车也越来越多，所以一个司机要负责所有车子的维护，忙不过来，暴发户说：我给你分配几个人手，你只管管好他们就行了。这就是接下来要实现的工厂模式
//  抽象工厂角色： 这是工厂方法模式的核心，它与应用程序无关。是具体工厂角色必须实现的接口或者必须继承的父类。在java中它由抽象类或者接口来实现。
//  具体工厂角色：它含有和具体业务逻辑有关的代码。由应用程序调用以创建对应的具体产品的对象。在java中它由具体的类来实现。
//  抽象产品角色：它是具体产品继承的父类或者是实现的接口。在java中一般有抽象类或者接口来实现。
//  具体产品角色：具体工厂角色所创建的对象就是此角色的实例。在java中由具体的类来实现。
//  使用开闭原则来分析下工厂方法模式。当有新的产品（即暴发户的汽车）产生时，只要按照抽象产品角色、抽象工厂角色提供的合同来生成，那么就可以被客户使用，而不必去修改任何已有的代码。（即当有新产品时，只要创建并基础抽象产品；新建具体工厂继承抽象工厂；而不用修改任何一个类）工厂方法模式是完全符合开闭原则的！
//  使用工厂方法模式足以应付我们可能遇到的大部分业务需求。但是当产品种类非常多时，就会出现大量的与之对应的工厂类，这不应该是我们所希望的。所以我建议在这种情况下使用简单工厂模式与工厂方法模式相结合的方式来减少工厂类：即对于产品树上类似的种类（一般是树的叶子中互为兄弟的）使用简单工厂模式来实现。
//  当然特殊的情况，就要特殊对待了：对于系统中存在不同的产品树，而且产品树上存在产品族（下一节将解释这个名词）。那么这种情况下就可能可以使用抽象工厂模式了。
//  让我们来看看简单工厂模式、工厂方法模式给我们的启迪：
//  如果不使用工厂模式来实现我们的例子，也许代码会减少很多——只需要实现已有的车，不使用多态。但是在可维护性上，可扩展性上是非常差的（你可以想象一下添加一辆车后要牵动的类）。因此为了提高扩展性和维护性，多写些代码是值得的。

#import <Foundation/Foundation.h>
#import "Car.h"

/***OldDriver抽象工厂的角色*/
@interface OldDriver : NSObject

+ (Car *)createCar;

@end
