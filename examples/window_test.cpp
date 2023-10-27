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
    Graphics::Window* window = graphicsEngine->createWindow(800, 400, "Window Test");
    try {
        engine->init(createInfo);
        
        while(graphicsEngine->areWindowsOpen()) {
            engine->update();
        }

    } catch(std::string error) {
        std::cerr << error;
        std::exit(1);
    }
    return 0;
}