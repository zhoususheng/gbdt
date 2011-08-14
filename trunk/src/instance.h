#include <boost/shared_ptr.hpp>
#include <vector>
typedef float VarType;
typedef float TargetType;
typedef float WeightType;


class Instance {
public:
  Instance();
  virtual ~Instance();
  virtual void clear() = 0;
  virtual WeightType getWeight() const = 0;
  //  virtual void setWeight(WeightType weight) = 0;
  virtual bool isSparse() const = 0;
  virtual bool addVar(VarType value);
  virtual bool addVar(int index, VarType value);
  virtual int getDimension() const = 0;
  virtual TargetType getTarget() const = 0;
  virtual bool getVar(int index, VarType& value) const = 0;
  
  
};
/*
 * dense instance 
 */
class DenseInstance:public Instance {
  virtual void clear() = 0;
  virtual WeightType getWeight() const;
  //  virtual void setWeight(WeightType weight);
  virtual bool isSparse() const;
  virtual int getDimension() const;
  virtual TargetType getTarget() const;
  virtual bool getVar(int index, VarType& value) const;

};

/*
 * sparse instance vector, each variable must have an index, for example
 * [target] 1:3 4:5.6 15:1.4
 * a colon as seperator between index and value
 */
class SparseInstance: public Instance {
  virtual void clear();
  virtual WeightType getWeight() const;
  //  virtual void setWeight(WeightType weight);
  virtual bool isSparse() const;
  virtual int getDimension() const;
  virtual TargetType getTarget() const;
  virtual bool getVar(int index, VarType& value) const;

};

typedef boost::shared_ptr<Instance> InstancePtr;

class InstanceMatrix {
public:
  void setParser(ParserPtr parser);
size_t size() const  { return 1; };

 private:    
  std::vector<InstancePtr> instances;
};
/* vim:expandtab:ts=2:shiftwidth=2 */
