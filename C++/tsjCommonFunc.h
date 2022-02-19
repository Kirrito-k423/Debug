/*
 * @Descripttion: 
 * @version: 
 * @Author: Shaojie Tan
 * @Date: 2022-02-18 23:45:02
 * @LastEditors: Shaojie Tan
 * @LastEditTime: 2022-02-19 21:13:03
 */

#ifndef __tsjFUNCTION_H__
#define __tsjFUNCTION_H__

#ifndef _COLORS_
#define _COLORS_

/* FOREGROUND */
#define RST  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

#define FRED(x) KRED x RST
#define FGRN(x) KGRN x RST
#define FYEL(x) KYEL x RST
#define FBLU(x) KBLU x RST
#define FMAG(x) KMAG x RST
#define FCYN(x) KCYN x RST
#define FWHT(x) KWHT x RST

#define BOLD(x) "\x1B[1m" x RST
#define UNDL(x) "\x1B[4m" x RST

#endif  /* _COLORS_ */

#define valuePrintName(name,a) \
    do { std::cout << FYEL("Value ") << (name) << FYEL(" is ") << (a) << std::endl; } while(false)

#ifdef DEBUG
    #define valuePrint(a) valuePrintName(#a,a)
    #define vectorPrint(a) vectorPrintReal(#a,a)
    #define vector2Print(a) vector2PrintReal(#a,a)
    #define mapPrint(a) mapPrintReal(#a,a)
    #define isEqueue(a,b) \
        do { std::cout << FYEL("Value ") #a FYEL(" and ") #b FYEL(" =? ") << isEqueueFunc(a,b) << std::endl;} while(false)
#else
    #define valuePrint(a) do { } while(0)
    #define vectorPrint(a) do { } while(0)
    #define vector2Print(a) do { } while(0)
    #define mapPrint(a) do { } while(0)
    #define isEqueue(a,b) do { } while(0)
#endif  

int errorPrint(const char* format, ...);
int passPrint(const char* format, ...);
int yellowPrint(const char* format, ...);
int splitPrint(const char* format, ...);

template <typename T>
int vectorPrintReal(char* name,T vec){
    #ifdef DEBUG
    yellowPrint(name);
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";     
    }
    std::cout << std::endl;
    std::cout << std::endl;
    #endif
    return 0;
}

template <typename T>
int vector2PrintReal(char* name,T vec){
    #ifdef DEBUG
    yellowPrint(name);
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            std::cout << vec[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    #endif
    return 0;
}

template <typename T>
int mapPrintReal(char* name,T myMap){
    #ifdef DEBUG
    yellowPrint(name);
    for(auto it = myMap.cbegin(); it != myMap.cend(); ++it)
    {
        std::cout << it->first << "->" << it->second << "; ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    #endif
    return 0;
}

template <typename T>
bool isEqueueFunc(T &A, T  &B) {
  if(A==B){
      passPrint("A==B");
      return true;
  }else{
      errorPrint("A!=B");
      return false;
  }
}

template <typename T>
bool InSet(const T & item, const T & i1, const T & i2, const T & i3) {
  return item==i1 || item==i2 || item==i3;
}

#endif