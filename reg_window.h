#ifndef REG_WINDOW_H
#define REG_WINDOW_H

#include <QWidget>

namespace Ui {
class reg_window;
}

class reg_window : public QWidget
{
    Q_OBJECT

public:
    explicit reg_window(QWidget *parent = nullptr);
    ~reg_window();
    QString getName();
    QString getPass();
    bool checkPass();

signals:
    void registerButtonClicked();

private slots:
    void on_editName_textEdited(const QString &arg1);
    void on_editPassword_textEdited(const QString &arg1);
    void on_editConfirm_textEdited(const QString &arg1);
    void on_pushButtonRegister_clicked();

private:
    Ui::reg_window *ui;
    QString m_userName;
    QString m_userPass;
    QString m_confirmation;
};

#endif // REG_WINDOW_H
