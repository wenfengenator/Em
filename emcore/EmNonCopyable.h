/* * This file is part of Em Package * *
    Copyright © 2015 Em and/or its subsidiary(-ies). All rights reserved. *
                    Contact: Wenfeng Liu <wenfengenator@gmail.com> * *
    This software, including documentation, is protected by copyright controlled by Em.
    All rights are reserved. Copying, including reproducing, storing, adapting or translating, any or
    all of this material requires the prior written consent of Microsoft Mobile Oy. This material also
    contains confidential information which may not be disclosed to others * without the prior written
    consent of Em. */

#pragma once

namespace Em
{
    //
    // Class defining private copy constructor and copy assignment operator,
    // to prevent copies.
    //
    class NonCopyable
    {
    protected:
        NonCopyable() {}
        ~NonCopyable() {}
    private:
        NonCopyable(const NonCopyable&);
        const NonCopyable& operator=(const NonCopyable&);
    };
} // namespace Em
