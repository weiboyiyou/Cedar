/**
* Copyright (C) 2013-2015 ECNU_DaSE.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
* @file ob_cursor_fetch_first_stmt.cpp
* @brief this class  present a "cursor fetch first" logic plan in oceanbase
*
* Created by zhounan: support curosr
*
* @version __DaSE_VERSION
* @author zhounan <zn4work@gmail.com>
* @date 2014_11_23
*/

#include "ob_cursor_fetch_first_stmt.h"

using namespace oceanbase::common;
using namespace oceanbase::sql;
//add by zhounan  2014/9/17
void ObFetchFirstStmt::print(FILE* fp, int32_t level, int32_t index)
{
  UNUSED(index);
  print_indentation(fp, level);
  fprintf(fp, "<ObFetchFirstStmt %d Begin>\n", index);
  print_indentation(fp, level + 1);
  fprintf(fp, "\n");
  print_indentation(fp, level + 1);
  fprintf(fp, "<ObFetchFirstStmt %d End>\n", index);

}
