/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ujn.czd.wangzhe;

public class FaShi extends Hero{
    static int count;

    public FaShi(String name, int hp, int power, int defence) {
        super(name, hp, power, defence);
        count++;
    }
    
    public void makeMagic (Hero hero) {
        System.out.println("法师" + this.name + "对" + hero.name + "使用了一次魔法");
        hero.hp >>= 1;
        this.hp += hero.hp;
    }
}
