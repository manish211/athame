/* athame.h -- Full vim integration for readline.*/

/* Copyright (C) 2015 James Kolb

   This file is part of the Athame patch for readline (Athame).

   Athame is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Athame is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Athame.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _ATHAME_H_
#define _ATHAME_H_

#ifdef __cplusplus
extern "C" {
#endif

extern void athame_init();
extern char athame_loop(int instream);
extern void athame_cleanup();

#ifdef __cplusplus
}
#endif

#endif /* !_ATHAME_H_ */
