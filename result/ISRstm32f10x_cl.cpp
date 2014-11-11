
/*********************************************************
 * ISRstm32f10x_cl.cpp
 * Automatic generated source file for MCU stm32f10x_cl
 *
 *
 **/
#include "ISRstm32f10x_cl.h"
__attribute__((naked, noreturn)) void ISR::DefaultHandler()
{
   for(;;);
}


#ifdef USE_MEMORY_ISR
__attribute__((section(".isr_vector"))) const ISR::ShortVectors interruptsVectorTable =
#else
__attribute__((section(".isr_vector"))) const ISR::Vectors interruptsVectorTable =
#endif
{
#ifdef USE_MEMORY_ISR
   _estack,
   ISR::Reset
};

__attribute__((section(".isr_vector2"))) ISR::Vectors MeminterruptsVectorTable =
{
#endif
   _estack,
   ISR::Reset,
   ISR::NMI,
   ISR::HardFault,
   ISR::MemManage,
   ISR::BusFault,
   ISR::UsageFault,
   {0, 0, 0, 0},
   ISR::SVC,
   ISR::DebugMon,
   {0},
   ISR::PendSV,
   ISR::SysTickTimer,
   ISR::WWDG_IRQ,
   ISR::PVD_IRQ,
   ISR::TAMPER_IRQ,
   ISR::RTC_IRQ,
   ISR::FLASH_IRQ,
   ISR::RCC_IRQ,
   ISR::EXTI0_IRQ,
   ISR::EXTI1_IRQ,
   ISR::EXTI2_IRQ,
   ISR::EXTI3_IRQ,
   ISR::EXTI4_IRQ,
   ISR::DMA1_Channel1_IRQ,
   ISR::DMA1_Channel2_IRQ,
   ISR::DMA1_Channel3_IRQ,
   ISR::DMA1_Channel4_IRQ,
   ISR::DMA1_Channel5_IRQ,
   ISR::DMA1_Channel6_IRQ,
   ISR::DMA1_Channel7_IRQ,
   ISR::ADC1_2_IRQ,
   ISR::CAN1_TX_IRQ,
   ISR::CAN1_RX0_IRQ,
   ISR::CAN1_RX1_IRQ,
   ISR::CAN1_SCE_IRQ,
   ISR::EXTI9_5_IRQ,
   ISR::TIM1_BRK_IRQ,
   ISR::TIM1_UP_IRQ,
   ISR::TIM1_TRG_COM_IRQ,
   ISR::TIM1_CC_IRQ,
   ISR::TIM2_IRQ,
   ISR::TIM3_IRQ,
   ISR::TIM4_IRQ,
   ISR::I2C1_EV_IRQ,
   ISR::I2C1_ER_IRQ,
   ISR::I2C2_EV_IRQ,
   ISR::I2C2_ER_IRQ,
   ISR::SPI1_IRQ,
   ISR::SPI2_IRQ,
   ISR::USART1_IRQ,
   ISR::USART2_IRQ,
   ISR::USART3_IRQ,
   ISR::EXTI15_10_IRQ,
   ISR::RTCAlarm_IRQ,
   ISR::OTG_FS_WKUP_IRQ,
   {0, 0, 0, 0, 0, 0, 0},
   ISR::TIM5_IRQ,
   ISR::SPI3_IRQ,
   ISR::UART4_IRQ,
   ISR::UART5_IRQ,
   ISR::TIM6_IRQ,
   ISR::TIM7_IRQ,
   ISR::DMA2_Channel1_IRQ,
   ISR::DMA2_Channel2_IRQ,
   ISR::DMA2_Channel3_IRQ,
   ISR::DMA2_Channel4_IRQ,
   ISR::DMA2_Channel5_IRQ,
   ISR::ETH_IRQ,
   ISR::ETH_WKUP_IRQ,
   ISR::CAN2_TX_IRQ,
   ISR::CAN2_RX0_IRQ,
   ISR::CAN2_RX1_IRQ,
   ISR::CAN2_SCE_IRQ,
   ISR::OTG_FS_IRQ,
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
   ISR::BootRAM,

};
#pragma weak Reset                = DefaultHandler 
#pragma weak NMI                  = DefaultHandler 
#pragma weak HardFault            = DefaultHandler 
#pragma weak MemManage            = DefaultHandler 
#pragma weak BusFault             = DefaultHandler 
#pragma weak UsageFault           = DefaultHandler 
#pragma weak SVC                  = DefaultHandler 
#pragma weak DebugMon             = DefaultHandler 
#pragma weak PendSV               = DefaultHandler 
#pragma weak SysTickTimer         = DefaultHandler 
#pragma weak WWDG_IRQ             = DefaultHandler 
#pragma weak PVD_IRQ              = DefaultHandler 
#pragma weak TAMPER_IRQ           = DefaultHandler 
#pragma weak RTC_IRQ              = DefaultHandler 
#pragma weak FLASH_IRQ            = DefaultHandler 
#pragma weak RCC_IRQ              = DefaultHandler 
#pragma weak EXTI0_IRQ            = DefaultHandler 
#pragma weak EXTI1_IRQ            = DefaultHandler 
#pragma weak EXTI2_IRQ            = DefaultHandler 
#pragma weak EXTI3_IRQ            = DefaultHandler 
#pragma weak EXTI4_IRQ            = DefaultHandler 
#pragma weak DMA1_Channel1_IRQ    = DefaultHandler 
#pragma weak DMA1_Channel2_IRQ    = DefaultHandler 
#pragma weak DMA1_Channel3_IRQ    = DefaultHandler 
#pragma weak DMA1_Channel4_IRQ    = DefaultHandler 
#pragma weak DMA1_Channel5_IRQ    = DefaultHandler 
#pragma weak DMA1_Channel6_IRQ    = DefaultHandler 
#pragma weak DMA1_Channel7_IRQ    = DefaultHandler 
#pragma weak ADC1_2_IRQ           = DefaultHandler 
#pragma weak CAN1_TX_IRQ          = DefaultHandler 
#pragma weak CAN1_RX0_IRQ         = DefaultHandler 
#pragma weak CAN1_RX1_IRQ         = DefaultHandler 
#pragma weak CAN1_SCE_IRQ         = DefaultHandler 
#pragma weak EXTI9_5_IRQ          = DefaultHandler 
#pragma weak TIM1_BRK_IRQ         = DefaultHandler 
#pragma weak TIM1_UP_IRQ          = DefaultHandler 
#pragma weak TIM1_TRG_COM_IRQ     = DefaultHandler 
#pragma weak TIM1_CC_IRQ          = DefaultHandler 
#pragma weak TIM2_IRQ             = DefaultHandler 
#pragma weak TIM3_IRQ             = DefaultHandler 
#pragma weak TIM4_IRQ             = DefaultHandler 
#pragma weak I2C1_EV_IRQ          = DefaultHandler 
#pragma weak I2C1_ER_IRQ          = DefaultHandler 
#pragma weak I2C2_EV_IRQ          = DefaultHandler 
#pragma weak I2C2_ER_IRQ          = DefaultHandler 
#pragma weak SPI1_IRQ             = DefaultHandler 
#pragma weak SPI2_IRQ             = DefaultHandler 
#pragma weak USART1_IRQ           = DefaultHandler 
#pragma weak USART2_IRQ           = DefaultHandler 
#pragma weak USART3_IRQ           = DefaultHandler 
#pragma weak EXTI15_10_IRQ        = DefaultHandler 
#pragma weak RTCAlarm_IRQ         = DefaultHandler 
#pragma weak OTG_FS_WKUP_IRQ      = DefaultHandler 
#pragma weak TIM5_IRQ             = DefaultHandler 
#pragma weak SPI3_IRQ             = DefaultHandler 
#pragma weak UART4_IRQ            = DefaultHandler 
#pragma weak UART5_IRQ            = DefaultHandler 
#pragma weak TIM6_IRQ             = DefaultHandler 
#pragma weak TIM7_IRQ             = DefaultHandler 
#pragma weak DMA2_Channel1_IRQ    = DefaultHandler 
#pragma weak DMA2_Channel2_IRQ    = DefaultHandler 
#pragma weak DMA2_Channel3_IRQ    = DefaultHandler 
#pragma weak DMA2_Channel4_IRQ    = DefaultHandler 
#pragma weak DMA2_Channel5_IRQ    = DefaultHandler 
#pragma weak ETH_IRQ              = DefaultHandler 
#pragma weak ETH_WKUP_IRQ         = DefaultHandler 
#pragma weak CAN2_TX_IRQ          = DefaultHandler 
#pragma weak CAN2_RX0_IRQ         = DefaultHandler 
#pragma weak CAN2_RX1_IRQ         = DefaultHandler 
#pragma weak CAN2_SCE_IRQ         = DefaultHandler 
#pragma weak OTG_FS_IRQ           = DefaultHandler 
#pragma weak BootRAM              = DefaultHandler 

