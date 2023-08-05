/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ujn.czd.wangzhe;

public class ZhanShi extends Hero{
    static int count;

    public ZhanShi(String name, int hp, int power, int defence) {
        super(name, hp, power, defence);
        count++;
    }
}
