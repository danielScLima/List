#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <vector>

/*!
 * \brief The NodeOfList struct
 */
struct NodeOfList
{
    /*!
     * \brief NodeOfList
     */
    NodeOfList()
    {
        next = nullptr;
        this->data = "";
    }

    /*!
     * \brief NodeOfList
     * \param data
     */
    NodeOfList(const std::string& data)
    {
        this->data = data;
        next = nullptr;
    }

    std::string data = "";
    struct NodeOfList* next = nullptr;
};

/*!
 * \brief The List class
 */
class List
{
public:
    /*!
     * \brief List
     */
    List();
    
    ~List();

    /*!
     * \brief insertInHead
     * \param data
     */
    void insertInHead(const std::string& data);
    /*!
     * \brief insertInTail
     * \param data
     */
    void insertInTail(const std::string& data);

    /*!
     * \brief removeInHead
     * \return
     */
    NodeOfList *removeInHead();
    /*!
     * \brief removeInTail
     * \return
     */
    NodeOfList *removeInTail();

    /*!
     * \brief getElementsAsVector
     * \return
     */
    std::vector<std::string> getElementsAsVector();

private:
    struct NodeOfList* head = nullptr;
    struct NodeOfList* tail = nullptr;
};

#endif // LIST_H
