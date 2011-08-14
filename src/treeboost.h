#include <vector>
#include "instance.h"
class TreeBoost {
  public:
    TreeBoost();
    ~TreeBoost();
    bool Init();
    bool Spawn(InstanceMatrixPtr instance);
  private:
    InstanceMatrixPtr _instances;
    std::vector<Tree> _trees;
};

/* vim:expandtab:ts=2:shiftwidth=2 */
