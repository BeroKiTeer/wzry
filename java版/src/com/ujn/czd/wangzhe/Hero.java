/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ujn.czd.wangzhe;

public class Hero {
    String name;
    int hp;
    int power;
    int defence;

    public Hero(String name, int hp, int power, int defence) {
        this.name = name;
        this.hp = hp;
        this.power = power;
        this.defence = defence;
    }
    
    public void attack (Hero hero) { // 函数attack()就是一个多态函数，它的行为会根据参数hero传递时的具体子类对象来确定
        if (this.hp > 0 && hero.hp > 0) {
            int temp = this.power - hero.defence;
            if (temp > 0) {
                System.out.println(this.name + "攻击了" + hero.name + "一下");
                hero.hp -= temp;
                if (hero.hp < 0) {
                    hero.hp = 0;
                }
            }
        }
    }
    
    public void sayHello () {
        System.out.println("我是" + this.name + "，hp=" + this.hp + "，power=" + this.power + "，defence=" + this.defence);
    }
    
    public void sayGoodbye() {
        System.out.println("青山常在，绿水长流，我" + this.name + "还会再回来的！");
    }
}
