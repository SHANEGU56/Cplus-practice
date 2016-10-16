
void decode_huff(node* root,string s)
{
    int i = 0;
    node* temp=root;
    string result = "";
    if(!root) cout << result;
    while (i < s.length())
    {
        while (temp->data == '\0')
        {
            if (s[i] == '1')
            {
                temp = temp->right;
                i++;
            }
            else
            {
                temp = temp->left;
                i++;
            }
        }
        result += temp->data;
        temp = root;
    }
    cout << result;
}