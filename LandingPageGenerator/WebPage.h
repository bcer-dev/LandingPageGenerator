#pragma once

#include <iostream>
#include <string>

class WebPage
{
private:
	std::string title;
	std::string subtitle;
	std::string backgroundColour;
	std::string foregroundColour;

	std::string GetHeadTag();
	std::string GetBodyTag();

public:
	inline std::string FileName() { return "index.html"; };
	void ReadValues();
	void Create();
};

