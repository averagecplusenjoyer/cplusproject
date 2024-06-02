#include "top_players.h"
#include "ui_top_players.h"

top_players::top_players(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::top_players)
{
    ui->setupUi(this);
}

top_players::~top_players()
{
    delete ui;
}
