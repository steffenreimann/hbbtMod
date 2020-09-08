


# atifactory World Sizes

1 Foundation is in Game World Size X= 800, Y= 800, Z= 400
1 Foundation is in SF World Size X= 8m, Y= 8m, Z= 4m





# Splitter Functions

## Switch Mode

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


## Add Output Filter
### This is for Mode 2 

addOutputFilter('Name of Item':String, OutputIndex:Int)

return (FilterItems:Array[String], index:int, desc:string, msg:String)

```lua

filterItems, index, desc, msg = upSplitter:addOutputFilter('test', 0)
print('Index'..index..'// '..hbbt.toString(filterItems)..' // '..desc..' // '..msg)
```




## Get Output Filter

upSplitter:getOutputFilter(OutputIndex:Int)

return (FilterItems:Array[String], index:int, desc:string, msg:String)

```lua
filterItems, index, desc, msg = upSplitter:getOutputFilter(0)
print('Index'..index..'// '..hbbt.toString(filterItems)..' // '..desc..' // '..msg)
```





## Clear Output Filter
### This is for Mode 2 

upSplitter:clearOutputFilter(All?:Boolean, OutputIndex:Int, ArrayIndex:Int)

return (FilterItems:Array[String], index:int, desc:string, msg:String)

```lua
filterItems, index, desc, msg = upSplitter:clearOutputFilter(true, 0, 0)
print('Index'..index..'// '..hbbt.toString(filterItems)..' // '..desc..' // '..msg)
```





## Get All Outputs
### Development Function


```lua
print(upSplitter:getAllOutputs())
```