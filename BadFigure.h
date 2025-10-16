#pragma once
#include <string>
#include <exception>

class BadFigure : public std::exception {
private:
	std::string _msg;
public:
	BadFigure(const std::string& msg) : _msg(msg) {}
	const char* what() const noexcept override {
		return _msg.c_str();
	}
};


