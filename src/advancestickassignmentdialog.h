#ifndef ADVANCESTICKASSIGNMENTDIALOG_H
#define ADVANCESTICKASSIGNMENTDIALOG_H

#include <QDialog>

#include "joystick.h"

namespace Ui {
class AdvanceStickAssignmentDialog;
}

class AdvanceStickAssignmentDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit AdvanceStickAssignmentDialog(Joystick *joystick, QWidget *parent = 0);
    ~AdvanceStickAssignmentDialog();
    
protected:
    void refreshStickConfiguration();
    void refreshVDPadConfiguration();

    Joystick *joystick;

signals:
    void stickConfigurationChanged();
    void vdpadConfigurationChanged();

private:
    Ui::AdvanceStickAssignmentDialog *ui;

private slots:
    void checkForAxisAssignmentStickOne();
    void checkForAxisAssignmentStickTwo();

    void changeStateStickOneWidgets(bool enabled);
    void changeStateStickTwoWidgets(bool enabled);
    void changeStateVDPadWidgets(bool enabled);

    void populateDPadComboBoxes();

    void changeVDPadUpButton(int index);
    void changeVDPadDownButton(int index);
    void changeVDPadLeftButton(int index);
    void changeVDPadRightButton(int index);
};

#endif // ADVANCESTICKASSIGNMENTDIALOG_H
