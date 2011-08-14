#include "sample.h"

using namespace std;

Sample::Sample() {

}

Sample::~Sample() {
}

bool Sample::addVar(VarType value) {
  return true;
}

bool Sample::addVar(int index, VarType value) {
  return true;
}


void SparseSample::clear() {
}

WeightType SparseSample::getWeight() const {
}

bool SparseSample::isSparse() const {
  return true;
}

int SparseSample::getDimension() const {
}

TargetType SparseSample::getTarget() const {
}

bool SparseSample::getVar(int index, VarType& value) const {
}

void DenseSample::clear() {
}

WeightType DenseSample::getWeight() const {
}

bool DenseSample::isSparse() const {
  return true;
}

int DenseSample::getDimension() const {
}

TargetType DenseSample::getTarget() const {
}

bool DenseSample::getVar(int index, VarType& value) const {
}

/* vim:expandtab:ts=2:shiftwidth=2 */
