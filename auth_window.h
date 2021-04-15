#ifndef AUTH_WINDOW_H
#define AUTH_WINDOW_H

#include <QWidget>

namespace Ui {
class auth_window;
}

class auth_window : public QWidget
{
    Q_OBJECT

public:
    explicit auth_window(QWidget *parent = nullptr);
    ~auth_window();

    QString getLogin();
    QString getPass();

signals:
    void loginButtonClicked();
    void registerButtonClicked();

private slots:
    void on_editName_textEdited(const QString &arg1);
    void on_editPassword_textEdited(const QString &arg1);
    void on_pushButtonLogIn_clicked();
    void on_pushButtonRegister_clicked();

private:
    Ui::auth_window *ui;
    QString m_username;
    QString m_userpass;
};

#endif // AUTH_WINDOW_H
