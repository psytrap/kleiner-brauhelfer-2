#ifndef TABABSTRACT_H
#define TABABSTRACT_H

#include <QWidget>
#include "settings.h"

class TabAbstract : public QWidget
{
    Q_OBJECT

public:
    explicit TabAbstract(QWidget *parent = nullptr);

    virtual void saveSettings();
    virtual void restoreView(bool full);
    virtual void modulesChanged(Settings::Modules modules);

    void setTabActive(bool active);
    bool isTabActive() const;

    virtual bool isPrintable() const;
    virtual void printPreview();
    virtual void toPdf();

protected:
    virtual void onTabActivated();
    virtual void onTabDeactivated();
    void setVisibleModule(Settings::Module module, const QVector<QWidget*>& widgets);

private:
    bool mIsTabActive;
};

#endif // TABABSTRACT_H
