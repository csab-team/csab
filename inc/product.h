//
// CSaB - Counter-Strike Bot based on YaPB by jeefo.
// Copyright © 2021-2022 CSaB Project <bariscodefx@protonmail.com>.
//
// SPDX-License-Identifier: MIT
//

#pragma once

#ifdef VERSION_GENERATED
#  define VERSION_HEADER <version.build.h>
#else
#  define VERSION_HEADER <version.h>
#endif

#include VERSION_HEADER

// simple class for bot internal information
class Product final : public Singleton <Product> {
public:
   struct Build {
      StringRef hash { MODULE_BUILD_HASH };
      StringRef author { MODULE_BUILD_AUTHOR };
      StringRef count { MODULE_BUILD_COUNT };
      StringRef machine { MODULE_BUILD_MACHINE };
      StringRef compiler { MODULE_BUILD_COMPILER };
      StringRef id { MODULE_BOT_BUILD_ID };
   } build { };

public:
   StringRef name { "CSaB" };
   StringRef year { &__DATE__[7] };
   StringRef author { "CSaB Project" };
   StringRef email { "yapb@jeefo.net" };
   StringRef url { "https://yapb.jeefo.net/" };
   StringRef download { "graph.yapb.ru" };
   StringRef folder { "yapb" };
   StringRef logtag { "YB" };
   StringRef dtime { __DATE__ " " __TIME__ };
   StringRef date { __DATE__ };
   StringRef version { MODULE_BOT_VERSION "." MODULE_BUILD_COUNT };
   StringRef cmdPri { "yb" };
   StringRef cmdSec { "yapb" };
};

// expose product info
CR_EXPOSE_GLOBAL_SINGLETON (Product, product);
