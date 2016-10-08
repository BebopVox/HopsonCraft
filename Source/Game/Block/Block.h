#ifndef BLOCK_H
#define BLOCK_H

#include "OpenGL/Glm/glm_transformations.h"

namespace Block
{

    enum class ID
    {
        Air,
        Grass,
        Dirt,
        Stone
    };

    class Block_Base
    {
        public:
            Block_Base( ID id );

            //These get block texture location inside of the texture atlas
            virtual Vector2 getTextureTop       () const;
            virtual Vector2 getTextureSide      () const;
            virtual Vector2 getTextureBottom    () const;

            bool isOpaque () const;

            ID getID () const;

        private:
            ID m_id;

        public:
            constexpr static int BLOCK_ATLAS_SIZE   = 4096;
            constexpr static int TEXTURE_SIZE       = 128;
    };

} //Namespace Block

#endif // BLOCK_H
