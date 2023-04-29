#ifndef USERADAPTER_H
#define USERADAPTER_H

#include "PatronesEstructurales/AdaptadorChatGPT/user.h"
#include "PatronesEstructurales/AdaptadorChatGPT/userapi.h"
#include "iuserdata.h"

// Clase Adapter que adapta la interfaz IUserData al servicio externo UserAPI
class UserAdapter : public IUserData {
public:
  UserAdapter(User* user, UserAPI* api) : user_(user), api_(api) {}
      std::string getUserName() override {
        return user_->name.empty() ? api_->getUserName(user_->userId) : user_->name;
  }
  std::string getUserEmail() override {
    return user_->email.empty() ? api_->getUserEmail(user_->userId) : user_->email;
  }

  std::string getUserData(){};
  // Otros métodos para obtener información del usuario
private:
  User* user_;
  UserAPI* api_;
};

#endif // USERADAPTER_H
