/****************************************************************************
 Don't feel alone. Allah is with you!

 I said I failed...
Allah says the believers are successful [Surat al-Mu'minun 23:1]
I said I have a lot of trouble in my life
Allah says, Verily with hardship there is ease [Surah Alam Nasra 94:6]

I said no one is helping me....
Allah says it is my duty to help the believers [Surah Rum 30:47]

I said no one with me.....
Allah says fear not, I am with the believers [Surat al-Ha 20:46]
I said my sins are many.....
Allah says I love those who repent [Surah Baqarah 2:222]

 I said I am always sick......
Allah says: "I have sent the Qur'an as a cure for disease [Surah Bani-Israel 17:82]
I said I don't like this world......
Allah says the Hereafter is better for you than this life [Surah Duha 94:4]

I said victory is far away....
Allah says My help is near [Surah Baqarah 2:214]
I said I am not happy in my life.....
Allah says: Soon your Lord will give you so much that you will be happy [Surah Duha 93:5]

I said I was disappointed all the time.....
Allah says And do not despair and do not grieve [Surah Imran 3:139]
I said none of my plans are succeeding.....
Allah says Allah is the best planner [Surah Imran 3:54]
 ****************************************************************************/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+9;
int minMovesToReach(int x, int y, int k) {
    // Calculate the minimum number of moves required in x and y directions
    int moves_x = (x + k - 1) / k; // Equivalent to ceil(x / k)
    int moves_y = (y + k - 1) / k; // Equivalent to ceil(y / k)
    
    // The total minimum moves is the sum of the moves in both directions
    return moves_x + moves_y;
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
  int t;
    cin >> t;

    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;

        int result = minMovesToReach(x, y, k);
        cout << result << endl;
    }
return 0;
}


int minMovesToReach(int x, int y, int k) {
    int moves_x = (x + k - 1) / k;
    int moves_y = (y + k - 1) / k;

    int total_moves = moves_x + moves_y;

    // If the total number of moves is odd, make it even by adding one more move
    if (moves_x > moves_y) {
        // To make moves even if x-moves are more
        total_moves += (moves_x - moves_y);
    } else if (moves_y > moves_x) {
        // To make moves even if y-moves are more
        total_moves += (moves_y - moves_x);
    }

    return total_moves;
}

