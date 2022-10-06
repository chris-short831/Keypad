#ifndef INC_KEYPAD_H_
#define INC_KEYPAD_H_

//Define macros for GPIO registers
#define rowODR GPIOD
#define columnIDR GPIOB
#define LEDbus GPIOC

//Declare functions
void LEDsend(uint32_t key);
void keypadPinInit(void);
void LEDpinInit(void);
uint32_t getKey(void);
uint32_t keyPress(void);

#endif /* INC_KEYPAD_H_ */
