/* UI color theme. Define THEME_VIRIDIAN (here or via -DTHEME_VIRIDIAN) to
   switch from the original SINO Vanilla palette to the Viridian deep-teal
   theme. gui.c includes this header. Every macro is THEME_-prefixed so it
   cannot collide with identifiers such as local BG/INK/BLUE defines in
   other translation units (settings.c, install.c). */
#ifndef THEME_H
#define THEME_H

#define THEME_VIRIDIAN

#ifdef THEME_VIRIDIAN
/* Viridian: deep-teal wallpaper + cool platinum windows + cerulean folders */

#define THEME_BG   0xd6e0e0u
#define THEME_INK  0x182224u
#define THEME_BLUE 0x1b6ca8u

#define THEME_DESKTOP_BASE      0x015452u
#define THEME_DESKTOP_DOT       0x09605eu
#define THEME_DESKTOP_WATERMARK 0x1d6b69u
#define THEME_DESKTOP_VERSION   0x2b7a78u

#define THEME_FOLDER_BODY    0x52a8dcu
#define THEME_FOLDER_BORDER  0x1c4561u
#define THEME_FOLDER_DIVIDER 0xdbf0fau

#define THEME_WINDOW_BORDER   0x1d2b2bu
#define THEME_WINDOW_BODY     0xf4f8f8u
#define THEME_TITLEBAR_FOCUS  0xd6e0e0u
#define THEME_TITLEBAR_BLUR   0xe5ededu
#define THEME_TITLE_TEXT_BLUR 0x788a8au
#define THEME_TITLEBAR_LINE   0x7a8c8cu
#define THEME_WINDOW_SHADOW   0x002b2au

#define THEME_MENUBAR_BG   0xe8f0f0u
#define THEME_MENUBAR_LINE 0x1d2b2bu

#define THEME_TERM_BG   0x061216u
#define THEME_TERM_INK  0xdae8e8u
#define THEME_TERM_HINT 0x48a8b0u

#else
/* Vanilla: the original SINO Platinum palette */

#define THEME_BG   0xd6d7dbu
#define THEME_INK  0x24252au
#define THEME_BLUE 0x355e9au

#define THEME_DESKTOP_BASE      0x718b9au
#define THEME_DESKTOP_DOT       0x7892a0u
#define THEME_DESKTOP_WATERMARK 0xb4c8d0u
#define THEME_DESKTOP_VERSION   0xd0dce0u

#define THEME_FOLDER_BODY    0x95b4cfu
#define THEME_FOLDER_BORDER  0x4c6377u
#define THEME_FOLDER_DIVIDER 0xdbe7f0u

#define THEME_WINDOW_BORDER   0x383b42u
#define THEME_WINDOW_BODY     0xfafbfcu
#define THEME_TITLEBAR_FOCUS  0xd3d4d9u
#define THEME_TITLEBAR_BLUR   0xe2e3e7u
#define THEME_TITLE_TEXT_BLUR 0x878c96u
#define THEME_TITLEBAR_LINE   0x818690u
#define THEME_WINDOW_SHADOW   0x4b5c69u

#define THEME_MENUBAR_BG   0xe8e9edu
#define THEME_MENUBAR_LINE 0x343a44u

#define THEME_TERM_BG   0x171c25u
#define THEME_TERM_INK  0xd6dce6u
#define THEME_TERM_HINT 0x7d8da6u

#endif
#endif
