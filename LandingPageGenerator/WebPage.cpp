#include "WebPage.h"
#include "Helpers.h"
#include <fstream>

std::string WebPage::GetHeadTag()
{
    std::string headTag =
        "<head>\n"
            "<title>" + title + "</title>\n"
            "<style>\n"
                "* { margin: 0; padding: 0; box-sizing: border-box; }\n"
                "body {\n"
                    "background-color: " + backgroundColour + ";\n"
                    "color: " + foregroundColour + ";\n"
                    "width: 100%; min-height: 100vh;\n"
                    "display: flex; flex-direction: column;\n"
                    "justify-content: center; align-items: center;\n"
                "}\n"
            "</style>\n"
        "</head>";
        
    return headTag;
}

std::string WebPage::GetBodyTag()
{
    std::string bodyTag =
        "<body>\n"
            "<h1>" + title + "</h1>\n"
            "<h2>" + subtitle + "</h2>\n"
        "</body>";

    return bodyTag;
}

void WebPage::ReadValues()
{
    title = ReadLine("Enter a title: ");
    subtitle = ReadLine("Enter a subtitle: ");
    backgroundColour = ReadLine("Enter a background colour: ");
    foregroundColour = ReadLine("Enter a font colour: ");
}

void WebPage::Create()
{
    std::ofstream htmlFile(FileName(), std::ios::out);

    htmlFile << "<!DOCTYPE html>\n";
    htmlFile << "<html>\n";
    htmlFile << GetHeadTag() << "\n";
    htmlFile << GetBodyTag() << "\n";
    htmlFile << "</html>";

    htmlFile.close();
}
