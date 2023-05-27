#include "src/App.h"
#include "src/Service/DisplayService/DisplayServiceInterface.h"
int main() {
    return App::create(
            new Service::ConsoleDisplayService()
            )->start();
}
