/**
 * @example CompPage.ino
 *
 * @par Show how to use API of class NexPage.  
 *
 * @author  Wu Pengfei (email:<pengfei.wu@itead.cc>)
 * @date    2015/7/10
 * @copyright 
 * Copyright (C) 2014-2015 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */
 
#include "NexPage.h"

NexPage page0    = NexPage(0, 0, "page0");
NexPage page1    = NexPage(1, 0, "page1");
NexPage page2    = NexPage(2, 0, "page2");
NexPage page3    = NexPage(3, 0, "page3");

NexTouch *nexListenList[] = 
{
    &page0,
    &page1,
    &page2,
    &page3,
    NULL
};

void page0PopCallback(void *ptr)
{
    dbSerialPrintln("page0PopCallback");
    page1.show();
}

void page1PopCallback(void *ptr)
{
    dbSerialPrintln("page1PopCallback");
    page2.show();
}

void page2PopCallback(void *ptr)
{
    dbSerialPrintln("page2PopCallback");
    page3.show();
}

void page3PopCallback(void *ptr)
{
    dbSerialPrintln("page3PopCallback");
    page0.show();
}

void setup(void)
{   
    dbSerialBegin(9600);
    nexInit();
    dbSerialPrintln("setup begin");
    
    page0.attachPop(page0PopCallback);
    page1.attachPop(page1PopCallback);
    page2.attachPop(page2PopCallback);
    page3.attachPop(page3PopCallback);
    
    dbSerialPrintln("setup end");
}

void loop(void)
{
    dbSerialPrintln("nexLoop");
    nexLoop(nexListenList);
}
