   for(int i=0;i<n-1;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(ar[i]+ar[j]==k)
        {   cout<<i<<" "<<j<<endl;
            return true;
        }
    }
    }
    return false;