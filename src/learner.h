/*
 * learner
 */

#include "treeboost.h"
#include "instance.h"

class Learner {
 public:
  virtual void train() = 0;
  virtual void setInstances(InstanceMatrixPtr instances) = 0;
  virtual void saveModel(const char* modelFile) const = 0;
};

class GBDT: public Learner {
 public:
  virtual void train();
  virtual void setInstances(InstanceMatrixPtr instances);
 private:
  TreeboostPtr _trees;
  InstanceMatrixPtr _instances; 
};
