## Simple hello world module

## Git setup
### Set SSH key
```
ssh-keygen -C name@mail.address
```
### Get SSH key
```
cat ~/.ssh/id_rsa.pub
```
### Test SSH key
```
ssh -T git@github.com
```

### Init, commits and pushes
```
git config --global user.name "Name"
git config --global user.email "name@mail.address"
git init
touch .gitignore
vim .gitignore
git status
git add .
git commit -m "Commit message" --signoff
git remote remove origin ; if origin exists
git remote add origin git@github.com:name/hello_module.git
git push -u origin master
git log
```
