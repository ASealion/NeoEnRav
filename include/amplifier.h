#ifndef _AMPLIFIER_H
    #define _AMPLIFIER_H

    #include <stdint.h>

    class Amplifier
    {
        public:
            virtual ~Amplifier();


        public:
            virtual bool setVolume(uint32_t vol);
            virtual uint32_t getVolume( void );

            virtual void mute( void );
            virtual void unmute( void );
    };

#endif