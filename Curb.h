#ifndef CURB_H
#define CURB_H

#include "Entity.h"


class Curb : public Entity
{
    public:
        Curb(wxPoint pos, int arena);
        virtual ~Curb();

        void show() override;

    protected:

    private:
};

#endif // CURB_H
