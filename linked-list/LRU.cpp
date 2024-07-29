class node{  
public:
    int key;
    int val;
    node* next;
    node* prev;
    node(int k ,int y): key(k), val(y), next(nullptr), prev(nullptr){}
};

class LRUCache {
public:
    node* head = new node(-1,-1);
    node* tail = new node(-1,-1);
    int cap;
     
    unordered_map<int,node*> hashmap; // key and node itself

    void addnode(node* newnode){
        //adds newnode to next of head
        node* temp = head->next;
        newnode->next = temp;
        newnode->prev = head;
        head->next = newnode;
        temp->prev = newnode;
    }
    void deletenode(node* delnode){ 
        // removes delnode from dll .
        node* delnext = delnode->next;
        node* delprev = delnode->prev;
        delprev->next = delnext;
        delnext->prev = delprev;
    }
    LRUCache(int capacity) {
        cap = capacity;
       // setup doubly linked list
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if(hashmap.find(key)!=hashmap.end()){
            node* temp = hashmap[key];
            deletenode(temp);
            addnode(temp);
            return temp->val;
        }
        else{
            return -1;
        }
    }
    
    void put(int key, int value) {
        if(hashmap.find(key) != hashmap.end()){
            node* temp = hashmap[key];   // get the node
            deletenode(temp);           // delete that node from dll
            hashmap.erase(temp->key);  // remove from map
            temp->val = value;       // make sure value is the latest value
            addnode(temp);        // add it to next of head
            hashmap[key] = head->next;    // update hashmap
        }else{
            if(hashmap.size() == cap){ // if map size == cap then pop LRU node and add new 
                node* temp = tail->prev;  // LRU node
                deletenode(temp);  // delete LRU node
                hashmap.erase(temp->key);  // remove it from map too
            }
            node* newnode = new node(key,value); // create new node
            addnode(newnode); // add new node
            hashmap[key] = newnode;  // update map

        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
