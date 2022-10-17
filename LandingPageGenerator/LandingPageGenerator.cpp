#include "Helpers.h"
#include "WebPage.h"

inline std::string Title()
{
    std::string title = "**** Webpage Maker CLI ****\n";
    return title;
}

int main()
{
    WebPage landingPage;

    std::cout << Title() << "\n\n";

    landingPage.ReadValues();
    landingPage.Create();

    std::cout << "Wrote to " + landingPage.FileName() << ".\n";

    return 0;
}