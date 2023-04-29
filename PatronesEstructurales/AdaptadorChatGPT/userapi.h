#ifndef USERAPI_H
#define USERAPI_H


// Clase UserAPI que representa el servicio externo a un API denominado UserAPI
#include <string>
class UserAPI {
public:
  std::string getUserName(int userId) {
    // Lógica para obtener el nombre del usuario a través del API
  }
  std::string getUserEmail(int userId) {
    // Lógica para obtener el email del usuario a través del API
  }
  // Otros métodos para obtener información del usuario a través del API
};


#endif // USERAPI_H
