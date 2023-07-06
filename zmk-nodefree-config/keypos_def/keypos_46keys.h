/*                              46 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────────────┬────────────────────────────╮ ╭─────────────────────────────┬─────────────────────────────╮
  │  0   1   2   3   4   5     │      6   7   8   9  10  11 │ │ LT5 LT4 LT3 LT2 LT1 LT0     │     RT0 RT1 RT2 RT3 RT4 RT5 │
  │ 12  13  14  15  16  17     │     18  19  20  21  22  23 │ │ LM5 LM4 LM3 LM2 LM1 LM0     │     RM0 RM1 RM2 RM3 RM4 RM5 │
  │ 24  25  26  27  28  29  30 │ 31  32  33  34  35  36  37 │ │ LB6 LB5 LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 RB5 RB6 │
  ╰───────╮     38  39  40  41 │ 42  43  44  45     ╭───────╯  ╰───────╮    LH3 LH2 LH1 LH0 │ RH0 RH1 RH2 RH3     ╭───────╯
          ╰────────────────────┴────────────────────╯                         ╰─────────────┴─────────────╯             */

#pragma once

#define LT0  5  // left-top row
#define LT1  4
#define LT2  3
#define LT3  2
#define LT4  1
#define LT5  0

#define RT0  6  // right-top row
#define RT1  7
#define RT2  8
#define RT3  9
#define RT4 10

#define LM0 17  // left-middle row
#define LM1 16
#define LM2 15
#define LM3 14
#define LM4 13
#define LM5 12

#define RM0 18  // right-middle row
#define RM1 19
#define RM2 20
#define RM3 21
#define RM4 22
#define RM5 23

#define LB0 30  // left-bottom row
#define LB1 29
#define LB2 28
#define LB3 27
#define LB4 26
#define LB5 25
#define LB6 24

#define RB0 31  // right-bottom row
#define RB1 32
#define RB2 33
#define RB3 34
#define RB4 35
#define RB5 36
#define RB6 37

#define LH0 41  // left thumb keys
#define LH1 40
#define LH2 39
#define LH3 38

#define RH0 42  // right thumb keys
#define RH1 43
#define RH2 44
#define RH3 45
