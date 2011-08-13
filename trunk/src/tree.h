/*
 * decition tree - binary split
 * cut theory:
 * 2011-8-10
 */

#include "node.h"
namespace treeboost
{
  class DTree
  {
    public:
      bool grow(const SampleSet& samples);
    private:
      Cut CalculateBestCut();
      Node* _pRoot;
  };
}
/* vim:expandtab:ts=2:shiftwidth=2
