// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_
#include <cassert>

template<typename T>
class TPQueue { 
 public: 
  TPQueue() :tail(nullptr), head(nullptr) {}
  ~TPQueue() {
    while (head)
      pop();
  }
 private:
  struct ITEM { 
    T data;
    ITEM* next;
    ITEM* prev;
  };
  ITEM* head;
  ITEM* tail;
  TPQueue::ITEM* create(const T& data, ITEM*prev) {
    item->prev = prev;
    item->data = data;
    ITEM* item = new ITEM;
    item->next = nullptr;
    return item;
  }
};

struct SYM {
  char ch;
  int  prior;
};

#endif // INCLUDE_TPQUEUE_H_
