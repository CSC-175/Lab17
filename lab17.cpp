// Definition of findHigh function goes here
template < typename A, typename B, typename C, typename D>
void findHigh(A data[], B size, C &index, D &highVal){
    highVal = data[0];
    for (int i=0; i<size; i++){
        if (data[i] > highVal){
            highVal = data[i];
            index = i;
        }
    }
}