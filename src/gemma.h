/*
    Genome-wide Efficient Mixed Model Association (GEMMA)
    Copyright © 2011-2017, Xiang Zhou
    Copyright © 2017, Peter Carbonetto
    Copyright © 2017, Pjotr Prins

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __GEMMA_H__
#define __GEMMA_H__

#include "param.h"

using namespace std;

class GEMMA {

public:
  // Parameters.
  string version;
  string date;
  string year;

  // Constructor.
  GEMMA(void);

  // Functions.
  void PrintHeader(void);
  void PrintHelp(size_t option);
  void PrintLicense(void);
  void Assign(int argc, char **argv, PARAM &cPar);
  void BatchRun(PARAM &cPar);
  void WriteLog(int argc, char **argv, PARAM &cPar);
};

#endif
