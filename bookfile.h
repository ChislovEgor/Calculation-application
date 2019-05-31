#ifndef	bookfile_h
#define	bookfile_h
#include	<QFile>
struct	recType   // структура записи данных одной фигуры
{	QString T,xy[16];   };
class	bookFile
{
    QFile	*f;    // указатель на объект класса QFile
    bool	k1,k2,k3,k4,ff; // ключи поиска
public:
    recType r;  // буфер ввода-вывода
    bookFile();  // конструктор
    ~bookFile(); // деструктор
    bool	addRec(recType r); // добавление записи в файл
    bool	readRec();// чтение записи из файда
    void	readChart(recType *r1);//поиск записей
};
#endif
