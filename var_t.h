/*
** var_t.h for gpio_oop in /home/marcin/Coding/code_workspace/C/gpio_oop
**
** Made by MB
** Login   <>
**
** Started on  Mon May 22 8:53:48 PM 2023 MB
** Last update Wed May 23 8:11:24 PM 2023 MB
*/

#ifndef VAR_T_H_
# define VAR_T_H_

extern int Current;
extern int Voltage; 

typedef enum
{
    OFF = 0,
    ON,
} status;

typedef enum
{
    STOPED = 0,
    ACTIVE,
} state;

typedef enum 
{
    DENY = 0,
    ALLOW,
}flag;

typedef struct 
{
    status R1;
    status R2;
    status R3;
} relayconf;

typedef enum 
{
    STOP = 0,
    INIT,
    PCHRG,
    RUN,
} wrklevel;

#endif /* !VAR_T_H_ */
