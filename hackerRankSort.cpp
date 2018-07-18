int lastStoneWeight(vector<int> a) {
    
    int weight = 0;
    sort(a.begin(),.end());
    
    if(a.size()-1  == 0)
        return a[0];
    else{
    for(int i = a.size() -1  ; i >= 0; i--)
    {
        if(i-1 < 0){
            return weight;
            }
        else{
            weight = a[i] >= a[i-1] ? a[i]-a[i-1] : a[i-1]-a[i];
            if(weight > 0){
                a.pop_back();
                a.pop_back();
                a.push_back(weight);    
            
           }
            else
            {
                a.pop_back();
                a.pop_back();
               // i -= 1;
                a.push_back(weight);    
            }
            
        }
            
    }
    }
        return weight;
}