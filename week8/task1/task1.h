#ifndef FILE
#define FILE

#define SET_BIT(X,BIT_NUM) X|=(1<<BIT_NUM)
#define CLEAR_BIT(X,BIT_NUM) X&=~(1<<BIT_NUM)
#define READ_BIT(X,BIT_NUM) X=(X&(1<<BIT_NUM))>>BIT_NUM
#define TOGGLE_BIT(X,BIT_NUM) X^=(1<<BIT_NUM)
#define SET_BIT(X,BIT_NUM) X|=(1<<BIT_NUM

#endif