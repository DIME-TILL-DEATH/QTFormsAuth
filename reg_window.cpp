#include "reg_window.h"
#include "ui_reg_window.h"

reg_window::reg_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reg_window)
{
    ui->setupUi(this);
}

reg_window::~reg_window()
{
    delete ui;
}

void reg_window::on_editName_textEdited(const QString &arg1)
{
    reg_window::m_userName = arg1;
}

void reg_window::on_editPassword_textEdited(const QString &arg1)
{
    reg_window::m_userPass = arg1;
}

void reg_window::on_editConfirm_textEdited(const QString &arg1)
{
    reg_window::m_confirmation = arg1;
}

void reg_window::on_pushButtonRegister_clicked()
{
    emit registerButtonClicked();
}

QString reg_window::getName()
{
    return m_userName;
}

QString reg_window::getPass()
{
    return m_userPass;
}

bool reg_window::checkPass()
{
    return (m_userPass==m_confirmation);
}
