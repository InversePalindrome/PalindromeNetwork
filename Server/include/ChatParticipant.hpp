/*
Copyright (c) 2019 InversePalindrome
Palindrome Network Server - ChatParticipant.hpp
http://inversepalindrome.com
*/


#pragma once

#include <string>


class ChatParticipant
{
public:
	virtual ~ChatParticipant() = default;

	virtual void on_message(std::string const& message) = 0;
};