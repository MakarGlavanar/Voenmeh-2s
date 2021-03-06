#include "../../lib/sdl2/include/SDL.h"

#include "../core/linkedList/linked_list.cpp"
#include "../core/train/train.h"

#ifndef _TRAIN_LIST
#define _TRAIN_LIST

class TrainList
{
private:
  const int limit = 2;
  int page;
  LinkedList<Train>* trainList;

public:
  void setList(LinkedList<Train>*);

  void nextPage();

  void prevPage();

  void setPage(int);

  int getPagesCount();

  void render(SDL_Renderer*, int, int);
};

#endif
