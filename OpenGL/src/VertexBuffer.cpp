#include "VertexBuffer.h"
#include "Renderer.h"

VertexBuffer::VertexBuffer(const void* data, unsigned int size)
{
    GLCall(glGenBuffers(1, &m_RenderID)); //generate buffer
    GLCall(glBindBuffer(GL_ARRAY_BUFFER, m_RenderID)); //select buffer
    GLCall(glBufferData(GL_ARRAY_BUFFER, size, data, GL_STATIC_DRAW)); //provide buffer with data
}

VertexBuffer::~VertexBuffer()
{
    GLCall(glDeleteBuffers(1, &m_RenderID));
}

const void VertexBuffer::Bind()
{
    GLCall(glBindBuffer(GL_ARRAY_BUFFER, m_RenderID)); //bind buffer

}

const void VertexBuffer::Unbind()
{
    GLCall(glBindBuffer(GL_ARRAY_BUFFER, 0)); //unbind buffer

}
