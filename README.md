
# Lock Suspend

This is a utility for KDE that locks a screen and then runs the `pm-suspend` utility. This couldn't be done with a simple linux hook since `pm-suspend` can only be run as root but the command to lock the screen requires access to the session dbus of the user. This simple C++ program remedies this situation.

### Requirements 

Once you compile the utility (normal `gcc locksuspend.cpp -o locksuspend`), run the following commands to set the owner to root and then set the uid bit.

```
sudo chown root locksuspend
sudo chmod u+s locksuspend
```

The `locksuspend` command should run then.

### LockHibernate 

The `lockhibernate` command is just like `locksuspend` but instead of suspending (saving the system state to RAM) it puts the system in hibernation (saving the system state to hard disk).

### Software

This works for KDE 5.x, but I haven't tested it on earlier versions.

### Contact

My email is: leonardthesalmon@protonmail.com
