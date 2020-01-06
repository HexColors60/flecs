/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef SAVE_TO_FILE_BAKE_CONFIG_H
#define SAVE_TO_FILE_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs.h>

/* Headers of private dependencies */
#ifdef SAVE_TO_FILE_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#ifndef SAVE_TO_FILE_STATIC
  #if SAVE_TO_FILE_IMPL && (defined(_MSC_VER) || defined(__MINGW32__))
    #define SAVE_TO_FILE_EXPORT __declspec(dllexport)
  #elif SAVE_TO_FILE_IMPL
    #define SAVE_TO_FILE_EXPORT __attribute__((__visibility__("default")))
  #elif defined _MSC_VER
    #define SAVE_TO_FILE_EXPORT __declspec(dllimport)
  #else
    #define SAVE_TO_FILE_EXPORT
  #endif
#else
  #define SAVE_TO_FILE_EXPORT
#endif

#endif
