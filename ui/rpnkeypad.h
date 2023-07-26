#pragma once

#include <QDialog>

#include <QStack>
#include <QDebug>
#include <QScrollBar>

#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class RpnKeypad; }
QT_END_NAMESPACE

#include "rpn-lang/rpn.h"

class QtKeypadController : public QWidget, public rpn::KeypadController
{
    Q_OBJECT

public:
    QtKeypadController(rpn::Interp &rpn, QWidget* parent = nullptr);
    ~QtKeypadController();

    virtual void assignButton(unsigned column, unsigned row, const std::string &rpnword, const std::string &label="") override;
    virtual void assignMenu(const std::string &menu, const std::string &rpnword, const std::string &label="") override;
    virtual void clearAssignedKeys() override;

    private slots:
    void on_button_0_clicked();
    void on_button_1_clicked();
    void on_button_2_clicked();
    void on_button_3_clicked();
    void on_button_4_clicked();
    void on_button_5_clicked();
    void on_button_6_clicked();
    void on_button_7_clicked();
    void on_button_8_clicked();
    void on_button_9_clicked();
    void on_button_dot_clicked();
    void on_button_chs_clicked();
    void on_button_enter_clicked();
    void on_button_back_clicked();

    void on_button_add_clicked();
    void on_button_subtract_clicked();
    void on_button_multiply_clicked();
    void on_button_divide_clicked();
    //    void on_button_ok_clicked();

    void on_programmable_button_clicked();

    void on_file_open();
    void on_file_save_stack();
    void on_file_restore_stack();

 public:
    struct Privates;

 private:
    virtual bool eventFilter(QObject *watched, QEvent *event) override;
    Privates *_p;
};

