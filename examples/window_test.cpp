#include <iostream>

#include <dragon/core.hpp>
#include <dragon/graphics.hpp>

using namespace Dragon;

int main(void) {
    EngineCreateInfo createInfo;
    createInfo.appName = "Window Test";

    Engine* engine = new Engine();
    Graphics::Engine* graphicsEngine = new Graphics::Engine();
    engine->addSubmodule(dynamic_cast<Submodule*>(graphicsEngine));
    try {
        engine->init(createInfo);
        
        // Initial window created by default
        Graphics::Window* window = graphicsEngine->getWindow(0);

        window->setWindowSize(800, 400);
        window->setWindowTitle("Window Test");

        while(graphicsEngine->areWindowsOpen()) {
            engine->update();
        }

    } catch(std::string error) {
        std::cerr << error;
        std::exit(1);
    }
    return 0;
}