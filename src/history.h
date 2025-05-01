#include "gui.h"

#define HISTORY_FILE_PATH "/home/vlad/Document/kursach/OSISP/OSISP_prj_2025/History.txt"

void writePath(const char* path);

int printHistory();

char* keyEnterHistoryHandler();

void keyUpHistoryHandler();

void keyDownHistoryHandler();

void deletePathFromHistory();

void keyBackspaseHistoryHandler();

WINDOW* createHistoryWindow();

char* historyHandler();