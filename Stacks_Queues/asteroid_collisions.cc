class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {  // optimized would be to loop from left to right
        stack<int> st;
        vector<int> ans;
        for(int i=0;i<asteroids.size();i++)
        {
            int a=asteroids[i];
            bool alive=true;
            if(a>0 && st.empty())
            {
                st.push(a);
            }
            else
            {
                while (!st.empty() && a < 0 && st.top() > 0) {
                    if (st.top() < -a) {
                        st.pop();              // stack asteroid dies
                    }
                    else if (st.top() == -a) {
                        st.pop();              // both die
                        alive = false;
                        break;
                    }
                    else {
                        alive = false;         // current dies
                        break;
                     }
                     }
                     if(alive)
                     {
                        st.push(a);
                     }
            } 
        }

        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};