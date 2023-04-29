#ifndef IUSERDATA_H
#define IUSERDATA_H


// Interfaz para obtener los datos del usuario
#include <string>
class IUserData {
public:
  virtual std::string getUserName() = 0;
  virtual std::string getUserEmail() = 0;
  // Otros métodos para obtener información del usuario
};


#endif // IUSERDATA_H
