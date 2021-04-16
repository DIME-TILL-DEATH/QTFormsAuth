#include "auth_window.h"
#include "ui_auth_window.h"

auth_window::auth_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::auth_window)
{
    ui->setupUi(this);
}

auth_window::~auth_window()
{
    delete ui;
}

void auth_window::on_editName_textEdited(const QString &arg1)
{
    auth_window::m_username = arg1;
}

void auth_window::on_editPassword_textEdited(const QString &arg1)
{
    auth_window::m_userpass = arg1;
}

void auth_window::on_pushButtonLogIn_clicked()
{
    emit loginButtonClicked();
}

void auth_window::on_pushButtonRegister_clicked()
{
    emit authRegisterButtonClicked();
}

QString auth_window::getLogin()
{
    return auth_window::m_username;
}

QString auth_window::getPass()
{
    return auth_window::m_userpass;
}
