unsigned okunan,
int ledler;

void kurulum(){
         GPIO_Digital_Output(GPIO_BASE,_GPIO_PINMASK_12);
         ADC1_Init();
         ADC_Set_Input_Channel(_ADC_CHANNEL_1);
}

void main() {
           kurulum();
           while(1){
           okunan=ADC1_Get_Sample(1);
           if(okunan>=2000)
           {GPIOD_ODR.B12=1;}
           }
           else
           {
           GPIOD_ODR.B12=0;
           delay_ms(150);}
}
