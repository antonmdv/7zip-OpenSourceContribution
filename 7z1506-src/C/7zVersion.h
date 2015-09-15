#define MY_VER_MAJOR 15
#define MY_VER_MINOR 06
#define MY_VER_BUILD 00
#define MY_VERSION_NUMBERS "15.06"
#define MY_VERSION "15.06 beta"
#define MY_DATE "2015-08-09"
#undef MY_COPYRIGHT
#undef MY_VERSION_COPYRIGHT_DATE
<<<<<<< HEAD

#define MY_AUTHOR_NAME "Anton,Ibrahim,Patrick,Sid"
#define MY_COPYRIGHT_PD "Anton,Ibrahim,Patrick,Sid : Public domain"
#define MY_COPYRIGHT_CR "Anton,Ibrahim,Patrick, Sid"
=======
#define MY_AUTHOR_NAME "Anton,Ibrahim, Patrick, Siddharth"
#define MY_COPYRIGHT_PD "Anton,Ibrahim, Patrick, Siddharth : Public domain"
#define MY_COPYRIGHT_CR "Anton,Ibrahim, Patrick, Siddharth"

>>>>>>> origin/master

#ifdef USE_COPYRIGHT_CR
  #define MY_COPYRIGHT MY_COPYRIGHT_CR
#else
  #define MY_COPYRIGHT MY_COPYRIGHT_PD
#endif

#define MY_VERSION_COPYRIGHT_DATE MY_VERSION " : " MY_COPYRIGHT " : " MY_DATE
