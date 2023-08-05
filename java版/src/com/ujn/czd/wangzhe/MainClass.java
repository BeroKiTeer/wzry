/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ujn.czd.wangzhe;

public class MainClass {
    public static void main(String[] args) {
        ZhanShi lb = new ZhanShi("吕布",100,90,80);
        lb.sayHello();
        Tank cc = new Tank("曹操",120,90,60);
        cc.sayHello();
        lb.attack(cc);
        cc.sayHello();
        FaShi dc = new FaShi("貂蝉",100,70,60);
        dc.sayHello();
        dc.attack(lb);
        dc.attack(cc);
        cc.sayHello();
        lb.sayHello();
        cc.sayHello();
        dc.makeMagic(lb);
        lb.sayHello();
        dc.sayHello();
        dc.sayGoodbye();
        cc.sayGoodbye();
    }
}
