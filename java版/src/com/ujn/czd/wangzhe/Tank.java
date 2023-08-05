/*
 * To change this license header, choose License Headers in Project Properties.
 * To 
change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ujn.czd.wangzhe;

/**
 *
 * @author dell
 */
public class Tank extends Hero{
    static int count;

    public Tank(String name, int hp, int power, int defence) {
        super(name, hp, power, defence);
        count++;
    }
    
}
