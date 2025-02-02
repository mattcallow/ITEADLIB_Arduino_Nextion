/**
 * @file NexProgressBar.cpp
 *
 * API of NexProgressBar. 
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

#include "NexProgressBar.h"

/**
 * Constructor,inherited NexTouch's constructor function.
 *
 */
NexProgressBar::NexProgressBar(NexPid pid, NexCid cid, char *name)
    :NexTouch(pid, cid, name)
{
}

/**
 * Get the value of progress bar. 
 * 
 * @param number - an output parameter to save the value of porgress bar.  
 * 
 * @retval true - success. 
 * @retval false - failed. 
 */
bool NexProgressBar::getValue(uint32_t *number)
{
    String cmd = String("get ");
    cmd += getObjName();
    cmd += ".val";
    sendCommand(cmd.c_str());
    return recvRetNumber(number);
}

/**
 * Set the value of progress bar.
 *
 * @param number - the value of progress bar.  
 *
 * @retval true - success. 
 * @retval false - failed. 
 */
bool NexProgressBar::setValue(uint32_t number)
{
    char buf[10] = {0};
    String cmd;
    
    utoa(number, buf, 10);
    cmd += getObjName();
    cmd += ".val=";
    cmd += buf;

    sendCommand(cmd.c_str());
    return recvRetCommandFinished();
}
 
