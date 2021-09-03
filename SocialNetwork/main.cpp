#include "homescreen.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QScopedPointer>
#include <QDateTime>
#include <QTextEdit>
#include "nameuser.h"
QScopedPointer<QFile> m_logFile;
QScopedPointer<QTextEdit> m_logEditText;
QScopedPointer<HomeScreen> m_homeScreen;
void massageHandler(QtMsgType type, const QMessageLogContext &context,const QString &msg);
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qInstallMessageHandler(massageHandler);
    NameUser user;
    user.exec();
    m_logFile.reset(new QFile("Log-"+user.getName()+".txt"));
    m_logFile.data()->open(QIODevice::WriteOnly |QIODevice::Append| QIODevice::Text);
    m_logEditText.reset(new QTextEdit);
    m_logEditText.data()->setDocumentTitle(user.getName());
    m_logEditText->setFixedSize(600,500);
    m_homeScreen.reset( new HomeScreen (user.getName(),m_logEditText.data()));
    m_homeScreen.data()->show();
    return a.exec();
}
void massageHandler(QtMsgType type, const QMessageLogContext &context,const QString &msg)
{
    QTextStream out( m_logFile.data());
    out <<  QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz ");
    switch(type) {
    case QtInfoMsg:     out<<"INF"; break;
    case QtDebugMsg:    out<<"DBG"; break;
    case QtFatalMsg:    out<<"FTL"; break;
    case QtWarningMsg:  out<<"WRN"; break;
    case QtCriticalMsg: out<<"CRT"; break;
    }
    out << context.category << ": " << msg << '\n';
    out.flush();
    m_logEditText->append(msg);
}
