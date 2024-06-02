#ifndef TOP_PLAYERS_H
#define TOP_PLAYERS_H

#include <QWidget>

namespace Ui {
class top_players;
}

class top_players : public QWidget
{
    Q_OBJECT

public:
    explicit top_players(QWidget *parent = nullptr);
    ~top_players();

private:
    Ui::top_players *ui;
};

#endif // TOP_PLAYERS_H
