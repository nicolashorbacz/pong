#ifndef _GAME_HH
#define _GAME_HH

#include "AbstractScreen.hh"
#include "Ball.hh"
#include "Paddle.hh"
#include "ScoreManager.hh"

class Game: public AbstractScreen
{
    public:
        Game();
        ~Game();
        virtual int run(sf::RenderWindow &window) override;
        void collision(Ball &ball, Paddle &leftPaddle, Paddle &rightPaddle, ScoreManager &scoreManager);
        virtual void addObserver(AbstractScreen*) override;

    private:
        AbstractScreen* observer;
};

#endif
