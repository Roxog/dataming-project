#ifndef TUPLE
#define TUPLE

#include <string>

#include "Data.hpp"

class Tuple{
protected:
   uint32_t id;
   static uint32_t last_id;
public:
   static uint32_t get_new_id(void);
   Tuple();
   Tuple(uint32_t);
   uint32_t get_id()const;
   virtual void insert(Data<std::string>*) = 0;
};

#endif
