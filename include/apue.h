/* 
 * Our own header,to be included before all standard system headers.
 */
#ifndef _APUE_H
#define _APUE_H

#define _POSIX_C_SOURCE 200809L

#include <sys/types.h>          /* some system still require this */
#include <sys/stat.h>           
#include <sys/termios.h>        /* for winsize */


#include <stdio.h>              /* for convenience */
#include <stdlib.h>             /* for convenience */
#include <unistd.h>            /* for concenience */

#define MAXLINE 4096            /* max line length */

void    err_msg(const char *,...);           /* Appendix B */
void    err_dump(const char *,...) __attribute__((noreturn));
void    err_quit(const char *,...) __attribute__((noreturn));
void    err_cont(int,const char *,...);
void    err_exit(int,const char *,...) __attribute__((noreturn));
void    err_ret(const char *,...);
void    err_sys(const char *,...) __attribute__((noreturn));

#include "err.c"
#endif /* _APUE_H */
