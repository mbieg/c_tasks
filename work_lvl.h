/*
** work_lvl.h for gpio_oop in /home/marcin/Coding/code_workspace/C/gpio_oop
**
** Made by MB
** Login   <>
**
** Started on  Mon May 22 8:40:01 PM 2023 MB
** Last update Wed May 23 7:12:11 PM 2023 MB
*/

#ifndef WORK_LVL_H_
# define WORK_LVL_H_

#include <stdio.h>
#include "var_t.h"
#include "dev_status.h"

void StopLvl_set(dev_status * const );
void InitLvl_set(dev_status * const );
void PrchrgLvl_set(dev_status * const );
void RunLvl_set(dev_status * const );

#endif /* !WORK_LVL_H_ */
