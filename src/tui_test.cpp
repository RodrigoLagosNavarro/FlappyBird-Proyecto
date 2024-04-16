#include <ftxui/dom/node.hpp>
#include<ftxui/component/screen.hpp>
#include<ftxui/screen/string.hpp>

using namespace fxtui;

int main(int argc, char const *argv[])
{
    Element label=text("Hola mundo");
    Element container=hbox({label});

    auto screen=Screen::Create(
        Dimension::Full(),
        Dimension::Fit(container)
    );

    Render(screen,container);
    screen.Print();
    return 0;
}
