#include "TicTac.h"

TicTac::TicTac()
{

}
TicTac::TicTac(string content)
{
	this->content = content;
}
void TicTac::Restart(string content)
{
	this->content = content;
}
void TicTac::setContent(string )
{
	this->content = content;

}
string TicTac::player1Input()
{
	return content="O";
}
string TicTac::player2Input()
{
	return content = "X";
}
string TicTac::getContent()
{
	return content;
}