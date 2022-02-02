//app.h
// 실행 흐름을 담당

// 초기화 
// 프로그램 시작 시 반드시 한번만 호출되는 기능들.
void app_init();

// 실행(엔진)
// 프로그램 실행 과정에서 반복적으로 호출되는 기능들.
void app_run();

// 종료처리
// 프로그램 종료 시 반드시 한번만 호출되는 기능들.
void app_exit();

void logo();

void ending();

void menuprint();