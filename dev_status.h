/*
** dev_status.h for gpio_oop in /home/marcin/Coding/code_workspace/C/gpio_oop
**
** Made by MB
** Login   <>
**
** Started on  Mon May 22 9:09:08 PM 2023 MB
** Last update Wed May 23 7:18:24 PM 2023 MB
*/

#ifndef DEV_STATUS_H_
# define DEV_STATUS_H_

#include "var_t.h"
#include <stdio.h>

typedef struct _dev_status
{
    int Ibatt;
    int Vbatt;
    flag Perm;
    wrklevel Lvl;
    relayconf Rel;
} dev_status;

extern dev_status DevStatus;

void DeVSts_update(dev_status * const me);

#endif /* !DEV_STATUS_H_ */
