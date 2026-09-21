#include <iostream>
#include <algorithm>
using namespace std;

#define int long long 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arrSize,q,w;
    cin >> arrSize;
    int arr1[arrSize];
    for(int i=0; i < arrSize; i++)
        cin >> arr1[i];
        sort(arr1, arr1 + arrSize);
        cin >>q;

      
        while(q--)
        {
        int l,r;
        l=0; 
        r= arrSize-1;
        bool checker = false;
        cin >> w;

        while(l <=r)
            {
                int mid = l + (r-l)/2;
                int z= arr1[mid]*arr1[mid]*arr1[mid]+arr1[mid]*arr1
                [mid]+arr1[mid];
                if(z == w)
                    {
                        checker =true;
                        break;
                    }
                    else if(z > w)
                        r= mid -1;
                        else    
                            l =mid +1;
                        
            }
            if(checker)
                cout <<"YES"<<endl;
                else
                cout <<"NO"<<endl;
        }


}
