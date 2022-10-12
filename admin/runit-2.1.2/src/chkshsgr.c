/* Copyright (c) 2004-2014 G. Pape.
 * Copyright (c) 2022 Stefanos Stefanidis.
 * runit is licensed under the 3-clause BSD License.
 */

#include <unistd.h>
#include <grp.h>

int main()
{
  short x[4];

  x[0] = x[1] = 0;
  if (getgroups(1,x) == 0) if (setgroups(1,x) == -1) _exit(1);
  _exit(0);
}
