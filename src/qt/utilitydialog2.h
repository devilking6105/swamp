// Copyright (c) 2011-2015 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_UTILITYDIALOG2_H
#define BITCOIN_QT_UTILITYDIALOG2_H

#include <QDialog>
#include <QObject>

class BitcoinGUI;
class ClientModel;

namespace Ui {
    class HelpMessageDialog2;
}

/** "Help message" dialog box */
class HelpMessageDialog2 : public QDialog
{
    Q_OBJECT

public:
    enum HelpMode {
        about,
        cmdline,
        pshelp
    };

    explicit HelpMessageDialog2(QWidget *parent, HelpMode helpMode);
    ~HelpMessageDialog2();

    void printToConsole();
    void showOrPrint();

private:
    Ui::HelpMessageDialog2 *ui;
    QString text;

private Q_SLOTS:
    void on_okButton_accepted();
};


/** "Shutdown" window */
class ShutdownWindow2 : public QWidget
{
    Q_OBJECT

public:
    ShutdownWindow2(QWidget *parent=0, Qt::WindowFlags f=0);
    static QWidget *showShutdownWindow2(BitcoinGUI *window);

protected:
    void closeEvent(QCloseEvent *event);
};

#endif // BITCOIN_QT_UTILITYDIALOG2_H
