#include <iostream>

// c++ class not only contain attribute (value) explicitly but also funtionality (behaviour)
// whereas in c attribute (value) exist explicitly while fuctionailty we implicitly create
class Client {
public:
    void orderBankAccount() {
        std::cout << "Acoount opened: [" 
                  << name << " " << surname <<"]" 
        << std::endl;

    }

    std::string name;
    std::string surname;
};

int main() {
    Client clientObj;
    clientObj.name = "Alpha";
    clientObj.surname = "Bravo";

    clientObj.orderBankAccount();
}