//
// Created by Ray_1024 on 24.11.2024.
//

#ifndef VECTOR2_H
#define VECTOR2_H

namespace endora {
    template<typename T>
    class Vector2 {
    public:
        T x, y;

        Vector2() : x(0), y(0) {
        }

        Vector2(T x, T y) : x(x), y(y) {
        }

        Vector2(const Vector2 &other) : x(other.x), y(other.y) {
        }
    };
} // endora

#endif //VECTOR2_H
