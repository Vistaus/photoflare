/*

  Tool manager class. Handles the different drawing tools.

*/


#ifndef TOOLMANAGER_H
#define TOOLMANAGER_H

#include <QObject>

class PaintBrushTool;
class ToolManagerPrivate;

class ToolManager : public QObject
{
    Q_OBJECT
public:
    static ToolManager* instance();
    ~ToolManager();

    PaintBrushTool* paintBrush() const;

private:
    explicit ToolManager(QObject *parent = 0);
    Q_DISABLE_COPY(ToolManager)

    ToolManagerPrivate *d;

    static ToolManager *m_instance;
};

#endif // TOOLMANAGER_H