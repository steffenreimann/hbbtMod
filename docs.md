
# Splitter Functions

### Switch Mode

You can switch between 3 Modes 
0 = Normal
1 = Programmable 
2 = Automatic (intiligent)

switchMode(mode:Int)

```lua
mode, dev = upSplitter:switchMode(0)
print(mode)
print(dev)
```



## Add Auto Output Item
### This is for Mode 2 


addAutoOutputItem('Name of Item':String, OutputIndex:Int)

```lua
print(upSplitter:addAutoOutputItem('test', 0))
```

## Get Auto Output
### This is for Mode 2 

upSplitter:getAutoOutput(All?:Boolean, OutputIndex:Int, ArrayIndex:Int)

```lua
print(upSplitter:getAutoOutput(true, 0, 0))
```


## Clear Auto Output
### This is for Mode 2 

upSplitter:clearAutoOutput(All?:Boolean, OutputIndex:Int, ArrayIndex:Int)

```lua
print(upSplitter:clearAutoOutput(true, 0, 0))
```