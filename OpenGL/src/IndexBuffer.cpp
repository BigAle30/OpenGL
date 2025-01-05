#include "IndexBuffer.h"
#include "Renderer.h"

IndexBuffer::IndexBuffer(const unsigned int* data, unsigned int count)
    : m_Count(count)
{
    ASSERT(sizeof(unsigned int) == sizeof(GLuint));

    GLCall(glGenBuffers(1, &m_RenderID)); //generate buffer
    GLCall(glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_RenderID)); //select buffer
    GLCall(glBufferData(GL_ELEMENT_ARRAY_BUFFER, count * sizeof(unsigned int), data, GL_STATIC_DRAW)); //provide buffer with data
}

IndexBuffer::~IndexBuffer()
{
}

const void IndexBuffer::Bind()
{
    GLCall(glBindBuffer(GL_ARRAY_BUFFER, m_RenderID)); //bind buffer

}

const void IndexBuffer::Unbind()
{
    GLCall(glBindBuffer(GL_ARRAY_BUFFER, 0)); //unbind buffer

}
