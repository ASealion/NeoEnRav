#ifndef _DECODER_H
    #define _DECODER_H

    #include <stdio.h>

    class Decoder
    {
        public:
            virtual ~Decoder();


        public:
            virtual bool play(FILE stream);
            virtual bool stop( void );
    };

#endif