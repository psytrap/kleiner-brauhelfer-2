#ifndef WDGHOPFENGABE_H
#define WDGHOPFENGABE_H

#include <QWidget>

namespace Ui {
class WdgHopfenGabe;
}

class WdgHopfenGabe : public QWidget
{
    Q_OBJECT

public:
    explicit WdgHopfenGabe(int index, QWidget *parent = nullptr);
    ~WdgHopfenGabe();
    bool isEnabled() const;
    bool isValid() const;
    QVariant data(int col) const;
    bool setData(int col, const QVariant &value);
    int row() const;
    QString name() const;
    double prozent() const;
    void setFehlProzent(double value);
    void remove();

public slots:
    void updateValues(bool full = false);

private slots:
    void on_btnZutat_clicked();
    void on_tbMengeProzent_valueChanged(double value);
    void on_tbAnteilProzent_valueChanged(double value);
    void on_btnMengeKorrektur_clicked();
    void on_btnAnteilKorrektur_clicked();
    void on_tbMenge_valueChanged(double value);
    void on_tbMengeProLiter_valueChanged(double value);
    void on_tbKochdauer_valueChanged(int dauer);
    void on_cbZeitpunkt_currentIndexChanged(int index);
    void on_btnLoeschen_clicked();
    void on_btnAufbrauchen_clicked();
    void on_btnNachOben_clicked();
    void on_btnNachUnten_clicked();

private:
    void checkEnabled(bool force);

private:
    Ui::WdgHopfenGabe *ui;
    int mIndex;
    bool mEnabled;
    bool mValid;
};

#endif // WDGHOPFENGABE_H
