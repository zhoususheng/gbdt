/*
 * data file parser
 */

#include <vector>
#include "instance.h"

class Header {
 public:
  std::vector<attribute> attributes;
};

class Parser() {
 public:
  virtual bool parseFile(const char* file) = 0;
 protected:
  virtual void parseHeader() = 0;
  virtual void parseData() = 0;
  ios::istream in;
  InstanceMatrixPtr _instances;
};
/*
class CSVParser : public Parser {
  virtual bool parseHeader(Header& head);
  virtual bool parseData();
  } 
*/
class ARFFParser: public Parser {
 public:
  virtual InstanceMatrixPtr parseFile(const char* file);
 private:
  virtual parseHeader();
  virtual parseData();
};
