template<typename T>
bool isPresent(T *list, T key, int size){
    
    for(int i = 0; i < size; i++)
    {
        if(list[i] == key)
            return true;
    }
    
    return false;
}
