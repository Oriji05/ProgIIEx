//
//  templateFunction.ipp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 18/04/25.
//

template <class T> void printCounter (T obj) {
    cout << obj.getCounter() << endl;
}

template <class T> void inputVector (string messaggio, vector<T> &vettore){
    cout << messaggio << endl;
    for (int i = 0; i < vettore.size(); ++i){
        cout << "[" << i << "]" <<endl;
        cin >> vettore[i];
    }
}


template <class T> void showVector(string messaggio, vector<T> &vettore) {
    cout << messaggio << endl;
    for (int i = 0; i < vettore.size(); ++i){
        cout << vettore[i] << " [" << i << "]" << endl;
    }
}

template <class T, class U> void scalXVector(T scalare, vector<U> &vettore){
    for (int i = 0; i < vettore.size(); ++i) {
        vettore[i] = vettore[i] * scalare;
    }
}


template <class T, class U> T prodScalVector(vector<T> &v1, vector<U> &v2) {
    T ps = 0;
    
    for (int i = 0; i < v1.size(); ++i) {
        ps = ps + (v1[i] * v2[i]);
    }
    return ps;
}


template <class T> void operator >> (T i, Couple<T> &c){
    T a, b;
    c.get(a, b);
    c.set(a, i);
}
