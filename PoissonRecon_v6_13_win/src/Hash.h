#ifndef HASH_INCLUDED
#define HASH_INCLUDED

// #ifdef __linux__ 

// #include <ext/hash_map>
// using namespace __gnu_cxx;

// namespace __gnu_cxx
// {
//   template<> struct hash<long long> {
//     size_t operator()(long long __x) const { return __x; }
//   };
//   template<> struct hash<const long long> {
//     size_t operator()(const long long __x) const { return __x; }
//   };
  
  
//   template<> struct hash<unsigned long long> {
//     size_t operator()(unsigned long long __x) const { return __x; }
//   };
//   template<> struct hash<const unsigned long long> {
//     size_t operator()(const unsigned long long __x) const { return __x; }
//   };
// }

// #else
#include <map>
// #endif

#endif // HASH_INCLUDED

