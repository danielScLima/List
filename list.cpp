#include "list.h"

List::List()
{

}

List::~List()
{
    NodeOfList* initialHead = head;
    if (initialHead != nullptr)
    {
        NodeOfList* tmp = initialHead->next;
        delete initialHead;
        while (tmp != nullptr)
        {
            head = tmp->next;
            delete tmp;
            tmp = head;
        }
    }
}

void List::insertInHead(const std::string& data)
{
    struct NodeOfList* tmp = new NodeOfList(data);

    if (head == nullptr)
    {
        head = tail = tmp;
    }
    else
    {
        tmp->next = head;
        head = tmp;
    }
}

void List::insertInTail(const std::string& data)
{
    struct NodeOfList* tmp = new NodeOfList(data);

    if (head == nullptr)
    {
        head = tail = tmp;
    }
    else
    {
        tail->next = tmp;
        tail = tmp;
    }
}

NodeOfList *List::removeInHead()
{
    if (head == nullptr)
        return nullptr;
    else
    {
        if (head == tail)
        {
            NodeOfList *tmp = head;
            head = tail = nullptr;
            return tmp;
        }
        else
        {
            NodeOfList *tmp = head;
            head = head->next;
            return tmp;
        }
    }
}

NodeOfList *List::removeInTail()
{
    if (head == nullptr)
        return nullptr;
    else
    {
        if (head == tail)
        {
            NodeOfList *tmp = head;
            head = tail = nullptr;
            return tmp;
        }
        else
        {
            NodeOfList *tmp = tail;
            NodeOfList *t = head;
            while (t->next != tail)
            {
                t = t->next;
            }
            tail = t;
            tail->next = nullptr;

            return tmp;
        }
    }
}

std::vector<std::string> List::getElementsAsVector()
{
    std::vector<std::string> vec;
    NodeOfList* tmp = head;
    while (tmp != nullptr)
    {
        vec.push_back(tmp->data);
        tmp = tmp->next;
    }

    return vec;
}
