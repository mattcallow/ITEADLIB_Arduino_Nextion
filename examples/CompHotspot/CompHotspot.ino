/**
 * @example CompHotspot.ino
 *
 * @par Show how to use API of class NexHotspot.  
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

#include "NexHotspot.h"

NexHotspot hot0    = NexHotspot(0, 1, "hot0");
NexHotspot hot1    = NexHotspot(0, 2, "hot1");

NexTouch *nexListenList[] = 
{
    &hot0,
    &hot1,
    NULL
};

void hot0PushCallback(void *ptr)
{
    dbSerialPrintln("hot0PushCallback");
    dbSerialPrint("ptr=");
    dbSerialPrintln((uint32_t)ptr);
}

void hot1PushCallback(void *ptr)
{
    dbSerialPrintln("hot1PushCallback");    
    dbSerialPrint("ptr=");
    dbSerialPrintln((uint32_t)ptr);
}

void hot0PopCallback(void *ptr)
{
    dbSerialPrintln("hot0PopCallback");
    dbSerialPrint("ptr=");
    dbSerialPrintln((uint32_t)ptr);
}

void hot1PopCallback(void *ptr)
{
    dbSerialPrintln("hot1PopCallback");
    dbSerialPrint("ptr=");
    dbSerialPrintln((uint32_t)ptr);
}

void setup(void)
{
    dbSerialBegin(9600);
    nexInit();
    hot0.attachPush(hot0PushCallback, &hot0);
    hot0.attachPop(hot0PopCallback, &hot0);
    hot1.attachPush(hot1PushCallback, &hot1);
    hot1.attachPop(hot1PopCallback, &hot1);
    dbSerialPrintln("setup done");
}

void loop(void)
{
    dbSerialPrintln("nexLoop");
    nexLoop(nexListenList);
}
